#include<bits/stdc++.h>

using namespace std;
const long long int a = 2;

long long int powr(long long int  n, long long int p){

    long long pr = 1;

    if(p == 0 ) return 1;
    else{
    for(int i = 1; i <= p; i++){

        pr = pr * n;
    }
    return pr;
    }
}

int main()
{
    long long int n, sum, b, i;

    while(scanf("%lld%lld", &n, &b) == 2){

        sum = (powr(a,b+1))-1;


        if(sum >= n){
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}
