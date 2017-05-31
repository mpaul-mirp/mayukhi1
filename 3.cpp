#include<iostream>
using namespace std;
int main()
{
int a,b,c,m;
cout<<"Enter cutoff value for grade A";
cin>>a;
cout<<"Enter cutoff value for grade B";
cin>>b;
cout<<"Enter cutoff value for grade C";
cin>>c;
cout<<"Enter marks:";
cin>>m;
if ((a>b)&&(a>c)&&(b>c)&&(b<a)&&(c<b)&&(c<a)&&(a<100))
{cout<<"valid values";
 if ((m>=a)&&(m<=100))
 {cout<<"A grade"<<endl;}
 else if ((m>=b)&&(m<a))
 {cout<<"B grade"<<endl;}
 else if ((m>=c)&&(m<b))
 {cout<<"c grade"<<endl;}
 }
else 
{cout<<"invalid"<<endl;}
return 0;
}
