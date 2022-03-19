#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int i, j, sumod, last, n, ans;

    while(scanf("%lld", &n) == 1) {

        for(i = 1, sumod = 0; i <= n; i += 2) {
            sumod += i;
        }

        last = (2 * sumod) - 1;

        ans = last + (last-2) + (last-4);

        cout << ans << endl;
    }

    return 0;
}
