#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int A[150];

int main()
{
    char S[100005];
    int i, k, n, mn;

    cin >> n >> k >> S;

    for(i = 0; i < n; i++){
        A[S[i]]++;

    }
    mn = 1e7;
    for(i = 65; i < k+65; i++){
        mn = min(mn, A[i]);
    }
    cout << mn * k << endl;
}
