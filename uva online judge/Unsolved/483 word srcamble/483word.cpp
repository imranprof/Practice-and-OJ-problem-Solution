#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i, j, len, cnt = 0, k;
    char line[100000];
    string S;
    string str[100000];

      while(gets(line))
      {

        istringstream iS(line);
        k = 0;
        cnt = 0;
        while(iS >> S)
        {
            len = S.size();
            for (int i = 0; i < len / 2; i++){
            swap(S[i], S[len - i - 1]);
            }
            //if(S[i] == ' ') cout << " ";

            str[k] = S;
            cnt++;
            k++;
        }
        i = 0;

        for(i = 0, j = 0;line[i]; i++) {
            if(line[i] == ' ') cout << '_';
            else{
                cout << str[j];
                j++;
            }

        }

        }


        cout << endl;


    return 0;
}
