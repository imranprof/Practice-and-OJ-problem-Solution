#include<cstdio>
#include<algorithm>

using namespace std;



int main()
{

    int n, A[100005],B[100005], i, j, cpos, cneg, in, mn, mx, nneg, flag;

    while(scanf("%d", &n)==1)
    {

        for(i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);

        }

        if(n == 1 && A[0]==0)
        {
            printf("0\n");
        }

        else
        {
            cpos = cneg = 0;
            for(i = 0; i < n; i++)
            {
                if(A[i]==0)
                {
                    A[i] = -A[i]-1;
                }
            }

            for(i = 0; i < n; i++)
            {
                if(A[i] > 0)
                {
                    A[i] = -A[i]-1;
                }
                B[i] = A[i];
            }
            sort(B,B+n);

            if(n % 2 != 0 )
            {
                if(B[0] == -1 && B[n-1] == -1)
                {
                    mn = B[0];
                }
                else
                {
                    for(i = 0; i < n; i++)
                    {
                        if(B[i]!=-1)
                        {
                            mn = B[i];
                            break;
                        }
                    }
                }
                for(i = 0; i < n; i++)
                {
                    if(A[i] == mn)
                    {
                        A[i] = -A[i]-1;
                        break;
                    }
                }

            }

            for(i = 0; i < n; i++)
            {
                printf("%d ", A[i]);
            }
            printf("\n");

        }
    }
    return 0;
}
