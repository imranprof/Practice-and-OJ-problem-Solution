#include<stdio.h>

int main()
{

    double maths[5]={90.5,92,80,95,100};

    int roll;

    for(roll=1;roll<=5;roll++){

        printf("Roll: %d , Marks: %0.2lf \n",roll,maths[roll-1]);


    }


    return 0;




}
