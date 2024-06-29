#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void openFile(){
   
   string locationFolder;
   cout << "Open A Folder: ";
   cin >> locationFolder;

   string fileName;
   cout << "Enter File Name";
   cin >> fileName;

   fstream doc;
   
   if(locationFolder[0] == "C" && locationFolder[1] == ":") doc.open(location ,ios::in); 
   else doc.open(C:\Users\udan\Downloads\Documents); 



   if (doc.is_open()){ 
      string tp;

      while(getline(doc, tp)){ 
         cout << tp << endl; 
      }

      doc.close(); 
   }
   
}