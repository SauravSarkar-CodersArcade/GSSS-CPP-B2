#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile;
    myFile.open(
            "C:\\Users\\Saurav\\CLionProjects\\GSSS-SEP-CSE-B2-CPP\\Files\\gsss.txt",
            ios::out);
    if (myFile.is_open()){
        myFile << "Hi.\n";
        myFile << "Line 2.\n";
        myFile.close();
    }
    myFile.open(
            "C:\\Users\\Saurav\\CLionProjects\\GSSS-SEP-CSE-B2-CPP\\Files\\gsss.txt",
            ios::app);
    if (myFile.is_open()){
        myFile << "Hello.\n";
        myFile << "Line 4.\n";
        myFile.close();
    }
    return 0;
}
