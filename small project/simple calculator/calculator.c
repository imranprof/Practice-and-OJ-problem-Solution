#include<stdio.h>

int main()
{
    double first_number, last_number, result;

    char symbol;

    printf("\n     !Wellcome To My Calculator!      \n");

    printf("________________ON______________\n");

    while( scanf("%lf %c %lf", &first_number, &symbol, &last_number) != EOF )

        {

            if( symbol == '+'){

                result = first_number + last_number;

                printf("%.2lf + %.2lf = %.2lf\n",first_number, last_number, result);
            }

            else if ( symbol == '-'){

                result = first_number - last_number;

                printf("%.2lf - %.2lf = %.2lf\n",first_number, last_number, result);

            }

            else if ( symbol == '*'){

                result = first_number * last_number;

                printf("%.2lf * %.2lf = %.4lf\n", first_number, last_number, result);

            }

            else if ( symbol == '/'){

                if(last_number != 0){

                    result = first_number / last_number;

                    printf("%.0lf / %.0lf = %.9lf\n", first_number, last_number, result);

                }

                else{

                    printf("!!!MATH ERROR!!!\n");
                }
            }

            else {

                printf("Please input a Valid symbol ( '+' or '-' or '*' or '/' ) in second input\n\n");

                return main();
            }


        }


    return 0;
}
