#include<stdio.h>

int main()

{

    double marks[3][3]={{85.5,78,47},{45,77.55,48},{54,65,75.65}};

    int i,j;

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            printf("%d. %d. Marks: %0.2lf\n",i+1,j+1,marks[i][j]);
        }
    }


    return 0;


}
