#include<cstdio>
#include<vector>

using namespace std;

int main()
{

    int i, a, num, sum, n, d, ans;

    vector<int>v;

    scanf("%d", &a);

    for(i = 1; i <= 1004; i++) {
        sum  = 0;
        num = i;
        n = i;

        while(n != 0){
            d = n % 10;
            n = n / 10;
            sum = sum + d;
        }
        if(sum % 4 == 0) v.push_back(num);
    }

    for(i = 0; i < v.size(); i++) {
        if(v[i] >= a) {
            ans = v[i];
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
