#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl; //integer division
    cout<<"a%b="<<a%b<<endl; //modulus operator

     // Increment and decrement
    cout << "a++ = " << (a++) << endl; // Post-increment
    cout << "++b = " << (++b) << endl; // Pre-increment

    // Display values of a and b
    cout << "a = \t" << a << " b = " << b << endl;

    double result1 = a / b; // Integer division stored in double --> result1 is 3
    double result2 = (double)a / b; // Explicit type casting --> result2 is 3.5

    cout << "Integer division (a / b): " << result1 << endl;
    cout << "Type cast division ((double)a / b): " << result2 << endl;

    return 0;
}