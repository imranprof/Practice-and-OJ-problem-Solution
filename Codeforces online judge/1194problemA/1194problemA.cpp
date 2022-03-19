#include<cstdio>

using namespace std;

int main()
{
    int i, n, x, t;

    while(scanf("%d", &t)==1){
        for(i = 1; i <= t; i++){
            scanf("%d%d", &n, &x);

            printf("%d\n", x*2);
        }
    }

    return 0;
}
