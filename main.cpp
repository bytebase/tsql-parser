#include "TSqlParser.h"
#include "TSqlLexer.h"
#include "antlr4-runtime.h"
#include <iostream>
#include <chrono>

using namespace antlrcpptest;
using namespace antlr4;

int main(int argc, const char* argv[]) {
  std::ifstream stream;
  stream.open(argv[1]);
//   std::string line;
//   while (std::getline(stream, line)) {
//       std::cout << line << std::endl;
//   }
  ANTLRInputStream input(stream);
  antlrcpptest::TSqlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  antlrcpptest::TSqlParser parser(&tokens);

  auto start = std::chrono::high_resolution_clock::now();


  tree::ParseTree *tree = parser.tsql_file();

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> duration = end - start;
  
  std::cout << "函数执行时间: " << duration.count() << " 秒" << std::endl;

  return 0;
}