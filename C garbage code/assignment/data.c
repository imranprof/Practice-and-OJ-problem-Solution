#include<stdio.h>
#include<string.h>

struct studenttype {
    int id;
    char name[30];
    char dept[20];
    double course[5];
};

int main()
{

    FILE *fp;

    fp = fopen("data.txt", "w");

    struct studenttype student[50];
    int i, n, j;
    double average[50], sum;

    printf("How many student: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter id: ");
        scanf("%d", &student[i].id);
        printf("Enter name: ");
        scanf(" %[^\n]", student[i].name);

        printf("Enter department: ");
        scanf(" %[^\n]", student[i].dept);

        printf("Enter 5 course number: \n");
        for(j = 0, sum = 0; j < 5; j++) {

            scanf("%lf", &student[i].course[j]);
            sum = sum + student[i].course[j];
        }

        average[i] = sum / 5;
    }

    fprintf(fp, "ID\t Name\t Department\t Course Average\t\n");
    for(i = 0; i < n; i++) {

        fprintf(fp, "%d\t", student[i].id);
        fprintf(fp, "%s\t", student[i].name);
        fprintf(fp, "%s\t", student[i].dept);
        fprintf(fp, "%.2lf\t", average[i]);
        fprintf(fp, "\n");
    }

    return 0;
}
