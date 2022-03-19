#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int N, i;
    vector<string>str;
    int X = 0;
    string S;
    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> S;
        str.push_back(S);
        if(str[i] == "X++" || str[i] == "++X") {
            X = X + 1;
        }
        else {
            X = X - 1;
        }
    }
    cout << X << endl;
    return 0;
}
