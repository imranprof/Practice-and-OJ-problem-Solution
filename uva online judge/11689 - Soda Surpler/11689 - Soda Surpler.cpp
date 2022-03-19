#include<iostream>

using namespace std;

int main()
{
    int i, T, N, f, c, cnt;

    cin >> T;

    for(i = 1; i <= T; i++) {
        cin >> N >> f >> c;

    N = N + f;
    cnt = 0;
    while(1)
        {
            if(N < c) break;

            cnt = cnt + (N/c);
            N = (N/c) + (N%c);
        }
        cout << cnt << endl;

    }

    return 0;
}
