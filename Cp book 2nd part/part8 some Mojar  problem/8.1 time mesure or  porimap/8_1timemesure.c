#include<stdio.h>
#include<time.h>

void fnc(int x, int n) {
    x = n * 2;
}

//here is the main function
int main()
{
    int i, j, x, n;

    clock_t start_time, end_time;   // here clock_t is arithmetic types of capable representing time

    double time_elapsed;

    start_time = clock();       //count the start time //clock() is a library function which define in time.h header file

    n = 12345678;

    for (i = 0; i < 1000000000; i++) {
        for (j = 0; j < 10; j++) {
            x = n * 2;
        }
    }

    end_time = clock();     //count the end time

    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;  // here divide by CLOCKS_PER_SEC to find the number of second

    printf("Time: %lf seconds\n", time_elapsed);

    start_time = clock();

    n = 12345678;

    for (i = 0; i < 1000000000; i++) {
        for (j = 0; j < 10; j++) {
            fnc(x, n);
        }
    }

    end_time = clock();

    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;  //CLOCKS_PER_SEC are define in time.h header file

    printf("Time: %lf seconds\n", time_elapsed);

    return 0;
}
