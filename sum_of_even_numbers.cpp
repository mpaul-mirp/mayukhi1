#include <iostream>
#include <string>
using namespace std;
int main()
{int n,i,a;
    a=0;
    cout<<"Enter number";
    cin>>n;
    for (i=0;i<=n;i+=2)
    {a+=i;
    }
    cout<<"The sum of odd numbers is "<<a<<endl;
    return 0;
}
