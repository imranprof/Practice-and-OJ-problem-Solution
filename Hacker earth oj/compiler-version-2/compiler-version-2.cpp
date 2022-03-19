#include<iostream>
#include<string.h>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int i, len, cmnt, cmt;

    string str;

    while(getline(cin, str)){

        len = str.length();
        cmt = 0;
        if(str[0] == '/' && str[1] =='/') cmt = 1;
        else{
            for(i = 0, cmnt = 0; i < len-1; i++) {
                if(str[i] == '/' && str[i+1] == '/') {
                    cmnt = i;
                    break;
                }
            }
        }

        for(i = 0; i < len; i++) {

            if(cmt == 1) {
                    cout << str[i];
            }
            else if(str[i] == '-' && str[i+1] == '>' && cmnt == 0) {
                cout << '.';
                i++;
            }
            else if(str[i] == '-' && str[i+1] == '>' && cmnt != 0 && i < cmnt && i+1 < cmnt){
                cout << '.';
                i++;
            }
            else {
                cout << str[i];
            }
        }
        cout << endl;
    }

    return 0;
}
