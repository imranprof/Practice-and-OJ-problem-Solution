#include<stdio.h>

// prime function

int isprime(int num){

    int i;

    if(num < 2){
        return 0;
    }

    if(num == 2){
        return 1;
    }
    if(num % 2 == 0){
        return 0;
    }

    for(i = 3; i < num/2; i++){
        if(num % i == 0){
            return 0;
        }
    }

    return 1;

}

//main function

int main()
{
    int i, run; //this variable is for run the main loop

    int j, marks[10], test_prime, count_prime;

    scanf("%d", &run);

    for(i = 1; i <= run; i++){      //this is the main loop

        for(j = 0; j < 10; j++){

            scanf("%d", &marks[j]);     //input the all 10 student marks
        }


        for(j = 0, count_prime = 0; j < 10; j++){


            if(marks[j] >= 0 && marks[j] <= 100){       //between 0 to 100

            test_prime = isprime(marks[j]);         //test input for prime number

            }

            if(test_prime == 1){

                count_prime = count_prime + 1;      //count all prime number
            }
        }

        printf("%d\n", count_prime);        //output the count prime
    }


    return 0;
}
