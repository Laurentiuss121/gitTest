#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string l1,l2,l3;
    string l4,l5;
    string l8,l9;
    string l6,l7;
  
    
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
    
    l3=static_cast<double>(l3);
    
    outFile<<"Name: "<<l1<<", Department: "<<l2<<endl;
    outFile<<"Monthly Gross Salary: $"<<l3<<", Monthly Bonus: "<<l4 <<".00%, Taxes: "<<l5<<".00%""\n"<<"Paycheck: $"<</*amount*/endl;
    
    outFile<<"Distance Traveled: "<<l6<<".00 miles, Traveling Time: "<<l7<<".00 hours"<<endl;
    outFile<<"Average Speed: "/*<<speed<<*/" miles per hour\n"<<endl;
     
    outFile<<"Number of Coffe Cups Sold: "<<l8<<", Cost: $"<<l9<<" per cup"<<endl;
    outFile<<"Sales Amount = $"<<endl;
    return 0;
}
