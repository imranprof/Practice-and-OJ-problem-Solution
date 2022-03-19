#include<stdio.h>

int f91(int n) {

    if(n <= 100) {
        n = f91(f91(n+11));
    }
    if (n >= 101) {
        return n - 10;
    }
}

int main()
{
    int N, pos_int;

    while(1)
    {
        scanf("%d", &N);

        if(N == 0) break;

        pos_int = f91(N);

        printf("f91(%d) = %d\n",N, pos_int);
    }

    return 0;
}
