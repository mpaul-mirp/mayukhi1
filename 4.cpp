#include <iostream>
#include<cmath>
using namespace std;
int main(){
int a1,b1,a2,b2,a3,b3,d,e,f;
cout<<"Enter value of a1";
cin>>a1;
cout<<"Enter value of b1";
cin>>b1;
cout<<"Enter value of a2";
cin>>a2;
cout<<"Enter value of b2";
cin>>b2;
cout<<"Enter value of a3";
cin>>a3;
cout<<"Enter value of b3";
cin>>b3;
d=sqrt(((a1-a2)*(a1-a2))+((b1-b2)*(b1-b2)));
e=sqrt(((a2-a3)*(a2-a3))+((b2-b3)*(b2-b3)));
f=sqrt(((a3-a1)*(a3-a1))+((b3-b1)*(b3-b1)));
if ((d==e)&&(d==f))
{cout<<"equilateral"<<endl;}
else if  ((d==f)&&(d!=e))
{cout<<"isosceles"<<endl;}
else if  ((e==d)&&(e!=f))
{cout<<"isosceles"<<endl;}
else if  ((f==e)&&(f!=d))
{cout<<"isosceles"<<endl;}
else if ((f!=e)&&(f!=d))
{cout<<"scalene"<<endl;}
return 0;
}
