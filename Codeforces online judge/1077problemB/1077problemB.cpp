#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n, A[110], cnt, B[110], cnt2, i;

    while(scanf("%d", &n) == 1){
        for(i = 0; i < n; i++){
            cin >> A[i];

        }

        for(i = 1, cnt = 0; i < n-1; i++){
            if(A[i] == 0 && A[i+1]==1 && A[i-1]==1){
                cnt++;
                A[i+1] = 0;
            }
        }
        cout << cnt << endl;

    }

    return 0;
}
