#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    int i, t_case;
    double a, b, c, ans;

    cin >> t_case;

    for(i = 1; i <= t_case; i++) {
        cin >> a >> b;

        c = sqrt((a*a) + (b*b));

        ans = c * c;

        printf("Case %d: %.0lf\n", i , ans);
    }

    return 0;
}
