#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;


void odd(int fnum, int snum) {
    for (int x=fnum;x<=snum;x++) {
        if ((x+1)%2 == 0) {
            cout <<" "<<x;
        }
    }
}

int EvenSum(int fnum, int snum) {
    int sum = 0;
    for (int x= fnum;x<=snum;x++) {
        if (x%2 == 0) {
            sum = sum + x;
        } 
    }
    return sum;
}

void NumSqr(int fnum=1, int snum=10) {
    int power;
    for (int x = fnum;x<=snum;x++) {
        power = pow(x,2);
        cout<<x<<" "<<power<<endl;
    }
}

int oddSqrSum(int fnum, int snum) {
    int oddN, oddNSqr, sum = 0;
    for (int x=fnum;x<=snum;x++) {
        if ((x+1)%2 == 0) {
            oddN = x;
            oddNSqr = pow(oddN,2);
            sum = sum + oddNSqr;
        }
    }
    return sum;
}

void Capital(int A = 65, int B = 90) {
    int x = A;
    while (x<=B) {
        cout<<static_cast<char>(x)<<" ";
        x++;
    }
}

int main() {
    int first, second;
    cout<<fixed<<uppercase;
    cout<<"Enter two numbers.\nThe first must be shorter than the  second."<<endl;
    cin >>first>>second;
    //below is a line to separate.Not Needed
    //
    cout<<"******"<<endl;
    cout<<"The odd numbers between "<<first<<" and "<<second<<" are :";
    
    odd(first,second);
    cout<<endl<<"******"<<endl;
    
    cout <<"The sum of the even numbers between "<<first<<" and "<<second<<" is"<<endl;
    cout<<EvenSum(first,second);
    
    cout<<"\nThe squares of 1 - 10  are:\n**********"<<endl;
    //call 1-10 square function
    NumSqr();
    
    cout<<"The sum of the square of the odd numbers between "<<first<<" and "<<second<<" is: "<<endl;
    cout<<oddSqrSum(first,second)<<endl<<endl;
    
    cout<<"The capital letters are..."<<endl;
    Capital();
    
    return 0;
}
