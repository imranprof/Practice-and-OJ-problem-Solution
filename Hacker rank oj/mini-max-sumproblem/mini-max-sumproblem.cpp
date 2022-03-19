#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i;
    long long mnsum, mxsum, num[10];

    for(i = 0; i < 5;  i++) {
        cin >> num[i];
    }

    sort(num, num + 5);

    mnsum = num[0] + num[1] + num[2] + num[3];
    mxsum = num[1] + num[2] + num[3] + num[4];

    cout << mnsum << ' ' << mxsum << endl;
    return 0;
}
