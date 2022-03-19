#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A, B;

    while(scanf("%d %d", &A, &B) != EOF)
    {
        if(A  >= B) {
            printf("%d\n", A);
        }

        else {
            printf("%d\n", B);
        }
    }

    return 0;
}
