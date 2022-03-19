#include<cstdio>

using namespace std;

int main()
{
    int i, cnt, n;
    char S[110];

    scanf("%d", &n);
    scanf("%s", S);

    for(i = 0, cnt = 0; i < n-1; i++) {
        if((S[i] == 'U' && S[i+1] == 'R') || (S[i] == 'R' && S[i+1] == 'U')) {
            cnt++;
            i++;
        }
    }
    printf("%d\n", n - cnt);



    return 0;

}
