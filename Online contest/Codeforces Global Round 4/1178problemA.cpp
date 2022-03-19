#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, party, total, cnt, A[110], alice, flag;
    vector<int>v;

    scanf("%d", &n);
    total = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
        total = total + A[i];
    }

    party = A[0];
    alice = A[0];

    v.push_back(1);
    cnt = 1;
    flag = 0;

    for(i = 1; i < n; i++){

        if(alice >= (A[i]*2)){
            party = party + A[i];
            v.push_back(i+1);
            cnt+=1;
        }

        if(total < (party * 2)){
        printf("%d\n", cnt);
        for(i = 0; i < v.size(); i++){
            printf("%d ", v[i]);
        }
        flag = 1;
        break;

    }
    }

    if(flag != 1 ){
        printf("0\n");
    }

    return 0;
}
