#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<cstdlib>

using namespace std;


int cnt, cnt2;
vector<long long>D;

int  mark[1000005];
vector<long long>prime;
int flag = 0;

void sieve()
{
    long long n = 1000000;
    long long i, j, k,  limit = sqrt(n*1.)+2;
    prime.push_back(1);

    prime.push_back(2);
    mark[0] = mark[1] = 1;
    cnt2 = 1;
    for(i = 4; i <= n; i+=2) mark[i] = 1;

    for(i = 3; i <= n; i++){

        if(!mark[i]){
            prime.push_back(i);

            cnt2++;
            if(i <= limit){
                for(j = i * i; j <= n; j += i * 2){
                    mark[j] = 1;
                }
            }
        }
    }
}

void divisor(long long n)
{

    int i,j = 0;

    for(i=1;prime[i]<= n/prime[i];i++)
    {

        while(n%prime[i]==0)
        {
           D.push_back(prime[i]);
           n=n/prime[i];

           flag = 1;
           j++;
        }
    }
    if(n > 1) D.push_back(n);
}

int main()
{
    sieve();

    long long  n, i , temp;

    while(1){
    D.clear();
    scanf("%lld", &n);
    if(n == 0) break;
    temp = abs(n);
    divisor(temp);

    printf("%lld = ", n);
    if (n == -1){
        printf("-1 x");
    }
    else if(n < 0){
        printf("-1 x ");
    }
    if(flag == 0 && temp != 1){
        printf("%lld", temp);
    }
    else if(flag == 1){
        flag = 0;
        for(i = 0; i < D.size(); i++){
            printf("%lld", D[i]);
            if(i < D.size()-1){
                printf(" x ");
            }
        }


    }
     cout << endl;
    }

    return 0;
}
