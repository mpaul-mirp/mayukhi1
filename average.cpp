#include <iostream>
#include <string>
using namespace std;
int main()
{int n,i,a,b;
    a=0;
    cout<<"Enter number";
    cin>>n;
    for (i=1;i<=n;i+=1)
    {a+=i;
    }
    b=a/(i-1);
    cout<<"The average of sum of n numbers"<<a<<endl;
    return 0;
}
