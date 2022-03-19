#include<iostream>

using namespace std;

int main()
{
    int i, a, b, cnt;

    cin >> a >> b;

    if(a == 1 && b == 1){
        cnt = 0;
    }
    else {
        for(i = 1, cnt = 0; ; i++){
            if(a == 0 || b == 0){
                break;
            }
            if(a > b){
                a = a - 2;
                b = b + 1;
                cnt++;
            }
            else {
                a = a + 1;
                b = b - 2;
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
