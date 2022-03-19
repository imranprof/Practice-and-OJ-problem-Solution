#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int i, j, cnt, n, r, num;
    vector<int>A, B;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &r);
        for(j = 1; j <= r; j++){
            scanf("%d", &num);
            A.push_back(num);
        }
    }
    sort(A.begin(), A.end());

    for(i = 0, cnt = 0; i < A.size()-1; i++){
        if(A[i] == A[i+1]) cnt++;
        else cnt = 0;
        if(cnt >= n - 1) B.push_back(A[i]);
    }

    for(i = 0; i < B.size(); i++){
        printf("%d", B[i]);
        if(i < B.size()-1) printf(" ");
    }
    cout << endl;

    return 0;
}
