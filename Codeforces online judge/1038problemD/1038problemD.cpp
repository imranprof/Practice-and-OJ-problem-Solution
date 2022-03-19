#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

long long n, i, neg, pos, A[500005], sum;

void AllPos()
{
    if(n == 1){
        sum = A[0];
        cout <<  sum << endl;
    }
    else if(n == 2){
        sum = A[1] - A[0];
        cout << sum << endl;
    }
    else {
        sum = A[n-1];

        sum = sum + (A[n-2] - A[0]);

        for(i = 1; i < n - 2; i++){
            sum = sum + A[i];
        }
        cout << sum << endl;
    }
}

void AllNeg()
{
    sum = A[n-1];
    for(i = 0; i < n-1; i++){
        sum = sum - A[i];
    }
    printf("%I64d\n", sum);
}

void MixedPN()
{
    sum = A[neg];

    for(i = 0; i < neg; i++){
        sum = sum - A[i];
    }
    for(i = neg+1; i < n; i++){
        sum = sum + A[i];
    }
    printf("%I64d\n", sum);
}

int main()
{

    while(scanf("%I64d", &n)==1){

        pos = neg = 0;

        for(i = 0; i < n; i++){
            cin >> A[i];
            if(A[i] >= 0) pos++;
            else neg++;
        }
        sort(A, A+n);

        if(pos == n){
            AllPos();
        }
        else if(neg == n){
            AllNeg();
        }
        else {
            MixedPN();
        }
    }

    return 0;
}
