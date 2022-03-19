#include<bits/stdc++.h>


using namespace std;

int main()
{
    int i, n, x, ev,od;

    scanf("%d", &n);
    ev=od=0;
    for(i = 1; i <= n; i++){
        scanf("%d", &x);
        if(x%2==0)ev++;
        else od++;
    }

    printf("%d\n", min(ev,od));

    return 0;
}
