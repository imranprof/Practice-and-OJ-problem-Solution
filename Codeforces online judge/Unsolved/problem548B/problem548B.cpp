#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int A[510][510];
int V[510];
int main()
{
    int i, j, n, m, q, a, b, sum, k;



    cin >> n >> m >> q;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            cin >> A[i][j];
        }

        int mx = -1, cnt = 0;

        for(j = 1; j <= m; j++) {
            if(A[i][j])     cnt++;
            else            cnt = 0;

            mx = (mx,cnt);
        }

        V[i] = mx;
    }


    for(k = 1; k <= q; k++) {
        cin >> a >> b;

        A[a][b] = A[a][b]^1;
        int mx = -1, cnt = 0;
            for(i = 1; i <= m; i++) {
                if(A[a][i])     cnt++;
                else            cnt = 0;

                mx = max(mx,cnt);

            }

            V[a] = mx;

            int mcows = 0;

            for(i = 1; i <= n; i++) {
                mcows = max(mcows,V[i]);
            }
            cout << mcows << endl;

    }

    return 0;
}
