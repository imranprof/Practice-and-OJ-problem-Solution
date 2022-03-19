#include<stdio.h>
#include<math.h>

int main()
{
    int i, start_b, end_b, t_press;

    while(1)
    {
        scanf("%d %d", &start_b, &end_b);

        if(start_b == -1 && end_b == -1) break;

        t_press = abs(end_b - start_b);

        /*if answer greater than 50 */
        if(t_press > 50) {
            if(end_b > start_b){
                t_press = (100 - end_b) + start_b;
                printf("%d\n", t_press);
            }
            else {
                t_press = (100 - start_b) + end_b;
                printf("%d\n", t_press);
            }
        }
        /*if answer not greater equal 50 */
        else {
            printf("%d\n", t_press);
        }
    }

    return 0;
}
