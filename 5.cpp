#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c,d,e,f;
cout<<"Enter value of a";
cin>>a;
cout<<"Enter value of b";
cin>>b;
cout<<"Enter value of c";
cin>>c;
d=(b*b)-(4*a*c);
e=(-b+sqrt(d))/(2*a);
f=(-b-sqrt(d))/(2*a);
cout<<"The roots of the quadratic equation are"<<e<<"and"<<f<<endl;
return 0;
}
