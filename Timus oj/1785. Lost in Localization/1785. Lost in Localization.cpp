#include<iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    if(N >=1 && N <= 4) cout << "few" << endl;
    if(N >= 5 && N <= 9) cout << "several" << endl;
    if(N >= 10 && N <= 19) cout << "pack" << endl;
    if(N >= 20 && N <= 49) cout << "lots" << endl;
    if(N >= 50 && N <= 99) cout << "horde" << endl;
    if(N >= 100 && N <= 249) cout << "throng" << endl;
    if(N >= 250 && N <= 499) cout << "swarm" << endl;
    if(N >= 500 && N <= 999) cout << "zounds" << endl;
    if(N >= 1000) cout << "legion" << endl;

    return 0;
}
