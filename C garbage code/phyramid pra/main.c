#include <stdio.h>

int main()
{
    int n=12,row,c,temp;
    printf("Enter the line you wish to show in pyramid:\n");
    scanf("%d",&n);

    temp=n;
    for(row=1;row<=n;row++){

        for(c=1;c<temp;c++)

            printf(" ");
             temp--;

            for(c=1;c<=2*row-1;c++)
                printf("1");

        printf("\n");
        }
    return 0;
}
