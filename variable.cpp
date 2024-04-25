#include<iostream>
using namespace std;
int a=40;
int main()
{
    int a=50;
    cout<<"enter the global variable "<<a<<endl;
    cout<<"enter the local variable "<<::a;
    return 0;
}