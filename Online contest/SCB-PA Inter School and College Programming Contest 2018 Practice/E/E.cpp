#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    int i, T;
    double x1, y1, x2, y2, ans;

    cin >> T;

    for(i = 1; i <= T; i++) {
        cin >>x1 >> y1 >> x2 >> y2;

        ans = sqrt((x2-x1)*(x2-x1) + (y2 - y1) *(y2-y1));

        printf("Case %d: %.4lf\n",i, ans );
    }

    return 0;
}
