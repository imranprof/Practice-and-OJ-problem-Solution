#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int m, n, x, i, ans, t, j, y;

    cin >> t;

    for(i = 1; i <= t; i++){
        cin >> m >> n;

        x = m * n;


        if(m == 1 || n == 1){
            ans = x;
        }
        else if(m == 2 || n == 2){
            if(m == 2){
                y = n;
            }
            else{
                y  = m;
            }

            if(y % 4 == 1 || y % 4 == 3){
                ans = y + 1;
            }
            else if(y % 4 == 2) ans = y + 2;
            else ans = y;
        }

        else if(x % 2 == 0){
            ans = x / 2;
        }
        else {
            ans = (x/2) + 1;
        }
        printf("Case %d: %d\n", i, ans);



    }

    return 0;
}
