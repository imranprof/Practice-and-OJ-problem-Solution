#include<bits/stdc++.h>

using namespace std;

long long int lastdigit(long long a, long long b)
{
    long long ans=1;
    if((b-a)>=5)return 0;

    else{
        for(long long int i = a+1;i<=b;i++){
            ans = (ans*(i%10))%10;
        }
        return ans%10;
    }
}

int main()
{
    long long int a, b, ans;

    while(scanf("%lld%lld", &a, &b) == 2)
    {
        printf("%d\n", lastdigit(a,b));
    }

    return 0;
}
