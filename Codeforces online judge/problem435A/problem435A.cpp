#include<iostream>

using namespace std;

int main()
{
    int n, m, ans, i, A[110], cnt, sum;

    cin >> n >> m;

    for(i = 0; i < n; i++) {
        cin >>A[i];
    }
    sum = m;
    for(i = 0, cnt = 0; i < n; i++) {
        if(sum < A[i]){
            cnt++;
            sum = m;
        }
        sum = sum - A[i];

    }

    cout << cnt+1 << endl;

    return 0;
}
