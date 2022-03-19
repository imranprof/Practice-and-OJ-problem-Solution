#include<stdio.h>

int main()
{
    int i, T;

    double n1, n2, n3;

    scanf("%d", &T);

    for(i = 1; i <= T; i++){

        scanf("%lf %lf %lf", &n1, &n2, &n3);

        printf("Case %d: ", i);

        if(n1 >= 0 && n3 <= 1000){

            if(n2-n1 == n3-n2 && n2/n1 == n3 / n2){

                printf("Both\n");
            }

            else if(n2-n1 == n3-n2){

                printf("Arithmetic Progression\n");
            }

            else if(n3 / n2 == n2 / n1){

                printf("Geometric Progression\n");
            }

            else{

                printf("None\n");
            }
        }
    }
    return 0;
}
