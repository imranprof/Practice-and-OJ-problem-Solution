#include<bits/stdc++.h>
using namespace std;



int main()
{
    double x , y;

    cin >> x >> y;

    if((x*log10(y)) > (y*log10(x))) {   //using log
        cout << '<' << endl;
    }

    else if((x*log10(y)) < (y*log10(x))) {
        cout << '>' << endl;
    }

    else {
        cout << '=' << endl;
    }


    return 0;
}
