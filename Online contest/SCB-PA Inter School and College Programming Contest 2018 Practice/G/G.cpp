#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, T, s, d;

    cin >> T;
    for(i = 1; i <= T; i++) {
        cin >> s >> d;

        if(s <= 5 && d > s) {
            cout << "Yes! The ant is Alive."<< endl;
        }
        else{
            cout << "Sorry !the ant is nomore." << endl;
        }
    }

    return 0;
}
