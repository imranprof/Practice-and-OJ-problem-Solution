#include<cstdio>

using namespace std;

int main()
{
    int i, j, x, y, n, t, xr;

    scanf("%d", &t);

    for(i = 1; i <= t; i++) {
        scanf("%d%d", &n, &x);
        xr = n - x;
        if(n < x) {
            y = -1;
        }

        else if(n > x){
            if((xr ^ x)==n) {
                y = xr;
            }
            else {
                y = -1;
            }
        }
        else {
            y = -1;
        }

        printf("%d\n", y);
    }

    return 0;

}
