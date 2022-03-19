#include<iostream>

using namespace std;

int n[110];

int main()
{
    int i, j, t[10], a[5], cnt, sum, ans;

    for(i = 0, sum = 0; i < 5; i++) {
        cin >> t[i];
        sum = sum + t[i];
        n[t[i]]++;
    }

    for(i = 1, j = 0, cnt = 0; i <= 100; i++) {
        if(n[i] >= 2){
            a[j] = i;
            j++;
            cnt = j;
        }
    }

    if(cnt != 0){
        ans = 1000;
        for(i = 0; i < cnt; i++) {
            if(n[a[i]] > 3){
                n[a[i]] = 3;
            }
            ans = min(ans, sum -(a[i]*n[a[i]]));

        }
    }
    else {
        ans = sum;
    }
    cout << ans << endl;


    return 0;
}
