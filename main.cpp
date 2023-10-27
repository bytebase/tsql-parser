#include "TSqlParser.h"
#include "TSqlLexer.h"
#include "TSqlParserBaseListener.h"
#include "antlr4-runtime.h"
#include <iostream>
#include <chrono>

using namespace antlr4;
using namespace parser;

int main(int argc, const char* argv[]) {
  std::ifstream stream;
  stream.open(argv[1]);
  ANTLRInputStream input(stream);
  TSqlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  TSqlParser parser(&tokens);

  auto start = std::chrono::high_resolution_clock::now();


  tree::ParseTree *tree = parser.tsql_file();

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> duration = end - start;
  
  std::cout << "函数执行时间: " << duration.count() << " 秒" << std::endl;

  return 0;
}