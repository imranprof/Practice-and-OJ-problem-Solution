#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i, j, k, N;

    char str[10], str2[10], str3[400];

    scanf(" %[^\n]", str);

    scanf("%d", &N);

    for(i = 0, j = 0; i < N; i++) {
        scanf(" %[^\n]", str2);
        for(k = 0; str2[k] != '\0'; k++) {
            str3[j] = str2[k];
            j++;
        }
    }
    str3[j] = '\0';

    printf("str3 = %s\n", str3);

    return 0;
}
