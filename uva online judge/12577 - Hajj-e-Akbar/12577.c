#include<stdio.h>

int main()
{
    int i;

    char line[6];


    for (i = 1; ; i++) {
        scanf("%s", line);

        if(line[0] == '*') {
            break;
        }

        if(line[0] == 'U' && line[1] == 'm' && line[2] == 'r' && line[3] == 'a' && line[4] == 'h') {
            printf("Case %d: Hajj-e-Asghar\n", i);
        }

        if (line[0] == 'H' && line[1] == 'a' && line[2] == 'j' && line[3] == 'j') {
            printf("Case %d: Hajj-e-Akbar\n", i);
        }
    }
    return 0;
}
