#include<bits/stdc++.h>

using namespace std;


int main()
{
    int m_shop, b_shop, me, mx, mn, dis, mnn;


    cin >> m_shop >> b_shop >> me;

    if(me > m_shop && me > b_shop) {
        if(m_shop < b_shop) {
            mn = m_shop;
        }
        else {
            mn = b_shop;
        }

        dis = me - mn;

    }

    else if((b_shop < me && m_shop > me) || (m_shop < me && b_shop > me)) {
        if(b_shop > m_shop){
            mx = b_shop;
            mn = m_shop;
        }
        else{
            mx = m_shop;
            mn = b_shop;
        }
        if(abs(me - mn) > abs(me - mx)) {
            mnn = abs(me - mx);
        }
        else {
            mnn = abs(me - mn);
        }

        dis = (mx - mn) + mnn;
    }

    else {
        if(b_shop > m_shop) {
            mx = b_shop;
        }
        else {
            mx = m_shop;
        }
        dis = (mx - me);
    }

    cout << dis <<endl;

    return 0;
}
