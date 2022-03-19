#include <stdio.h>
#include <stdlib.h>

int funct(int a,int b)
{
    int simp;
    int i;

    simp=a+b;
    printf("The Adjust is :%d\n",simp);

    simp=a-b;
    printf("\n\nThe Deference is:%d\n",simp);
            for(i=0;i<=simp;i++)
                printf("%d\n",i);
    return simp;

}

int main()
{
   int x,y,sub;
   printf("Enter two number:\n");

   scanf("%d%d",&x,&y);

   sub=funct(x,y);

}
