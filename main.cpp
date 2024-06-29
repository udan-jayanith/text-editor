#include <iostream>
#include <fstream>
#include <string>

#include "include/functions.h"

using namespace std;

int main() {

    string comand;
    cin>>comand;

    if(comand == ":r" || comand == ":rw" || comand == ":wr") openFile();
    else if(comand == ":w" || comand == ":cw" || comand == ":wc") writeToTheFile();



    int close;
    cin>>close;
    return 0;
}