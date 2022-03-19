#include<iostream>
using namespace std;

int main()
{
    int n, i, num[100005], cnt1, cnt2, cnt3, cnt4, cnt31, tcnt, two;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> num[i];
    }

    cnt1 = cnt2 = cnt3 = cnt4 = cnt31 = tcnt = 0;

    for(i = 0; i < n; i++) {
        if(num[i] == 1) cnt1++;
        if(num[i] == 2) cnt2++;
        if(num[i] == 3) cnt3++;
        if(num[i] == 4) cnt4++;
    }

    //cout << "Count 1, 2, 3 , 4 : "  << cnt1 << ' ' << cnt2 << ' ' << cnt3 << ' ' << cnt4 << endl;

    tcnt = tcnt + cnt4;

    if(cnt1 > cnt3) {
        tcnt = tcnt + cnt3;
        cnt31 = cnt1 - cnt3;
    }
    else if(cnt1 <= cnt3) {
        tcnt = tcnt + cnt3;
    }

    two = (cnt2 * 2) + cnt31;

    if(two % 4 == 0) {
        tcnt =tcnt + (two / 4);
    }

    else {
        tcnt = tcnt + (two/4) + 1;
    }

    cout << tcnt << endl;

    return 0;
}
