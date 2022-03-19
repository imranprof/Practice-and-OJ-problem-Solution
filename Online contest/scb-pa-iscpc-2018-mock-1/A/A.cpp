#include<iostream>

using namespace std;

int main()
{
    int y, d;

    cin >> y >> d;

    if(y == 1952 && d == 21) {
        cout << "international mother language day" << endl;
    }
    else if(y == 1971 && d == 26) {
        cout << "independence day" << endl;
    }
    else if(y == 1971 && d == 16) {
        cout << "victory day" << endl;
    }
    else {
        cout << "other" <<endl;
    }
    return 0;
}
