#include<iostream>
#include<vector>
#include<cstdio>
#include<math.h>
#define M 1000000
using namespace std;

vector <int> prime;
long long divisor(long long n);

void sieve(int n){
    long long p=n;
    bool is[p];
    for(long long i=0; i<p; i++) is[i]=true;
    for(long long i=3; i*i<=p; i+=2){
        for(long long j=i*i; j<=p; j+=i*2){
            is[j]=false;
        }
    }
    prime.push_back(2);
    for(long long i=3; i<=p; i+=2){
        if(is[i]){
            prime.push_back(i);
        }
    }
}

int main(){
    sieve(1000000);
    long long t;
    cin>>t;
    for(int i=1; i<=t; i++){
    long long n,result;
    cin>>n;
    result=divisor(n);
    printf("Case %d: %lld\n",i,result);
    }
    return 0;
}

long long divisor(long long n){
    long long div=1;
    for(long long i=0; i<prime.size(); i++){
        long long cnt=1;
            if(n%prime[i]==0){
                while(n%prime[i]==0){
                    n/=prime[i];
                    cnt++;
                }
                div*=cnt;
            }
        }
    return div;
}
