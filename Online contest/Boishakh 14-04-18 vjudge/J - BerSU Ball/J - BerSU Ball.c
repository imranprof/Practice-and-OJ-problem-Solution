#include<stdio.h>

int main()
{
    int i, j, k, boys, girls, boy_skill[101], girl_skill[101], count_pair, temp, high, low;

    scanf("%d", &boys);
    for (i = 0; i < boys; i++) {
        scanf("%d", &boy_skill[i]);
    }
    scanf("%d", &girls);
    for(i = 0; i < girls; i++) {
        scanf("%d", &girl_skill[i]);
    }

    for(i = 0; i < boys; i++) {
        for (j = 0; j < boys - 1; j++) {
            if (boy_skill[j + 1] < boy_skill[j]) {
                temp = boy_skill[j];
                boy_skill[j] = boy_skill[j + 1];
                boy_skill[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < girls; i++) {
        for (j = 0; j < girls - 1; j++) {
            if (girl_skill[j + 1] < girl_skill[j]) {
                temp = girl_skill[j];
                girl_skill[j] = girl_skill[j + 1];
                girl_skill[j + 1] = temp;
            }
        }
    }

    if (girls >= boys) {
        high = girls;
    }
    else {
        high = boys;
    }

    if (high == boys) {
        for (i = 0, count_pair = 0; i < high; i++) {
            if (girl_skill[i] == boy_skill[i] || girl_skill[i] == boy_skill[i] + 1 || girl_skill[i] == boy_skill[i] - 1) {
                count_pair++;
            }
        }
    }

    else {
        for (i = 0, count_pair = 0; i < high; i++) {
            if (boy_skill[i] == girl_skill[i] || boy_skill[i] == girl_skill[i] + 1 || boy_skill[i] == girl_skill[i] - 1) {
                count_pair++;
            }
        }
    }
    printf("%d\n", count_pair);

    return 0;
}
