#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int N, T, i, j, k, num[25], n1,n2, msum, jsum;
    cin >> T;
    for(j = 1; j <= T; j++) {

        cin >> N;

        for(i = 0; i < N; i++) {
            cin >>num[i];
        }
        for(i = 0, msum = 0, jsum = 0; i < N; i++) {
            if((num[i]+1)%30 == 0) {
                n1 = ((num[i]+1) / 30);
            }
            else n1 = ((num[i]+1)/30)+1;

            msum = msum + (n1*10);

            if((num[i]+1)%60 == 0){
                n2 = ((num[i]+1) / 60);
            }
            else n2 = ((num[i]+1)/60)+1;
            jsum = jsum + (n2 * 15);
        }

        if(msum < jsum) {
            printf("Case %d: Mile %d\n", j,  msum);
        }
        else if(jsum < msum) {
            printf("Case %d: Juice %d\n", j, jsum);
        }
        else {
            printf("Case %d: Mile Juice %d\n", j, msum);
        }
    }

    return 0;
}
