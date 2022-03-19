#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int digit (int n);

int digit(int n)
{
    int cnt, temp, sum;
    sum = 0;
    while(n != 0) {
        temp = n % 10;
        n = n / 10;
        sum = sum + temp;
    }
    if(sum >= 10) {
        return digit(sum);
    }
    else return sum;

}

int main()
{
    char S1[50], S2[50];
    int i, j, sum1, sum2, n1, n2;
    double ans;

    while(scanf(" %[^\n] %[^\n]", S1, S2) == 2)
    {

        for(i = 0; S1[i]; i++) {
            if(S1[i] >= 'a' && S1[i] <= 'z') {
                S1[i] = S1[i] - 32;
            }
        }

        for(i = 0; S2[i]; i++) {
           if(S2[i] >= 'a' && S2[i] <= 'z') {
                S2[i] = S2[i] - 32;
           }
        }

        for(i = 0, sum1 = 0; S1[i]; i++) {
            if(S1[i] >= 'A' && S1[i] <= 'Z') {
                sum1 = sum1 + (S1[i] - 'A' + 1);
            }
        }

        for(i = 0, sum2 = 0; S2[i]; i++) {
            if(S2[i] >= 'A' && S2[i] <= 'Z') {
                sum2 = sum2 + (S2[i] - 'A' + 1);
            }
        }

        n1 = digit(sum1);
        n2 = digit(sum2);

        if(n1 > n2) {
            ans = n2 / (n1*1.0);
            ans = ans * 100;
        }
        else{
            ans = n1 / (n2 * 1.0);
            ans = ans * 100;
        }

        printf("%.2lf %%\n", ans);

    }

    return 0;
}
