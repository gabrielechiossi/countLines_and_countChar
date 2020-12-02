#include <iostream>
#include <string>
#include <fstream>
#include "function.h"

using namespace std;

int main(int argc, char **argv){
    if(argc > 2){
        for(int i = 1; i < argc; i++){
            cout << argv[i] << endl;
        }
    }

    cout << "Number of Lines: " << countLine("me.txt") << endl;
    cout << "Number of characters: " << countChar("me.txt") << endl;

    return 0;
}