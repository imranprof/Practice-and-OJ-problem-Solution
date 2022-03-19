#include<iostream>

using namespace std;

int main()
{
    int i, j, n, A[1010], B[1010], s, flag;

    cin >> n >> s;

    for(i = 1; i <= n; i++){
        cin >> A[i];
    }
    for(i = 1; i <= n; i++){
        cin >> B[i];
    }
    for(i = s, flag = 0; i <= n; i++){
        if(A[i] == 1 && B[i] == 1){
            flag = 1;
        }
    }

    if(A[1] == 1 && A[s] == 1){
        cout << "yes" << endl;
    }
    else if(A[1] == 1 && flag == 1 && B[s] == 1){
        cout << "yes" << endl;
    }

    else {
        cout << "no" << endl;
    }

    return 0;
}
