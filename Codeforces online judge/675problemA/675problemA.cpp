#include<iostream>

using namespace std;

int main()
{
    long long int i, j, a, b, c, flag;

    cin >> a >> b >> c;

    if(a == b){

        cout << "YES" << endl;
    }
    else if(c == 0) {
        if(a == b) cout << "YES" << endl;
        else {
            cout << "NO" << endl;
        }
    }

    else{
        if((b-a)%c == 0 && (b-a)*c >= 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }


    return 0;
}
