#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, ind[6], cnt, T;
    string S;
    vector<string>str;
    vector<string>str1;



    str.push_back("Power");
    str.push_back("Time");
    str.push_back("Space");
    str.push_back("Soul");
    str.push_back("Reality");
    str.push_back("Mind");

    str1.push_back("purple");
    str1.push_back("green");
    str1.push_back("blue");
    str1.push_back("orange");
    str1.push_back("red");
    str1.push_back("yellow");


    cin >> T;
    cnt = 6 - T;
    for(j = 0; j < 6; j++) {
        ind[j] = 0;
    }

    for(i = 0; i < T; i++) {
        cin >> S;

        for(j = 0; j < 6; j++) {
            if(S == str1[j]){
                ind[j]++;       //try to check what colour is in
            }
        }
    }

    for(i = 5; i >= 0; i--) {
        if(ind[i] != 0){
            str.erase(str.begin()+i); //erase string from vector
        }
    }

    cout << cnt << endl;
    for(i = 0; i < str.size(); i++) {
        cout << str[i] << endl;         //print here Remaining string
    }


    return 0;
}
