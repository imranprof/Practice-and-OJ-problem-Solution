#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, A[110], mx, cnt, i, flg, flg2;

    while(scanf("%d", &n) == 1){

    for(i = 0; i < n; i++){
        cin >> A[i];
    }


    if(n == 1) mx = 0;
    else{
        mx = 0;
        for(i =cnt =flg =flg2 = 0; i < n-1; i++){
            if((A[i+1] - A[i]) == 1){
                cnt++;
                if(cnt > mx) flg = i+1;
                else if(cnt == mx) flg2 = i+1;
            }
            else {

                cnt = 0;

            }
            mx = max(mx, cnt);

        }
        if(A[flg2] == 1000) flg = flg2;

        if((mx == n-1 && (A[0] == 1 || A[n-1] == 1000)) || (A[flg] == 1000) || (A[0] == 1 && A[flg] - mx == 1)) mx = mx;
        else{
            if(mx != 0) mx = mx - 1;
            else mx = mx;
        }
    }
    if(mx == 1 && n == 2 && (A[1] != 2 && A[1] != 1000)) mx = 0;

    cout << mx << endl;
}

    return 0;
}
