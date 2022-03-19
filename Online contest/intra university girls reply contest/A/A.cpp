#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, i;

    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> num;
        if(num % 2 == 0) {
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
    }

    return 0;
}
