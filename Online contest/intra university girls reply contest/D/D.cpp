#include<bits/stdc++.h>
using namespace std;

int main()
{
    double num;

    int i, t_case, n;
    cin >> t_case;
    for(i = 1; i <= t_case; i++) {

        cin >> num;
        cin >> n;
        cout << fixed;
        cout << setprecision(n) << num << endl;

    }

    return 0;
}
