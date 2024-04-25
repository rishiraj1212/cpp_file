#include<iostream>
using namespace std;
class ATS 
{ int a,b,c;
public:
ATS()
{a=0; b=0; c=0; }
void input ()
{ cout<<"\n Enter three numbers:";
cin>>a>>b>>c;
}
void output()
{ cout<<"\n A:"<<a;
cout<<"\n B:"<<b;
cout<<"\n C:"<<c;
}
};
int main(){
    ATS p;
   p.input();
   p.output();
}