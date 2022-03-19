#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N;
    int sqr, n, div, div1;

       while(scanf("%lld", &N) != EOF)
    {
            div = N % 10;
            sqr = div * div;
            div1 = sqr % 10;
            if(div == div1) {
                cout << "Yes Pagla\n";
            }
            else {
                cout << "No Pagla\n";
            }

    }

    return 0;
}
