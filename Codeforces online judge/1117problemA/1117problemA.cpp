#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, ans, cnt,ln, flag, cnt1, ln1, ans1;
    double A[100005], mx;
    vector <int> v, v1;

    scanf("%d", &n);
    mx = -1;
    for(i = 0; i < n; i++) {
        scanf("%lf", &A[i]);
        if(mx < A[i]) mx = A[i];
    }

    if(n == 1) {
        ans = 1;
        printf("%d\n", ans);
    }
    else{
        for(i = 0, cnt = 0, cnt1 = 0; i < n-1; i++) {

            if(A[i] == mx) v.push_back(1);

            if(A[i] == 1 && A[i+1] == 1) {
                cnt1++;
                v1.push_back(cnt1+1);
            }
            else cnt1 = 0;


            if(A[i] == mx && A[i+1] == mx){
                cnt++;
                v.push_back(cnt+1);
            }
            else {
                cnt = 0;
            }

        }

        if(v.size() > 1){
        sort(v.begin(), v.end());
            ln = v.size() - 1;
            ans = v[ln];
        }
        else ans = 1;
        if(v1.size() > 1) {
            sort(v1.begin(), v1.end());
            ln1 = v1.size() - 1;
            ans1 = v1[ln1];
        }
        else ans1 = 1;

        if(ans == 1 && ans1 > ans && mx < 1){
            ans = ans1;
        }

        printf("%d\n", ans);
    }
    return 0;
}
