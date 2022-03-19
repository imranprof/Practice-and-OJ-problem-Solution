#include<iostream>
#include<cstdio>
#include<algorithm>


using namespace std;

int main()
{
    int n, k, m, i, j, op, cnt;
    double A[100005], B[100005], avg1, avg2, avg3, sum;

    scanf("%d%d%d", &n, &k, &m);

    for(i = 0; i < n; i++) {
        scanf("%lf", &A[i]);
    }

    sort(A, A+n);

    if(n == 1){
        avg3 = A[0] + k;
    }
    else if(n == 2){
        avg1 = A[1] + k
        }

else{
    if(n <= m) {
        op = m - (n-2);
        if(op > k) {
            avg1 = ((A[n-1] + A[n-2]) + ((op / 2) * k)) / 2;
        }
        else avg1 = ((A[n-1] + A[n-2]) + op) / 2;

        op = m - (n-1);

        if(op >= k){
            avg2  = A[n-1] + k;
        }
        else {
            avg2 = A[n-1] + op;
        }

        avg3 = max(avg1, avg2);

        cout << " avg = " << avg3 << endl;


    }
    else {
        for(i = 0; i < n; i++) {
            if(i >= m){
                B[i] = A[i];
            }
            else {
                B[i] = 0;
            }
        }
        cnt = n - m;

        for(i = 0; i < n; i++){
            sum = sum + B[i];
        }
        cout << "sum = " << sum << " cnt = " << cnt << endl;
        avg3 = sum / cnt;

        cout << "avg = " << avg3 << endl;
    }
}

    return 0;
}
