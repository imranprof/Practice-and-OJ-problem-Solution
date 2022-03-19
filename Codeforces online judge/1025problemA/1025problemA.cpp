#include<iostream>

using namespace std;


int A[200];
int main()
{
    int i, n, flag;

    char S[100005];

    cin >> n;
    cin >> S;

    for(i = 0; i < n; i++){
        A[S[i]]++;
    }
    for(i = 97, flag = 0; i <= 122; i++){
        if(A[i] > 1){
            flag = 1;
        }

    }
    if(n == 1){
        cout << "Yes" << endl;
    }
    else if(flag == 1){
        cout << "Yes" << endl;
    }
    else {
        cout << "No"<< endl;
    }

    return 0;
}
