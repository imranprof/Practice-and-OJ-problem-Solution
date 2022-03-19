#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n, m, i, k, ans;

    scanf("%d%d", &n, &m);



    k = n - m;

    if(k == 0) {
        printf("0\n");
    }
    else if(k == n) {
        printf("1\n");
    }
    else {
      ans = min(k, m);

      printf("%d\n", ans);
    }

    return 0;
}
