#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, n, ev, od;

    scanf("%d", &n);

    if(n <= 2){
        cout << "No" << endl;
    }
    else{
        if(n & 1){
            od = (n+1)/ 2;
            ev = n / 2;
        }
        else {
            od = ev = n / 2;
        }

        cout << "Yes" << endl;

        printf("%d", od);
        for(i = 1; i <= n; i+=2){
            printf(" %d", i);
        }
        cout << endl;

        printf("%d", ev);
        for(i = 2;i <= n; i+=2){
            printf(" %d", i);
        }
        cout << endl;
    }


    return 0;
}
