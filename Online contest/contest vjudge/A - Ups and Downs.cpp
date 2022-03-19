#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n, A[110], i, B[110], j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d",  &A[i]);
    }
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(A[j] == i) {
                B[i] = j;
            }
        }
    }

    for(i = 1; i <= n; i++) {
        printf("%d", B[i]);
        if(i != n) printf(" ");
    }
    printf("\n");


    return 0;
}
