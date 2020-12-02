#define CATCH_CONFIG_MAIN
#include <iostream>
#include <fstream>
#include <string>
#include "function.h"
#include "catch_amalgamated.hpp"

using namespace std;

TEST_CASE( "Load a file and check the number of lines only") {
    string text = "USA.txt";
    int count;
    count = countLine(text);
    REQUIRE(count == 43);
}

TEST_CASE( "Load a file and check the number of characters only") {
    string text = "USA.txt";
    int count;
    count = countChar(text);
    REQUIRE(count == 2866);
}