#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, j, n, k, ev, od, b, A[100005], f;

    scanf("%d%d", &b, &k);

    for(i = 0; i < k; i++) {
        scanf("%d", &A[i]);
    }

    f = b & 1;

    //cout << f << endl;
    od = 0;
    for(i = 0; i < k-1; i++) {
        if(f == 1 && (A[i] & 1 == 1)) {
            od++;
        }
    }
    if(A[k-1] & 1 == 1) od++;


    if(od % 2 == 0) printf("even\n");
    else printf("odd\n");


    return 0;
}
