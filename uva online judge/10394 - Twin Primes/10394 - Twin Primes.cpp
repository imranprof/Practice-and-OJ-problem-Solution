#include<iostream>
#include<vector>
#include<math.h>
#include<cstdio>
#include<iterator>

using namespace std;

vector<long long > prime;
long long mark[20000000];
long long cnt = 0;
vector<long long > pprime;


void sieve(long long n)
{
    long long i, j, limit = sqrt(n * 1.) + 2;
    mark[0] = 1;
    mark[1] = 1;

    for(i = 4; i <= n; i += 2) mark[i] = 1;
    cnt = 1;
    prime.push_back(2);

    for(i = 3; i <= n; i += 2) {
        if(!mark[i]) {
                cnt++;
                prime.push_back(i);

            if(i <= limit){
                for( j = i * i; j <= n;  j += i * 2) {
                    mark[j] = 1;
                }
            }
        }
    }

}

void prprime() {
    long long i, j, n1, n2;

    for(i = 0; i < cnt; i++) {
        if((prime[i+1] - prime[i]) == 2) {
            n1 = prime[i];
            n2 = prime[i+1];
            pprime.push_back(n1);
            pprime.push_back(n2);
        }
    }
}

int main()
{

    long long n, i, j, num,k;

    n = 18500001;
    sieve(n);
    prprime();

    while(scanf("%lld", &num) == 1) {
        cout << '('<<pprime[num*2-1-1] << ", " << pprime[num*2-1] << ')' << endl;

    }

    return 0;
}
