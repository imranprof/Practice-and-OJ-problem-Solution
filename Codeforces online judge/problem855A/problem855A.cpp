#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i, n, flag, j;
    string str[110];

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> str[i];
    }
    if(n == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "NO" << endl;
        for(j = 1, flag  = 0; j < n; j++){
            for(i = j-1; i >= 0; i--){
                if(str[j].compare(str[i])== 0){
                    flag = 1;
                }
            }
            if(flag == 1){
                flag = 0;
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
