#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;

    cin >> n;


    if(n == 0) {
        cout << n <<endl;
    }
    else if((n + 1) % 2 == 0) {
        cout << (n+1) / 2 <<endl;
    }

    else {
        cout << n+1 << endl;
    }

    return 0;
}
