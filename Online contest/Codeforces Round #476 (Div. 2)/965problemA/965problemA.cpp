#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int people, p_need, can_made, by_one, every_shned, total_shned, total_pack;

    scanf("%d%d%d%d", &people, &p_need, &can_made, &by_one);


        every_shned = p_need / can_made;

        if((every_shned * can_made) != p_need) {
            every_shned = every_shned + 1;
        }
        total_shned = people * every_shned;

        total_pack = total_shned / by_one;

        if((total_pack * by_one) != total_shned) {
            total_pack = total_pack + 1;
        }

        printf("%d\n", total_pack);



    return 0;
}
