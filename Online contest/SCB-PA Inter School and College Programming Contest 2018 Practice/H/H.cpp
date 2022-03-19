#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int i, j, L, R, cnt, s;

    cin >> L >> R;
    for(i = L, cnt = 0; i <= R; i++) {
        s = sqrt(i);
        if(s * s != i) cnt++;

    }
    cout << cnt <<endl;

    return 0;
}
