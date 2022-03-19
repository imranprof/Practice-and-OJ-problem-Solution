#include<cstdio>

using namespace std;

int main()
{
    int i, t, n;

    scanf("%d", &t);

    for(i = 1; i <= t; i++) {
        scanf("%d", &n);
        if(n == 0) {
            printf("ZERO\n");
        }
        else if(n > 0) {
            printf("POSITIVE\n");
        }
        else {
            printf("NEGATIVE\n");
        }
    }

    return 0;
}
