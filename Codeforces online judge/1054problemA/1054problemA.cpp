#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, z, t1, t2, t3;

    int totfloor, eltime, sttime, totfst;

    cin >> x >> y >> z >> t1 >> t2 >> t3;

    totfloor = abs(x - y) + abs(x - z);

    totfst = abs(x - y);

    sttime = totfst * t1;

    eltime = (totfloor * t2) + (t3 * 3) ;


    if(eltime <= sttime) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }



    return 0;
}
