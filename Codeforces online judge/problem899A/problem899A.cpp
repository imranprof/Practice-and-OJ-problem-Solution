#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>A;
    int n, one, two, team, i, num;

    cin >> n;
    for(i = 0, one = 0, two = 0; i < n; i++) {
        cin >> num;
        if(num == 1) one++;
        else two++;
    }

    team = 0;

    if(one > two){
        team = team + two;
        one = one - two;

        team = team + (one/3);
    }

    else {
        team = team + one;
    }

    cout << team << endl;


    return 0;
}
