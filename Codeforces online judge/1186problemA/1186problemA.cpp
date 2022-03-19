#include<cstdio>

using namespace std;

int main()
{
    int n, m, k;

    while(scanf("%d%d%d", &n, &m, &k) == 3){

        if(n<=m && n <= k) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
