#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int a, b, c, i;
    int A[10];

    for(i = 0; i < 4; i++) {
        scanf("%d", &A[i]);
    }

    sort(A, A+4);

    a = A[3] - A[0];
    b = A[3] - A[1];
    c = A[3] - A[2];

    printf("%d %d %d\n", a, b, c);

    return 0;
}
