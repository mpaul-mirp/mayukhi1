#include<iostream>
#include<cmath>
using namespace std;
int main(){
float a,b,c,d,e,f;
cout<<"Enter value of a";
cin>>a;
cout<<"Enter value of b";
cin>>b;
cout<<"Enter value of c";
cin>>c;
d=(b*b)-(4*a*c);
cout<<"d="<<d;
e=(-b+sqrt(d))/(2*a);
cout<<"e="<<e;
f=(-b-sqrt(d))/(2*a);
cout<<"f="<<f;
cout<<"The roots of the quadratic equation are"<<e<<"and"<<f<<endl;
return 0;
}
