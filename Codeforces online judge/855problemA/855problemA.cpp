#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    int i, n;
    char s[110];

    map<string,int>m;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%s", s);

        if(m[s]==1){
            printf("YES\n");
        }
        else {
            printf("NO\n");
            m[s] = 1;
        }
    }

    return 0;
}
