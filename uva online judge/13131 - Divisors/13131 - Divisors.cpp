#include<iostream>


using namespace std;


int main()
{

    int  i, j;

    int num, sum, k, T;

    cin >> T;
    for(j = 1; j <= T; j++) {

        cin >> num >> k;

        for(i = 1, sum = 0; i*i <= num; i++) {
                if(num % i == 0) {
                    if(i*i == num){
                        if(i % k != 0) sum = sum + i;
                    }
                    else {
                        if(i % k != 0) sum = sum + i;
                        if((num/i) % k != 0) sum = sum + (num/i);
                    }
                }
            }
        cout << sum << endl;
    }


    return 0;
}


