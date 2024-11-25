#include <iostream>
using namespace std;
int main()
{
    int n,i,x=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=n/2;i++)
    {
       if(a[i]!= a[n-1-i])
       {
           x=1;
           break;
       }
    }
    if(x == 0)
    {
        cout<< "YES" <<endl;
    }
    else 
    {
        cout<< "NO" <<endl;
    }
    return 0;
}
