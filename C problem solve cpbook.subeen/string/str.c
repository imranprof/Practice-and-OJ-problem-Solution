#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i, j, Test, valout;

    char word[51];

    scanf("%d", &Test);

    for(j = 1; j <= Test; j++){

        scanf("%s", word);

        for(i = 0; word[i] != '\0'; i++){

            if(word[i] == 'R'){

                word[i] = word[i + 1];
            }

            if(word[i] == 'L'){

                word[i] = word[i - 1];
            }
        }

        valout = atoi(word);

        printf("%d\n", valout);

    }

    return 0;
}
