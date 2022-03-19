#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int i, j, n, cp, cm, ans;

    char s[110];

    scanf("%d", &n);
    scanf("%s", s);
    ans = 0;
    for(i = 0; s[i]; i++){
        if(s[i] == '-'){
            ans--;
        }
        else {
            ans++;
        }
        if(ans < 0) ans  = 0;
    }

    printf("%d\n", ans);
    return 0;
}
