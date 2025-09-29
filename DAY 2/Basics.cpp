#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name, city;
    int age;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your city:";
    cin>>city;
    cout<<"Hello "<<name<<" you are "<<age<<" years old and you live in "<<city;
    return 0;
}