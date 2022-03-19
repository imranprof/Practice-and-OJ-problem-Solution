#include<stdio.h>

int main()
{
    int i, t_run;

    double total_run, current_run, ball;

    double curr_rrate, req_rrate;


    scanf("%d", &t_run);

    for(i = 1; i <= t_run; i++){          //this is the main loop for how many time i need to run program

        scanf("%lf %lf %lf", &total_run, &current_run, &ball);        //this is for input all

        curr_rrate = (current_run / ( ( 300-ball ) / 6) );    //this is the calculation for current run rate

        req_rrate = ( ((total_run+1) - current_run ) / ( ball/6 ) ) ;    //this is the calculation for required run rate

        if(current_run > total_run)req_rrate=0;
        printf("%.2lf %.2lf\n", curr_rrate, req_rrate);     //this is for the output

    }

    return 0;
}
