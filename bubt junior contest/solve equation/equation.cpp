#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T, i;
    long long N, x;

    scanf("%d", &T);

    if(T >= 1 && T <= 100){

        for(i = 1; i <= T; i++){

            scanf("%lld", &N);

            if( N >= 1){

                x = (N * N) - ((N-1)*(N-1));

                printf("%lld\n", x);
            }
        }
    }
    return 0;
}
