#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    int i, T;
    double a, b, c, ans;

    cin >> T;

    for(i = 1; i <= T; i++) {

        cin >> a >> b >> c;

        ans = (a*b*c)/((a*b)+(a*c)+(b*c)+2*sqrt((a*b*c)*(a+b+c)));

        printf("%.6lf\n", ans);
    }

    return 0;
}
