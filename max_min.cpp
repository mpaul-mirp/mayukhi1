#include<iostream>
using namespace std;
int main(){
int n,a,i,max,min;
cout<<"Enter number of inputs";
cin>>n;
for(i=1;i<=n;i++)
{cout<<"Enter number";
cin>>a;
if(i==1)
{max=a;
min=a;}

if(a>max)
{max=a;}
if(a<min)
{min=a;}
}
cout<<"The maximum value is"<<max<<endl;
cout<<"The minimum value is"<<min<<endl;
return 0;
}
