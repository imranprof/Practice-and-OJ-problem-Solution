#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, s, t, ans;
    int tcase, i;

    scanf("%d", &tcase);

    for(i = 1; i <= tcase; i++) {

    scanf("%lld%lld%lld", &n, &s, &t);

    if(s == t){
        ans = (n-t) + 1;
    }
    else {
        ans = (n- min(s, t))  + 1;
    }

    printf("%lld\n", ans);

    }

    return 0;
}
