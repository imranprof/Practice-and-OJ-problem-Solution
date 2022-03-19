#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum[10010], num, i, j, john, mark;

    cin >> n;

    for(i = 0; i < n; i++) {
        sum[i] = 0;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < 4; j++) {
            cin >> num;
            sum[i] = sum[i] + num;
        }
    }

    john = sum[0];

    sort(sum, sum+n, greater<int>());


    for(j = 0; j < n; j++) {
        if(john == sum[j]) {
            mark = j+1;
            break;
        }
    }

    cout << mark << endl;

    return 0;
}
