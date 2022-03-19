#include<iostream>

using namespace std;

int main()
{


    long long int N, K, i, limit;

    cin >> N >> K;

    if(N % 2 == 0) limit = N/2;
    else{
        limit = (N/2)+1;
    }

    if(K <= limit) {
        cout << (K*2)-1 << endl;
    }
    else {
        if(N % 2 == 0) {
         cout << (K * 2) - N << endl;
        }
        else {
            cout << (K * 2) - (limit*2) << endl;
        }
    }
    return 0;
}
