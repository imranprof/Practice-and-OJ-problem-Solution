#include<stdio.h>

int main()
{
    int N, i, circle_b, tray_side1, tray_side2, circle_bas;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        scanf("%d%d%d", &circle_b, &tray_side1, &tray_side2);

        circle_bas = circle_b * 2;

        if(circle_bas <= tray_side1 && circle_bas <= tray_side2){

            printf("YES\n");
        }

        else{

            printf("NO\n");
        }
    }

    return 0;
}
