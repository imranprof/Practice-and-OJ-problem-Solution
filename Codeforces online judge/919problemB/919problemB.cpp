#include<iostream>

using namespace std;


int main()
{
    int K, i, j, n = 0, per, num, sum = 0;

        cin >> K;

        for(i = 1; n < K; i++) {

            per = i; num = i;
            sum = 0;
            while (num)
                {

                sum  = sum + (num % 10);
                num = num / 10;
                }
            if(sum == 10) {
                n++;
                sum = 0;
            }

    }
    cout << per << endl;

    return 0;
}



