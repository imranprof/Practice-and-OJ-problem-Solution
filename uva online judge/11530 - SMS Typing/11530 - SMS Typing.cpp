#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;


int main()
{
    int cnt, i, T, j, L;
    char W[1001];

    cin >> T;
    getchar();
    for(i = 1; i <= T; i++) {

        gets(W);
        L = strlen(W);
        for(j = 0, cnt = 0; j < L; j++) {
            if(W[j] == ' ') cnt = cnt + 1;
            else if(W[j] == 'a') cnt = cnt + 1;
            else if(W[j] == 'b') cnt = cnt + 2;
            else if(W[j] == 'c') cnt = cnt + 3;

            else if(W[j] == 'd') cnt = cnt + 1;
            else if(W[j] == 'e') cnt = cnt + 2;
            else if(W[j] == 'f') cnt = cnt + 3;

            else if(W[j] == 'g') cnt = cnt + 1;
            else if(W[j] == 'h') cnt = cnt + 2;
            else if(W[j] == 'i') cnt = cnt + 3;

            else if(W[j] == 'j') cnt = cnt + 1;
            else if(W[j] == 'k') cnt = cnt + 2;
            else if(W[j] == 'l') cnt = cnt + 3;

            else if(W[j] == 'm') cnt = cnt + 1;
            else if(W[j] == 'n') cnt = cnt + 2;
            else if(W[j] == 'o') cnt = cnt + 3;

            else if(W[j] == 'p') cnt = cnt + 1;
            else if(W[j] == 'q') cnt = cnt + 2;
            else if(W[j] == 'r') cnt = cnt + 3;
            else if(W[j] == 's') cnt = cnt + 4;

            else if(W[j] == 't') cnt = cnt + 1;
            else if(W[j] == 'u') cnt = cnt + 2;
            else if(W[j] == 'v') cnt = cnt + 3;

            else if(W[j] == 'w') cnt = cnt + 1;
            else if(W[j] == 'x') cnt = cnt + 2;
            else if(W[j] == 'y') cnt = cnt + 3;
            else if(W[j] == 'z') cnt = cnt + 4;


        }
        printf("Case #%d: %d\n", i, cnt);
    }

    return 0;
}
