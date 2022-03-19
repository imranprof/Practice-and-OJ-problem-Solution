#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i, j, A[1002], B[1002], mx, sum, n;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }

    mx = B[0] - A[0];
    sum = B[0] - A[0];

    for(i = 1; i < n; i++){
        sum = sum + B[i] - A[i];
        mx = max(mx, sum);
    }

    cout << mx << endl;



    return 0;
}
