#include <iostream>
#include <string>
#include <fstream>
#include "function.h"

using namespace std;

int main(int argc, char **argv){
    cout << "Number of Lines: " << countLine("me.txt") << endl;
    cout << "Number of characters: " << countChar("me.txt") << endl;

    return 0;
}
