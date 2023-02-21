#include<stdio.h>
#include<stdlib.h>
char name[20], fa_name[20], mo_name[20], s_name[40], dob[15];
int roll_number, class, ka_marks, hi_marks, eng_marks, san_marks, math_marks, sci_marks, so_sci_marks;
void generate_marksheet()
{
    float grand_total;
    float precentage;
    grand_total = ka_marks + hi_marks + eng_marks + san_marks + math_marks + sci_marks + so_sci_marks;
    precentage = grand_total / 7;

    printf("\n-------------------------------------------------------------------------------------\n");
    printf("|                  CENTRAL BOARD OF SECONDARY EDUCATION                               \n");
    printf("|                              2023-2024                                              \n");
    printf("|------------------------------------------------------------------------------------\n");
    printf("|Your name: %s\tclass: %dth\tRoll Number: %d\n", name, class, roll_number);
    printf("|Father name: %s\n", fa_name);
    printf("|Mother name: %s\n", mo_name);
    printf("|Date of birth: %s\n", dob);
    printf("|School name: %s\n", s_name);
    printf("|------------------------------------------------------------------------------------\n");
    printf("|\tSUBJECTS      \tMAX MARKS\tMIN MARKS\tTHEORY MARKS\n");
    printf("|------------------------------------------------------------------------------------\n");
    printf("|\tKANNADA       \t  100      \t   33       \t    %d\n", ka_marks);
    printf("|\tHINDI         \t  100      \t   33       \t    %d\n", hi_marks);
    printf("|\tENGLISH       \t  100      \t   33       \t    %d\n", eng_marks);
    printf("|\tSANSKRIT      \t  100      \t   33       \t    %d\n", san_marks);
    printf("|\tMATHEMATICS   \t  100      \t   33       \t    %d\n", math_marks);
    printf("|\tSCIENCE       \t  100      \t   33       \t    %d\n", sci_marks);
    printf("|\tSOCIAL SCIENCE\t  100      \t   33       \t    %d\n", so_sci_marks);
    printf("|------------------------------------------------------------------------------------\n");
    printf("|\t              \t  600    |    GRAND TOTAL\t    %0.2f\n", grand_total);
    printf("|------------------------------------------------------------------------------------\n");
    if (precentage >= 81 && precentage <= 100)
    {
        printf("|RESULT : PASS IN FIRST DIVISION\n");
        printf("|GRADE  : A+\n");
    }
    if (precentage >= 60 && precentage <= 80)
    {
        printf("|RESULT : PASS IN FIRST DIVISION\n");
        printf("|GRADE  : A\n");
    }
    else if (precentage >= 41 && precentage <= 59)
    {
        printf("|RESULT : PASS IN SECOND DIVISION\n");
        printf("|GRADE  : B\n");
    }
    else if (precentage >= 31 && precentage <= 40)
    {
        printf("|RESULT : PASS IN THIRD DIVISION\n");
        printf("|GRADE  : C\n");
    }
    else if (precentage >= 1 && precentage <= 30)
    {
        printf("|RESULT : Fail\n");
        printf("|GRADE  : D\n");
    }
    printf("|PERCENTAGE :%0.2f%c\n",precentage,37);
    printf("|------------------------------------------------------------------------------------\n\n");
}
void take_user_info()
{
    char yesNo;
    printf("Enter your name: ");
    fflush(stdin);
    gets(name);
    printf("Enter father name: ");
    fflush(stdin);
    gets(fa_name);
    printf("Enter mother name: ");
    fflush(stdin);
    gets(mo_name);
    printf("Enter school name: ");
    fflush(stdin);
    gets(s_name);
    printf("Enter date of birth name: ");
    fflush(stdin);
    gets(dob);
    printf("Enter class: ");
    scanf("%d", &class);
    printf("Enter roll No.: ");
    scanf("%d", &roll_number);
    printf("Enter subject marks\n");
repeate:
    printf("Kannada marks: ");
    scanf("%d", &ka_marks);
    if (ka_marks > 100 || ka_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate;
    }
repeate1:
    printf("Hindi marks: ");
    scanf("%d", &hi_marks);
    if (hi_marks > 100 || hi_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate;
    }
repeate2:
    printf("English marks: ");
    scanf("%d", &eng_marks);
    if (eng_marks > 100 || eng_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate1;
    }
repeate3:
    printf("Sanskrit marks: ");
    scanf("%d", &san_marks);
    if (san_marks > 100 || san_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate2;
    }
repeate4:
    printf("Mathematics marks: ");
    scanf("%d", &math_marks);
    if (math_marks > 100 || math_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate3;
    }
repeate5:
    printf("Science marks: ");
    scanf("%d", &sci_marks);
    if (sci_marks > 100 || sci_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate4;
    }
repeate6:
    printf("Social science marks: ");
    scanf("%d", &so_sci_marks);
    if (so_sci_marks > 100 || so_sci_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate5;
    }
    printf("\nIf you want to generate your marksheet then press 'Y' otherwise 'N': ");
    fflush(stdin);
    scanf("%c", &yesNo);
    if (yesNo == 'y' || yesNo == 'Y')
    {
        generate_marksheet();
    }
    else
    {
        exit(0);
    }
}
void main()
{
    char yesNo;
    printf("\n             **Welcome to marsheet generation project**               \n\n");
    printf("If you want to generate your marsheet ");
    printf("then you have to provide some information\n");
    printf("If you want to provide information then press 'Y' otherwise 'N': ");
    scanf("%c", &yesNo);
    if (yesNo == 'y' || yesNo == 'Y')
    {
        take_user_info();
    }
    else
    {
        exit(0);
    }
}