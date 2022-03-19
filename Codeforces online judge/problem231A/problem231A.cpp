#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, N, solution[1010], count_1, pet, vas, ton;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d %d %d", &pet, &vas, &ton);
        solution[i] = pet + vas + ton;
    }

    for(i = 0, count_1 = 0; i < N; i++) {
        if(solution[i] >= 2) {
            count_1++;
        }

    }

    printf("%d\n", count_1);

    return 0;
}
