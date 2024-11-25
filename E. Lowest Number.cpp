#include <iostream>
using namespace std;

int main() {
    int n, s, pos = 1;
    cin >> n;  
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    s = a[0];

    for (int i = 0; i < n; i++)
     {
        if (a[i] < s)
         {
            s = a[i];
            pos = i + 1; 
        }
    }

    cout << s << " " << pos << endl;

    return 0;
}
