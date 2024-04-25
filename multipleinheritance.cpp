 #include<iostream>
using namespace std;
class Rishi{
    public:
    void name1(){
      cout<<"My name is Rishi Raj"<<endl;
    }
};
class Ashish{
    public:
    void name2(){
    cout<<"My friend name is Ashish kumar"<<endl;
}
};
class favroit: public Rishi, public Ashish{
    public:
    void friend1(){
        cout<<"My favroit friend is Pratipal kumar singh"<<endl;
    }
};
int main(){
    favroit g;
g.name1();
    g.name2();
    g.friend1();

return 0;
}