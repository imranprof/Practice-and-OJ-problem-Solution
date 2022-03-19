#include<stdio.h>
#include<iostream>

using namespace std;

long long int func(int x, int a, int b, int c);

int main()
{
    int a, b, c, d, L, cnt, i;
    long long int equation;

    while(1)
    {
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &L);

        if(a == 0 && b == 0 && c == 0 && d == 0 && L == 0) break;

        for(i = 0, cnt = 0; i <= L; i++) {
            equation = func(i, a, b, c);
            if(equation % d == 0) {
                cnt++;
            }
        }
        printf("%d\n", cnt);

    }

    return 0;
}

long long int func(int x, int a, int b, int c)
{
    return (a * (x * x)) + (b * x) + c;
}

