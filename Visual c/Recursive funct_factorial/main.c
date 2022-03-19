#include<stdio.h>
int fact(long int n);

void main()

{

   long int n,result;
   printf("Enter a positive number:\n");
   scanf("%d",&n);
   result=fact(n);
   printf("\n\nThe factorial value of %d=%d\n",n,result);


}
int fact(long int n)
{
    if (n==1)
       return(1);

    return(n*fact(n-1));

}
