#include "../functions.h"

#include <fstream> 
#include <cstdlib>
#include <vector>

#include <iostream>
using namespace std;

void writeToTheFile() {

    
    vector<string> texts;

    string textLine;
    int ruleNum = 0, exitNum = 1;

    while(exitNum = 1){

        cout<<"\033[1m"+to_string(1+ruleNum)+"| \033[0m";
        textLine = " ";
        getline(cin, textLine);

        if(textLine == ":q") {
            exitNum = 0;
            break;
        }

        texts.push_back(textLine);
        ruleNum++;
    }

    cout<<"\033[1;31mEnter document name: \033[0m";
    
    string docName;
    cin>>docName;


    if(docName == " " || docName == "") docName = "Untiteled document";
    docName += ".txt";

    ofstream document(docName);

    if (document.is_open()) {

        for(int i = 0; i<ruleNum; i++) document << texts[i] << endl;
        
        document.close();

        cout << "\033[1;31m"+docName+"\033[0m" << "\033[1m has been created and saved successfully.\033[0m\n";

    } else cout << "Unable to created and save the file.\n";


}

