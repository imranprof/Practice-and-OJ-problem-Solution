#include<iostream>
#include<cstdio>

using namespace std;

void multiply(int x);
void factorial(int n);

int digit;
int result[3000];

void multiply(int x)
{

    int carry = 0;
    for(int i = 0; i < digit; i++) {
        int prod = result[i] * x + carry;

        result[i] = prod % 10;

        carry = prod / 10;

    }

    while(carry) {
        result[digit] = carry % 10;
        carry = carry / 10;
        digit++;
    }
}


void factorial(int n)
{


    digit = 1;
    result[0] = 1;



    for(int x = 2; x <= n; x++) {
        multiply(x);

    }


    for(int i = digit - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
}


int main()
{
    int n;

    while(scanf("%d", &n) == 1)
    {
        printf("%d!\n", n);

        factorial(n);
        printf("\n");
    }

    return 0;
}
