#include<stdio.h>

int main()
{
    char word[1001], ch;

    int i, j, test,count, total;

    scanf("%d", &test);
    scanf("%c",&ch);

    for(j = 1; j <= test; j++){

        gets(word);

            for(i = 0, count = 0; word[i] != '\0'; i++){

                if(word[i] == ' '){     //if word[i] got space then count ++

                    count++;
                }
            }

            total = (count+1) * 420;

            printf("%d\n", total);

            count = 0;
        }


    return 0;
}
