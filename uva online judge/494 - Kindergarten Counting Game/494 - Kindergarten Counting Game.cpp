#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    int i, j, cnt;
    string str;

    while(getline(cin,str)) {

    for(i = 0, cnt = 0;  str[i] != '\0'; i++) {
        if(((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) &&
           ((str[i+1] > 'z' || str[i+1] < 'A'))) {
            cnt++;
           }
    }
    cout << cnt << endl;
    }
    return 0;
}
