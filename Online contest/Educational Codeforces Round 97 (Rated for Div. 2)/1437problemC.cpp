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

    int q, n, i, j, k, A[500], mark[500], select[1000], in, ans, sj, sk;

    si(q);

    while(q--)
    {
        si(n);

        for(i = 0; i < n; i++)si(A[i]);

        for(i = 1; i < 1000; i++)select[i] = 0;
        for(i = 1; i < 500; i++)mark[i] = 0;

        sort(A,A+n);

        for(i = 0;i < n; i++){
            if(mark[A[i]]==0){
                mark[A[i]] = 1;
                select[A[i]]= 1;
                A[i]= -1;
                //printf("mark = %d\n", A[i]);
            }
        }

        ans = 0;
        for(i = 0; i < n; i++){
            j = k = A[i];
            if(A[i]==-1)continue;
            while(1)
            {
                j--;
                if(j == 0){
                    sj = 0;
                    break;
                }
                if(select[j]!=1){
                    sj = j;
                    break;
                }


            }

            while(1){
                k++;
                if(select[k]!=1){
                    sk = k;
                    break;
                }

            }

            if(sj != 0){
                int mn = min(sk-A[i],A[i]-sj);
                if(mn == A[i]-sj)select[sj]=1;
                else select[sk]= 1;
                ans+=mn;
            }
            else{
                ans+=sk-A[i];
                select[sk]=1;
            }
        }
        printf("%d\n", ans);


    }




    return 0;
}
