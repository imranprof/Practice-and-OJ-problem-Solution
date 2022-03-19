#include<stdio.h>

int main()
{
    int Test, i;

    char word[4];


    scanf("%d", &Test);

    for(i = 1; i <= Test; i++){



        scanf("%s", word);

        printf("%d\n", word[0] + word[1] + word[2]);

    }

    return 0;
}
