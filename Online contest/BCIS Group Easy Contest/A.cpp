#include<bits/stdc++.h>

using namespace std;


int bin_decimal(char ch[], int sz)
{
    int i, ans, j;

    for(j = 0, i = sz, ans = 0; i >= 0; i--, j++) {
        if(ch[j] == '1') {
            ans = ans + pow(2, i-1);
//            cout << "ans " << ans << endl;
        }
    }
    return ans;
}

int main()
{
    char a1[30], b1[30], c1[30], d1[30], s[50], s2[50], a2[30], b2[30], c2[30], d2[30];
    int len1, len2, len3, len4, len, i, j, cnt1, cnt2, cnt3, cnt4, a[4], b[4], flag, k, t;

    cin >> t;
    for(k = 1; k <= t; k++) {
        cin >> s2;
        cin >> s;

        len = strlen(s);

        for(i = 0; i < 8; i++) {
            a1[i] = s[i];
        }
        a1[i] = '\0';

        for(i = 9, j = 0; i <= 16; i++, j++) {
            b1[j] = s[i];
        }
        b1[j] = '\0';

        for(i = 18, j = 0; i <= 25; i++, j++){
            c1[j] = s[i];
        }
        c1[j] ='\0';

        for(i = 27, j = 0; s[i]; i++, j++) {
            d1[j] = s[i];
        }
        d1[j] = '\0';



        for(i = 0, cnt1 = 0; ; i++){
            if(s2[i] == '.') break;
            a2[i] = s2[i];
            cnt1++;
        }
        a2[i] = '\0';
        cnt1 = cnt1 + 1;
    //    cout << cnt1<<endl;

        for(i = cnt1, j = 0, cnt2 = 0; ; i++, j++) {
            if(s2[i] == '.') break;
            b2[j] = s2[i];
            cnt2++;
        }
        b2[j] = '\0';
        cnt2 = cnt2 + cnt1+1;
    //    cout << cnt2 << endl;
        for(i = cnt2, j = 0, cnt3 = 0; ; i++, j++) {
            if(s2[i] == '.') break;
            c2[j] = s2[i];
            cnt3++;
        }
        c2[j] = '\0';
        cnt3 = cnt3+cnt2+1;
    //    cout << cnt3 << endl;

        for(i = cnt3, j = 0; s2[i]; i++, j++) {
            d2[j] = s2[i];
        }
        d2[j] = '\0';
        len1 = strlen(a2);
        len2 = strlen(b2);
        len3 = strlen(c2);
        len4 = strlen(d2);

        a[0] = atoi(a2);
        a[1] = atoi(b2);
        a[2] = atoi(c2);
        a[3] = atoi(d2);
    //    for(i = cnt1+1; )

        b[0] =  bin_decimal(a1,8);
        b[1] =  bin_decimal(b1,8);
        b[2] = bin_decimal(c1, 8);
        b[3] = bin_decimal(d1, 8);

        for(i = 0, flag = 0; i < 4; i++) {
            if(a[i] == b[i]){
                flag++;
            }
        }

        if(flag == 4) {
            printf("Case %d: Yes\n", k);
        }
        else {
            printf("Case %d: No\n", k);
        }
    }


    return 0;
}
