
#include <iostream>
#include <string>
#include <fstream>
#ifndef FUNCTION_H
#define FUNCTION_H

using namespace std;

int countLine(string fileName){
    int count = 0;
    string text;
    ifstream openFile(fileName);

    if(!openFile){
        cout << "FILE DOES NOT EXIST" << endl;
        exit(EXIT_FAILURE);
    }

    while(getline(openFile, text, '\n')){
        count++;
    }
    openFile.close();

    return count;
}

int countChar(string fileName){
    int count = 0;
    char character;
    ifstream openFile(fileName);

    if(!openFile){
        cout << "FILE DOES NOT EXIST" << endl;
        exit(EXIT_FAILURE);
    }

    while(openFile >> character){
        count ++;
    }
    openFile.close();

    return count;
}

#endif