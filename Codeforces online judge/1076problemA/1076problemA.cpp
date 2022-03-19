#include<iostream>
#include<string>

using namespace std;

int main()
{
    string S;
    char ch;
    int n, i, j, flag;

    cin >> n;

    cin >> S;

    flag = -1;
    for(i = 0; i < n-1; i++){
        if(S[i] > S[i+1]){
            flag = i;
            break;
        }

    }

    if(flag == -1) n = n - 1;

    for(i = 0; i < n; i++){
        if(i == flag) continue;
        cout << S[i];
    }
    cout << endl;

    return 0;
}
