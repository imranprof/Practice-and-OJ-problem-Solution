#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, count_A, count_D, N;

    char *str;

    scanf("%d", &N);

    str = (char*)malloc(N);

    scanf(" %[^\n]", str);

    for(i = 0, count_A = 0, count_D = 0; str[i] != '\0'; i++) {
        if(str[i] == 'A') count_A++;
        if(str[i] == 'D') count_D++;
    }

    if(count_A > count_D) {
        printf("Anton\n");
    }

    if(count_D > count_A) {
        printf("Danik\n");
    }

    if(count_A == count_D) {
        printf("Friendship\n");
    }

    return 0;
}
