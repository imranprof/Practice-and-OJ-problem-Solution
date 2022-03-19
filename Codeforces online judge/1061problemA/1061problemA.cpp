#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long s, cnt, i, j, n;

    while(scanf("%I64d%I64d", &n, &s) == 2) {
    cnt = 0;
    if(n >= s) cnt = 1;
    else{
        cnt = s / n;
        s = s % n;
        if(s != 0) cnt+= 1;
    }
    cout << cnt << endl;
    }
    return 0;
}
