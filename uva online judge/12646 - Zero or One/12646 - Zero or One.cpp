#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, Alice, Beto, Clara;

    while(scanf("%d %d %d", &Alice, &Beto, &Clara) != EOF)
    {

        if((Alice == 0 && Beto == 0 && Clara == 0) || (Alice == 1 && Beto == 1 && Clara == 1)) {
            printf("*\n");
        }

        if((Beto == Clara) && (Alice != Beto)) {
            printf("A\n");
        }

        if((Alice == Clara) && (Beto != Alice)) {
            printf("B\n");
        }

        if((Beto == Alice) && (Clara != Beto)) {
            printf("C\n");
        }
    }

    return 0;
}
