#include<bits/stdc++.h>
using namespace std;


int main()
{
    int num, i, T, j;
    long long int sum;

    cin >> T;
    for(j = 1; j <= T; j++) {
        cin >> num;
        for(i = 1, sum = 0; i*i <= num; i++) {
            if(num % i == 0) {
                if(i*i == num){
                    sum = sum + i;
                }
                else {
                sum = sum + i + (num/i);
                }
            }
        }

        cout << sum-num << endl;
    }
    return 0;
}

