#include <stdio.h>
#include <stdlib.h>

int main()
{
   double maths[5]={90.5,92,80,95,100};
   int roll;

   for(roll=0;roll<=4 ;roll++){
        printf("Roll: %d Mark:%.2lf\n",roll,maths[roll]);
   }


    return 0;
}
