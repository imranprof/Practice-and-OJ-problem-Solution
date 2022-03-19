#include<cstdio>

using namespace std;

int main()
{
    long long l, r;

    scanf("%I64d%I64d", &l, &r);

    if(l == r) {
        printf("%I64d\n", r);
    }
    else {
        printf("2\n");
    }

    return 0;
}
