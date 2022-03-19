#include<stdio.h>
#include<string.h>

typedef struct {
    char first[20];
    char last[20];
} nametype;

typedef struct {
    int date;
    int month;
    int year;
} birthtype;

typedef struct {
    char id[20];
    nametype name;
    nametype fathname;
    nametype mothname;
    birthtype dateofbirth;
} cardtype;

int main()
{
    cardtype card;

//this is the input part for this program
    printf("Enter the first name: ");
    scanf("%s"   , card.name.first);

    printf("Enter the last name: ");
    scanf("%s", card.name.last);

    printf("Enter father first name: ");
    scanf("%s", card.fathname.first);

    printf("Enter father last name: ");
    scanf("%s", card.fathname.last);

    printf("Enter mother first name: ");
    scanf("%s", card.mothname.first);

    printf("Enter mother last name: ");
    scanf("%s", card.mothname.last);

    printf("\nEnter Date of birth: \n");

    printf("Date: ");
    scanf("%d", &card.dateofbirth.date);

    printf("Month: ");
    scanf("%d", &card.dateofbirth.month);

    printf("Year: ");
    scanf("%d", &card.dateofbirth.year);

    printf("Enter ID NO: ");
    scanf("%s", card.id);


//this is the output part:

    printf("\n\n OUTPUT: \n");

    printf("National Id Card: \n");

    printf("Name: %s %s\n", card.name.first, card.name.last);

    printf("Fathers name: %s %s\n", card.fathname.first, card.fathname.last);

    printf("Mothers name: %s %s\n", card.mothname.first, card.mothname.last);

    printf("Date Of Birth: %d %d %d\n", card.dateofbirth.date, card.dateofbirth.month, card.dateofbirth.year);

    printf("ID NO: %s\n", card.id);

    return 0;
}
