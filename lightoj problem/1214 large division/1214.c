#include<stdio.h>
#include<math.h>

int main()
{
    long long a;
    int b, T, i;

    scanf("%d", &T);

    if( T <= 525){

        for(i = 1; i <= T; i++){

            scanf("%lld %d", &a, &b);

            if(a >= -(pow(10,200))  && a <= pow(10,200) && b > 0 && b < pow(2,31)){

                if(a % b == 0){

                    printf("Case %d: divisible\n", i);
                }

                else{

                    printf("Case %d: not divisible\n", i);
                }

            }


        }
    }

    return 0;
}
