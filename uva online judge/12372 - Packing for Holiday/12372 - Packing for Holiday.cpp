#include<bits/stdc++.h>

using namespace std;

#define fr(i,n) for(i = 1; i <=n; i++)

int main()
{
    int i, t_case, L, W, H;

    cin >> t_case;

    fr(i,t_case) {
        cin >> L >> W >> H;

        if(L <= 20 && W <= 20 && H <= 20) {
            cout <<"Case "<< i<<": good"<<endl;
        }
        else {
            cout <<"Case "<<i<<": bad"<<endl;
        }
    }

    return 0;
}
