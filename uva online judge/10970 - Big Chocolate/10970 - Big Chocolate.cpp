#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int m, n, mn;

    while(scanf("%d%d", &m, &n) == 2){
        mn = (m*n) - 1;
        cout << mn << endl;
    }
    return 0;
}
