#include<iostream>
using namespace std;
struct student{
    string name="Rishi Raj";
    int age=20;
};
int main(){
    student s;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    return 0;
}