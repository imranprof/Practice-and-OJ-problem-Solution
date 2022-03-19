#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<stdlib.h>

using namespace std;

#define pocount     __builtin_popcountll
#define PB          push_back
#define MOD         1000000007
#define si(a)       scanf("%d",&a)
#define sii(a,b)    scanf("%d%d",&a,&b)
#define siii(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define sl(a)       scanf("%lld",&a)
#define sll(a,b)    scanf("%lld%lld", &a,&b)
#define slll(a,b,c) scanf("%lld%lld%lld", &a, &b, &c)

#define all(v)      v.begin(),v.end()
#define rall(v)     v.rbegin(),v.rend()


#define FasterIO    ios_base::sync_with_stdio(false); cin.tie(NULL);

const double pi = acos(-1.0);

typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned int ui;



int main()
{

    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int i, t;
	double l, r, d;

	si(t);

	while(t--)
    {
        scanf("%lf%lf", &l, &r);

        d = (r+1)/2;

        if(d <=l){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }




    return 0;
}
