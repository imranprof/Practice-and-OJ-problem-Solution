#include<stdio.h>

void main()
{
    int a,b,c;
    int n[3];
    //scanf("%d%d%d",&a,&b,&c);
    //printf("Number is:\n%d\n%d\n%d",a,b,c);
    scanf("%d%d%d",&n[0],&n[1],&n[2]);
    //printf("number:\n%d\n%d\n%d",n[0],n[1],n[2]);
    if(n[1]>n[0]<n[2])
    {
        printf("%d",n[0]);
    }
}
