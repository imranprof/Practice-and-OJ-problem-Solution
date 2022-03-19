#include<stdio.h>

int GCD(int a, int b)
{
    int gcd, t;
    if (a == 0) gcd = a;

    else if (b == 0) gcd = b;

    else {
        while (b != 0) {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }
    return gcd;
}


int main()
{
    int N, G, i, j;

    while(1)
    {
        scanf("%d", &N);

        if (N == 0) {
            break;
        }

        G=0;
        for(i=1;i<N;i++)
            for(j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
            printf("%d\n", G);
    }

    return 0;
}
