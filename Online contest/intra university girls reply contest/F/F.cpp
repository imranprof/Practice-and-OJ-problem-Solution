#include<bits/stdc++.h>

using namespace std;

int main()
{
    int date, month, year, total, R, K, flag, i, t_case, pen, j;
    cin >> t_case;

    for(i = 1; i <= t_case; i++) {
        cin >> date >> month >> year >> total >> R >> K;

        if(year > 2018) {
            flag = 1;
        }
        else if(year == 2018 ) {
            if(month > 8) {
                flag = 1;
            }
            else if(month == 8 && date > 12) {
                    flag = 1;
                }
            else {
                flag = 0;
            }
        }
        else {
            flag = 0;
        }

        if(flag == 0) {
            printf("Case %d: Expired.\n", i);

        }

        else if(flag == 1 && ((total - K) >= R)) {

            for(j = 1, pen = 0; j <= K; j++) {
                pen = pen + (j * 10);
            }

            printf("Case %d: Valid.\n", i);

            printf("Total Penalty Money: %d$.\n", pen);
        }
        else {
            printf("Case %d: Invalid.\n", i);

        }


    }




    return 0;
}
