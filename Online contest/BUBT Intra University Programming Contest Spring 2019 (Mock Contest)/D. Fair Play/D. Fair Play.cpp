#include<cstdio>

using namespace std;

int main()
{
    int A[10], B[10], s, h, t, i, j;

    scanf("%d", &t);

    for(i = 1; i <= t; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d%d", &A[j] ,&B[j]);
        }
        for(j = s = h = 0; j < 3; j++) {
            if(A[j] == 1) {
                s++;
            }
            if(B[j] == 1) {
                h++;
            }
        }

        if(s > h) {
            printf("Case %d: SI\n", i);
        }
        else {
            printf("Case %d: HM\n", i);
        }
    }

    return 0;
}
