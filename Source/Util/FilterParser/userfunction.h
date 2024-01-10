#include <iostream>

#include "antlr4-runtime.h"
#include "filterLexer.h"
#include "filterParser.h"

inline int test() {
    std::string input = "ID = 3 + 4 * 5;";
    antlr4::ANTLRInputStream inputStream(input);
    filterLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    filterParser parser(&tokens);

    antlr4::tree::ParseTree *tree = parser.filter();
    std::cout << tree->toStringTree(&parser) << std::endl;
    return 0;
}