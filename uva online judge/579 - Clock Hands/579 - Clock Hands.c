#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[8], hr_p[5], min_p[5];
    int i, j, hour, minute, len;
    double angle;

    while(1)
    {
        scanf("%s", str);

        /* for terminate the input 0:00 */

        if(str[0] == '0' && str[1] == ':' && str[2] == '0' && str[3] == '0')  break;

        /* for separate hour part  and keep it into a string hr_p[] */

        for (i = 0, len = 0; str[i] != ':'; i++) {
            hr_p[i] = str[i];
            len++;
        }
        hr_p[i] = '\0';

        /* for separate minute part and keep it into a string min_p[] */

        for (i = 0, j = len+1; str[j] != '\0'; i++, j++) {
            min_p[i] = str[j];
        }
        min_p[i] = '\0';

        /* hour and minute convert string to integer using atoi() */

        hour = atoi(hr_p);
        minute = atoi(min_p);

        angle = ((hour * 30) + (.5 * minute)) - (6 * minute);

        /* output */
        /* for handling over 180 degree */

        if (angle < 0) {
            angle = -(angle);
        }

        if (angle > 180) {
            angle = 360 - angle;

            printf("%.3lf\n", angle);
        }

        else {

            printf("%.3lf\n", angle);
        }

    }

    return 0;
}
