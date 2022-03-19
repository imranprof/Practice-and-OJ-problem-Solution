#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int x, y, z, ans;

    while(scanf("%d%d%d", &x, &y, &z) == 3) {
        ans = max(x,y);
        ans = max(ans,z);


        cout << ans << endl;
    }

    return 0;
}
