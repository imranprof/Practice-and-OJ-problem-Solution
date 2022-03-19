#include<iostream>

using namespace std;

int main()
{
    int i, n, A[1010];

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> A[i];
    }
    for(i = n-1; i >= 0; i--) {
        if(A[i] % 2 == 0) {
            cout << A[i] << endl;
        }
    }

    return 0;
}
