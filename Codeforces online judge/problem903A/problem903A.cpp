#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i, ans, n, x;

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> x;

        if(x%7 ==0 || (x%7 == 3) ||(x > 14)||((x%7)%3 == 0)|| x%3 == 0 ) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
