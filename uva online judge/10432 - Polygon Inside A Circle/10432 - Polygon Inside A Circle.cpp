#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

const double pi = acos(-1);

int main()
{
    int n;

    double area, r;


    while(scanf("%lf%d", &r, &n) == 2) {

    area = ((1/2.0) * n *(r*r))*sin((2*pi)/n);

    printf("%.3lf\n", area);

    }

    return 0;
}
