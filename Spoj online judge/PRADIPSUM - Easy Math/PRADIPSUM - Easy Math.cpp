#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long i, j, a, b, sum, k;

    while(scanf("%lld%lld", &a,&b) == 2)
    {
        if(a <= b){
            i = a;
            j = b;
        }
        else{
            i = b;
            j = a;
        }

        for(k = i, sum = 0; k <= j; k++) {
            sum = sum + k;
        }
        cout << sum << endl;
    }

    return 0;
}
