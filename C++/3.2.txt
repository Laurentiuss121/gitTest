#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string l1,l2,l3;
    string l4,l5;
    string l6,l7,l8,l9;
    
    ifstream inFile;
    ofstream outFile;
    inFile.open("inData.txt");
    outFile.open("outData.txt");
    
    getline (inFile,l1);
    getline (inFile,l2);
    getline (inFile,l3);
    getline (inFile,l4);
    getline (inFile,l5);
    getline (inFile,l6);
    getline (inFile,l7);
    getline (inFile,l8);
    getline (inFile,l9);
    
    
    
    outFile<<"Name: "<<l1<<", Department: "<<l2<<endl;
    outFile<<"Monthly Gross Salary: $"<<l3<<", Monthly Bonus: "<<l4 <<".00%, Taxes: "<<l5<<".00%\n"<<endl;
    
 
    return 0;
}