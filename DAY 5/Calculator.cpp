#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int mai()
{
    cout<<"Enter which operation you want to perform--/n 1. Addition/n 2. Subtraction/n 3. Multiplication/n 4. Division"<<endl;
    int choice;
    cin>>choice;

    switch(choice){
        case 1:
            int a,b;
            cout<<"Enter two numbers"<<endl;
            cin>>a>>b;
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
            break;

        case 2:
            int c,d;
            cout<<"Enter two numbers"<<endl;
            cin>>c>>d;
            cout<<"The difference of "<<c<<" and "<<d<<" is "<<c-d<<endl;
            break;

        case 3:
            int e,f;
            cout<<"Enter two numbers"<<endl;
            cin>>e>>f;
            cout<<"The product of "<<e<<" and "<<f<<" is "<<e*f<<endl;
            break;

        case 4:
            float g,h;
            cout<<"Enter two numbers"<<endl;
            cin>>g>>h;
            if(h!=0)
                cout<<"The division of "<<g<<" by "<<h<<" is "<<g/h<<endl;
            else
                cout<<"Error! Division by zero."<<endl;
            break;

        default:
            cout<<"Invalid choice!"<<endl;
    }
}