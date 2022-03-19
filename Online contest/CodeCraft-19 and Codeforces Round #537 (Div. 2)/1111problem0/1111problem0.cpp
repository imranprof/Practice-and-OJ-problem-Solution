#include<bits/stdc++.h>

using namespace std;

int main()
{
    char S[1010], T[1010];

    int  cnt, ln, ln1, i;

    scanf("%s%s", S, T);

    for(i = 0, ln = 0; S[i]; i++){

        ln++;
    }


    for(i = 0, ln1 = 0; T[i]; i++ ) {

        ln1++;
    }



    if(ln == ln1){

        for(i = 0, cnt = 0; S[i]; i++){

            if(((S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') &&
                (T[i] == 'a' || T[i] == 'e' || T[i] == 'i' || T[i] == 'o' || T[i] == 'u')) ||
               ((S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u') &&
                (T[i] != 'a' && T[i] != 'e' && T[i] != 'i' && T[i] != 'o' && T[i] != 'u'))
            ) {

                cnt++;

            }
        }



        if(cnt == ln){

            printf("Yes\n");
        }
        else {

            printf("No\n");
        }
    }
    else {

        printf("No\n");
    }

    return 0;
}
