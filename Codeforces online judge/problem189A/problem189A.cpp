#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, A[10], mn, md, mx, ans, m, i, v, num,sub, sub1, j;

    scanf("%d", &n);
    for(i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }
    sort(A,A+3);

    mn = A[0];
    md = A[1];
    mx = A[2];



           ans =0;
            num = n / mn;
            i = 0;
            while(i <= num)
            {



                m = (i * mn);

                sub = n-m;
                v = sub / md;


                j = 0;
                while(j <= v){

                         m = j * md;
                        sub1 = sub - m;

                        if(sub1 % mx == 0){
                                ans = max(ans,(i + j + (sub1/mx)));
                            }

                        j++;
                    }
                    i++;

                }






    printf("%d\n", ans);


    return 0;
}
