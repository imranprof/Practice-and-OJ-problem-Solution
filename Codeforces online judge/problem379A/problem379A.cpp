#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a, b, tot, cnt, i, c;

    scanf("%d%d", &a, &b);

    tot = a;

    while(1)
    {
        cnt = a / b;

        a = cnt + (a % b);
        tot = tot + cnt;

        if(a < b) break;
    }

    printf("%d\n", tot);

    return 0;
}
