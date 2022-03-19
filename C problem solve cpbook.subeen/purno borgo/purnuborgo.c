 #include<stdio.h>
 #include<math.h>

 int main()
 {
     int i, length;

     int number[10000];

     int test_borgo[10000];

     scanf("%d", &length);  //length use korchi koyta input nite chai ta input deower jonno


//this loop is for input all number

     for(i = 0; i < length; i++){

            scanf("%d", &number[i]);

            test_borgo[i] = sqrt(number[i]);

        }

//this loop is for print the output

     for(i = 0; i < length; i++){

        if(number[i] > 1 && number[i] <= 10000001){

            if( test_borgo[i] * test_borgo[i] == number[i] )

                printf("YES\n");

            else
                printf("NO\n");

        }

     }


     return 0;
 }
