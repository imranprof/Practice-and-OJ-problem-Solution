#include<stdio.h>

//larger Function

int bigger(int i,int j)
{
    int large;

    if(i<j)
        large=j;
    else
        large=i;

    return large;

}

// Smaller Function

int smaller(int i,int j)
{
    int small;

    if(i>j)
        small=j;
    else
        small=i;

    return small;

}


//Main Function

int main()
{
    int i,j,n,mark[5], t1, t2, t3, largest, smallest;

    scanf("%d",&n);

    for(j=1;j<=n;j++){


    for(i=0;i<=4;i++){
        scanf("%d",&mark[i]);
    }

/// for largest number

    t1=bigger(mark[0],mark[1]);
    t2=bigger(mark[2],mark[3]);
    t3=bigger(t1,t2);
    largest=bigger(t3,mark[4]);

/// for smallest number

    t1=smaller(mark[0], mark[1]);
    t2=smaller(mark[2],mark[3]);
    t3=smaller(t1,t2);
    smallest=smaller(t3,mark[4]);

        if(mark[0]<=100 && mark[0]>=1 && mark[1]<=100 && mark[1]>=1 &&
           mark[2]<=100 && mark[2]>=1 && mark[3]<=100 && mark[3]>=1 && mark[4]<=100 && mark[4]>=1){

            printf("%d %d\n",largest, smallest);

        }
    }


    return 0;
}
