#include<bits/stdc++.h>

using namespace std;

long long int factorial(int n);

int main()
{
    int N;
    long long int fac_value;
    while(scanf("%d", &N) != EOF)
    {
       // N = abs(N);

        if(N > 13) {
            printf("Overflow!\n");
        }

        else {

            fac_value = factorial(N);

            if(fac_value < 10000) {
                cout << "Underflow!\n";
            }
            else {
                cout << fac_value << endl;
            }

        }


    }

    return 0;
}

long long int factorial(int n)
{
    if(n == 0 || n == 1) return 1;

    return n * factorial(n - 1);

}


