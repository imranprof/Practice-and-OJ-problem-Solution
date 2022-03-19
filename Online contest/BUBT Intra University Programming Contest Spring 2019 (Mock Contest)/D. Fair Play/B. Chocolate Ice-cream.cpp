#include<cstdio>

using namespace std;

int main()
{
    int d, e, k, t, i;

    scanf("%d", &t);

    for(i = 1; i <= t; i++) {

        scanf("%d%d%d", &e, &d, &k);

        if(d <= e) {
            printf("Case %d: Foot\n", i);
        }
        else if(d <= e*k) {
            printf("Case %d: Rickshaw\n", i);
        }
        else {
            printf("Case %d: Crying\n", i);
        }
    }

    return 0;
}
