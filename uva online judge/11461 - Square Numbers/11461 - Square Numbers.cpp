#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a, b, sumsq, sqr, i;

    while(1)
    {
        cin >> a >> b;
        if(a == 0 && b == 0) break;

        for(i = a, sumsq = 0; i <= b; i++){
            sqr = sqrt(i);

            if(sqr * sqr == i){
                sumsq++;
            }
        }
        cout << sumsq << endl;
    }
    return 0;
}
