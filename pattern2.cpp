#include<iostream>
using namespace std;
int main(){
int n;
int c=0;
cout<<"Enter number";
cin>>n;
for(int i=n;i>=1;i--)
{c=c+1;
 for(int a=i-1;a>=1;a--)
 {cout<<"*";}
 for(int b=1;b<=c;b++)
 {cout<<c;}
  cout<<""<<endl;
}
 return 0;
}
