#include<iostream>
#include<set>

using namespace std;

int main()
{
    int n, i;
    char S[100005];

    set<char>st;

    cin >> n;

    cin >> S;

    for(i = 0; i < n; i++){
        st.insert(S[i]);
    }

    if(n == 1){
        cout << "Yes" << endl;
    }
    else if(st.size() < n){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
