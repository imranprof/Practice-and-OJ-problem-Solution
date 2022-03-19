#include<iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if(a == 0 && b == 0){
        cout << "NO" << endl;
    }
    else if(a-1 == b || b-1 == a || a == b) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
