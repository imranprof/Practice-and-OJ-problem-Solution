#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>

using namespace std;

#define PB push_back

int prime[200000000];

void sieve(int n)
{
    int i, j, limit = sqrt(n * 1.) + 2;

    prime[0] = prime[1] = 1;


    for(i = 2; i <= n; i++) {

        if(!prime[i]){

            if(i <= limit) {
                for(j = i * i; j <= n; j += i) {
                    prime[j] = 1;
                }
            }
        }
    }

}


int main()
{
    int n, a, b, prg, i, cnt, total;
    double per, decper, tot, dec;


    n = 100010051;

    sieve(n);


    while(scanf("%d%d", &a, &b)== 2) {
        vector<int>P;
        tot = (b - a) + 1;


        for(i = a; i <= b; i++) {
            prg = (i*i) + i + 41;
            P.PB(prg);
        }

        for(i = 0, cnt = 0; i < P.size(); i++) {
            if(prime[P[i]] == 0){
                cnt++;
            }
        }

        dec = tot - cnt;

        decper = (dec / tot) * 100;

        per = (100 - decper) + .00000005;  // here add this for avoid precision error.

        printf("%.2lf\n", per);
    }
    return 0;
}
