#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, A[110], n, ans, sumel, j, sumaw, mn;

    cin >> n;

    for(i = 0, sumel = 0; i < n; i++){
        cin >> A[i];
        sumel += A[i];
    }
    sort(A, A+n);
    mn = A[n-1];
    for(i = A[n-1]; ; i++){
        for(j = 0,sumaw = 0; j < n; j++){
            sumaw += (i - A[j]);
        }

        if(sumaw > sumel){
            mn = i;
            break;
        }
    }

    cout << mn << endl;



    return 0;
}
