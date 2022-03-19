#include<iostream>

using namespace std;

int main()
{
    int i, n, sum, A[110], cnt;

    cin >> n;

    for(i = 0, sum = 0; i < n; i++) {
        cin >> A[i];
        sum = sum + A[i];
    }

    for(i = 0, cnt = 0; i < n; i++) {
        if((sum - A[i]) % 2 == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;


    return 0;
}
