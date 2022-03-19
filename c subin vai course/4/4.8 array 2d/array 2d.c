#include<stdio.h>

int main()
{

//There i use 2d array for show 1-10 any number  namta

    printf("What number namta you want to show between 1-10 number: ");



    int table[10][15];


    int i,j,n;                //"I" use korchi 1-10 diye multify korar jonno ar " j " use korchi je number er namta hobe tar jonno

    for(i=1;i<=10;i++){         //i for array 1st array and j for 2nd array in 2d array

        for(j=1;j<=10;j++){

            table[i-1][j-1]=i*j;    //array er index er jonno [i-1],[j-1] use korchi , karon array index [0] theke suru hoy
        }
    }

    scanf("%d",&n);

    for(i=1;i<=10;i++){

        printf("%d X %d = %d \n",n,i,table[i-1][n-1]);    //jei number er  namta dekhte chai tar jonno " N " veriable use korchi

    }                                                 //ekhane [n-1] o array er index er jonno use kora array index start [0]



    return 0;
}
