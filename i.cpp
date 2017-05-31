#include <iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"Enter 1st number";
cin>>a;
cout<<"Enter 2nd number";
cin>>b;
cout<<"Enter 3rd number";
cin>>c;
cout<<"Enter 4th number";
cin>>d;
if (((a>b)&&(a>c))&&(a>d))
{cout<<"The maximum value is"<<a;
 if ((b>c)&&(b>d))
{cout<<"The second largest value is"<<b<<endl;}
 else if ((c>b)&&(c>d))
{cout<<"The second largest value is"<<c<<endl;}
 else if ((d>c)&&(d>b))
{cout<<"The second largest value is"<<d<<endl;}
}
else if (((b>a)&&(b>c))&&(b>d))
{cout<<"The maximum value is"<<b;
 if ((c>a)&&(c>d))
{cout<<"The second largest value is"<<c<<endl;}
 else if ((d>c)&&(d>a))
{cout<<"The second largest value is"<<d<<endl;}
 else if ((a>c)&&(a>d))
{cout<<"The second largest value is"<<a<<endl;}
}
else if (((c>b)&&(c>d))&&(c>a))
{cout<<"The maximum value is"<<c;
if ((a>b)&&(a>d))
{cout<<"The second largest value is"<<a<<endl;}
 else if ((b>a)&&(b>d))
{cout<<"The second largest value is"<<b<<endl;}
 else if ((d>a)&&(d>b))
{cout<<"The second largest value is"<<d<<endl;}
}
else if (((d>a)&&(d>c))&&(d>b))
{cout<<"The maximum value is"<<d;
if ((b>c)&&(b>a))
{cout<<"The second largest value is"<<b<<endl;}
 else if ((c>a)&&(c>b))
{cout<<"The second largest value is"<<c<<endl;}
 else if ((a>c)&&(a>b))
{cout<<"The second largest value is"<<a<<endl;}
}
return 0;
}
