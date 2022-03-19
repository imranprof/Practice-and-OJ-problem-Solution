#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, M, N, cnt, sum, sqr;

    cin >> M >> N;

    sqr = M * N;
    for(i = 1, sum = 0, cnt = 0; ;i++) {
        sum = sum + 2;
        if(sum <= sqr) {

            cnt++;
        }
        if(sum > sqr) break;
    }

    cout << cnt << endl;

    return 0;
}
