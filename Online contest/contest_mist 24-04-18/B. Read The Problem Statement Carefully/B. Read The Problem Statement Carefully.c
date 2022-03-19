#include<stdio.h>

int main()
{
    int strt, endd, session;

    char ch;

    scanf("%d %c %d", &strt, &ch, &endd);

    if(strt < 2000) {
        printf("CSE department started its journey from 2000-2001\n");
    }

    else {
        session = endd - 2000;

        printf("CSE-%d\n", session);
    }

    return 0;
}
