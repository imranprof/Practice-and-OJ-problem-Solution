#include<iostream>

using namespace std;

int main()
{
    int i, T;
    unsigned long long N, sum;

    cin >> T;
    for(i = 1; i <= T; i++) {
        cin >> N;

        sum = (N*(N+1))/2;

        if(sum % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
