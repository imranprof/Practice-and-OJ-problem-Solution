#include<iostream>
#include<cstdio>

using namespace std;


int main()
{
    long long i, a, b, k, ans, t, j, ev, odd;

    cin >> t;

    for(j = 1; j <= t; j++){

        cin >> a >> b >> k;

        if(k % 2 != 0){
            ev = k / 2;
            odd = ev + 1;
        }
        else {
             ev = k / 2;
             odd = ev;
        }

        ans = (ev * -b) + (odd * a);


        cout << ans << endl;
    }

    return 0;
}
