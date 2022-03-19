#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, sum, flag;
    char str[30];

    while(scanf("%s", str) != EOF)
    {
        for(i = 0, sum = 0; str[i] != '\0'; i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                sum = sum + (str[i] - 38);
            }
            if(str[i] >= 'a' && str[i] <= 'z') {
                sum = sum + (str[i] - 96);
            }
        }

        for(i = 2, flag  = 0; i < sum; i++) {
            if(sum % i == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            cout << "It is a prime word."<<endl;
        }
        else {
            cout << "It is not a prime word." <<endl;
        }
    }

    return 0;
}
