#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x, y;

    while(scanf("%d%d", &x, &y) == 2) {
        if((x+y) >= 20) {
            cout << "Yes! Got it" << endl;
        }
        else {
            cout << "Bad luck Tipu Miah"<< endl;
        }
    }

    return 0;
}
