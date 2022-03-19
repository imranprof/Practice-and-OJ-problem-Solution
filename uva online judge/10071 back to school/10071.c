#include<stdio.h>

int main()
{
    int v, t, displace;

    while(scanf("%d%d", &v, &t) == 2)
    {
        displace = (v * t) * 2;

        printf("%d\n", displace);

    }

    return 0;
}
