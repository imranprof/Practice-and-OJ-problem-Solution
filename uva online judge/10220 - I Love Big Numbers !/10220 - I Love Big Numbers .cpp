#include<iostream>
#include<cstdio>

using namespace std;

void multiply(int x);
int factorial(int n);

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


int factorial(int n)
{
    int sum = 0;
    digit = 1;
    result[0] = 1;



    for(int x = 2; x <= n; x++) {
        multiply(x);

    }


    for(int i =0; i < digit; i++) {

        sum = sum + result[i];
    }
    return sum;
}


int main()
{
    int n, sum;

    while(scanf("%d", &n) == 1)
    {
        sum = factorial(n);
        printf("%d\n", sum);
    }

    return 0;
}
