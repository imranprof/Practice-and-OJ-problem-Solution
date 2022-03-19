#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i, n, k, A[100010], j;

    cin >> n >> k;

    for(i = 0; i < n; i++) {
        cin >> A[i];
    }

    for(i = 0; i < n; i++ ) {
        if((k-i) > 0){
            k = k - i;
        }
    }
    cout << A[k-1] << endl;

    return 0;
}
