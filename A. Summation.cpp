#include <iostream>
using namespace std;
int main()
{
    int N,i;
    long long int x, sum=0;
 
    cin >> N;
 
    for(i=0; i<N ; i++)
    {
        cin >> x;
        sum+=x;
    }
    cout << abs(sum);
 
}
