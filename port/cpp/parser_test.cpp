#include <iostream>
#include <vector>
#include <fstream>
#include <antlr4-runtime.h>
#include "TSqlLexer.h"
#include "TSqlParser.h"
#include "chrono"

using namespace antlr4;
using namespace parser;

const std::string code_path = "../../examples/slow.sql";

int main()
{
    std::vector<std::string> test_file_paths;
    test_file_paths.push_back(code_path);

    for (std::string p : test_file_paths)
    {
        std::ifstream test_file;
        test_file.open(p);
        if (!test_file.is_open())
        {
            std::cerr
                << "Error: Could not open file: " << p << std::endl;
            return 1;
        }
        std::string file_content;
        // Reading the raw content of the file
        while (!test_file.eof())
        {
            std::string line;
            std::getline(test_file, line);
            file_content += line + "\n";
        }
        test_file.close();
        std::cout << file_content << std::endl;

        // Parsing the content of the file
        auto start = std::chrono::high_resolution_clock::now();

        ANTLRInputStream input(file_content);
        TSqlLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        TSqlParser parser(&tokens);
        TSqlParser::Tsql_fileContext *tree = parser.tsql_file();
        auto stop = std::chrono::high_resolution_clock::now();

        std::cout << tree->getText() << std::endl;

        std::cout << "Milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count() << std::endl;
    }
}
