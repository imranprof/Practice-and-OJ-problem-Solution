#include<iostream>
#include<string>

using namespace std;

int palindrome(char s[], int sz)
{
    int i, n, cnt, j;

    n = sz / 2;

//    cout << "n = " << n << " sz = " << sz << endl;

    for(i = 0, cnt = 0, j = sz-1; i < n; i++, j--) {
        if(s[i] == s[j]) {
            cnt++;
        }
    }
//    cout << "cnt = "  << cnt << endl;

    if(cnt == n){
        return 1;
    }
    else return 0;
}

int main()
{
    int i, T, n, j, flag1, flag2;
    char S1[110], S2[110], S3[110];

    cin >> T;

    for(i = 1; i <= T; i++) {
        cin >> n;
        cin >> S1;

/*
        for(j = 0; j < n; j++) {
            if(S1[j] == 'a'){
                S2[j] = S1[j] + 25;
            }
            else{
                S2[j] = S1[j]-1;
            }
        }
        S2[j] = '\0';
*/
        for(j = 0; j < n/2; j++) {
            if(S1[j] == 'z') {
                S3[j] = S1[j] - 25;
            }
            else {
                S3[j] = S1[j]+1;
            }
        }

        for(j = n / 2 ; j < n; j++){
            if(S1[j] == 'a'){
                S3[j] = S1[j] + 25;
            }
            else{
                S3[j] = S1[j]-1;
            }
        }
        S3[j] = '\0';

//        cout << S2 << endl;

        cout << S3 << endl;

//        flag1 = palindrome(S2, n);

        flag2 = palindrome(S3, n);

//        cout << "flag 1 " << flag1 << endl;
//        cout << "flag 2 " << flag2 << endl;

        if(flag2 == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }



    return 0;
}
