#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T, i, start, N;

    scanf("%d", &T);

    for(i = 1; i <= T; i++){

       scanf("%d %d", &start, &N);

       if(1 <= N && N <= 100){

           if(start == 1){

              if(N % 2 == 0){
                  printf("Player-1 will have the ball after %d rounds.\n", N);
              }
               else{
                   printf("Player-2 will have the ball after %d rounds.\n", N);
               }
           }

            else if(start == 2){

               if(N % 2 == 0){
                   printf("Player-2 will have the ball after %d rounds.\n", N);
               }
                else{
                    printf("Player-1 will have the ball after %d rounds.\n", N);
                }
           }
       }
   }

    return 0;
}
