#include<cstdio>

using namespace std;

int main()
{
    int i, x;

    while(scanf("%d", &x)==1)
    {
        if(x%4==1){
            printf("0 A\n");
        }
        else if((x+1)%4==1){
            printf("1 A\n");

        }
        else if((x+2)%4==1){
            printf("2 A\n");
        }
        else if(x%4==3){
            printf("0 B\n");

        }
        else if((x+1)%4==3){
            printf("1 B\n");
        }
        else if((x+2)%4==3){
            printf("2 B\n");
        }
    }

    return 0;
}
