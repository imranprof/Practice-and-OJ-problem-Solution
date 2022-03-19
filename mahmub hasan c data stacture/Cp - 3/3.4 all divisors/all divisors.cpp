#include<iostream>
#include<vector>

using namespace std;
vector<int>divisors[1000002];

void Divisors(int n)
{
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = i; j <= n; j += i)
            divisors[j].push_back(i);
}

int main()
{

    int  i, j;

    int num;


    cin >> num;
    Divisors(num);


    for(j = 0; j < divisors[num].size(); j++) {
            cout << divisors[num][j] << endl;
    }


    return 0;
}
