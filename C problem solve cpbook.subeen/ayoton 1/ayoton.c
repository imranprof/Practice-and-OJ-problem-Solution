#include<stdio.h>

int main()
{

    int i, N, doirgo, postho, uccata, ayoton;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        scanf("%d%d%d", &doirgo, &postho, &uccata);

        if(doirgo >= 1 && doirgo <= 100 && postho >= 1 && postho <= 100 && uccata >= 1 && uccata <= 100){

        ayoton = doirgo * postho * uccata;

        printf("%d\n", ayoton);

        }

    }

    return 0;
}
