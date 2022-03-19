#include<iostream>

using namespace std;

int A[100005];
int main()
{
    int k, l, m, n, d, cnt, i;

    cin >> k >> l >> m >> n >> d ;

    for(i = 1; i <= d; i++) {
        if(i % k == 0) A[i] = 1;
        else if(i % l == 0) A[i] = 1;
        else if(i % m == 0) A[i] = 1;
        else if(i % n == 0) A[i] = 1;
    }

    for(i = 1, cnt = 0; i <= d; i++) {
        if(A[i] == 1) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
