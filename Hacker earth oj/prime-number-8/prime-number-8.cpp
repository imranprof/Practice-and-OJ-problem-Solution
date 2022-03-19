#include<bits/stdc++.h>

using namespace std;

int IsPrime(int n);

int main()
{

    int num, res, i;

    cin >> num;

    for(i = 1; i <= num; i++) {
        res = IsPrime(i);
        if(res == 1){
            cout << i;
            if(i != num) cout << ' ';
        }
    }

    cout << endl;

    return 0;
}

int IsPrime(int n)
{
    if(n <= 1) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}
