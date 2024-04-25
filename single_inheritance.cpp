#include<iostream>
using namespace std;
class Rishi{
    public:
    void name1(){
    cout<<"My name is Rishi Raj"<<endl;
    }

};
class Favroit: public Rishi{
    public:
    void name2(){
        cout<<"My favroit fruit is Mango"<<endl;
    }
};
int main(){
    Favroit p;
    p.name1();
    p.name2();
 

    return 0;
}