#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T, i;

    double A, B, C, D, E, gpa;

    scanf("%d", &T);

    if(T <= 200){
        for(i = 1; i <= T;  i++){

            scanf("%lf %lf %lf %lf %lf", &A, &B, &C, &D, &E);

            if(0<=A && B && C && D && E<=4){

                gpa = (A + B + C + D + E) / 4;

                printf("%.2lf\n", gpa);
            }
        }
    }
    return 0;
}
