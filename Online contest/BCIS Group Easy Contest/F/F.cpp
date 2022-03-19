#include<iostream>

using namespace std;

int main()
{
    int i, n, ans;

    while(1)
    {
        cin >> n;
        if(n == 0) break;

        ans = n / 2;

        cout << "ans = " << ans << endl;
    }

    return 0;
}
