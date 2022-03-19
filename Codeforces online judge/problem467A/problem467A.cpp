#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, t_case, p, q, total_rom;

    cin >> t_case;

    for(i = 1, total_rom = 0; i <= t_case; i++) {
        cin >> p >> q;
        if((q - p) >= 2) {
            total_rom++;
        }
    }

    cout << total_rom << endl;

    return 0;
}
