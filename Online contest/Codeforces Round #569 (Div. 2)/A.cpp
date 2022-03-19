#include<cstdio>

using namespace std;


int main()
{
    int n, i, ans;

    scanf("%d", &n);

    ans = ((n * (n-1)) * 2) + 1;

    printf("%d\n", ans);

    return 0;
}
