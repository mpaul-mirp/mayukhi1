#include <iostream>
using namespace std;
int main(){
int a,b,c,n,i;
c=0;

cout<<"Enter number";
cin>>a;
while (a!=0)
{ b=a%10; 
  a/=10;
  c+=b;}
cout<<"The sum of the digits is"<<c<<endl;
return 0;
}
