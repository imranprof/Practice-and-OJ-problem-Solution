#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, term1, term2, finale, attend, class_test[3], avg_test, n, t_case, marks;

    scanf("%d", &t_case);

    for(i = 1; i <= t_case; i++) {
        scanf("%d %d %d %d", &term1, &term2, &finale, &attend);
        for(j = 0; j < 3; j++) {
            scanf("%d", &class_test[j]);
        }

        n = sizeof(class_test) / sizeof(class_test[0]);

        sort(class_test, class_test+n, greater<int>());

        avg_test = (class_test[0] + class_test[1]) / 2;

        marks = term1 + term2 + finale + attend + avg_test;

       // printf("%d", marks);

       if(marks >= 90) {
            printf("Case %d: A\n", i);
       }

       else if(marks >= 80) {
            printf("Case %d: B\n", i);
       }

       else if(marks >= 70) {
            printf("Case %d: C\n", i);
       }

       else if(marks >= 60) {
            printf("Case %d: D\n", i);
       }
       else {
            printf("Case %d: F\n", i);
       }
    }

    return 0;
}
