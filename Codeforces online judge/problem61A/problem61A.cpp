#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i;
    char S1[110], S2[110];

    scanf("%s%s", S1, S2);

    for(i = 0; S1[i]; i++) {
        if(S1[i] != S2[i]){
            printf("1");
        }
        else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
