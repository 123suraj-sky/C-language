#include <stdio.h>
/* 
You manage a travel agency and you want your n drivers to input their following details:
3. Name
2. Driving License Number
3. Route
4. Kms

Your program should be able to take n as input and your drivers will start inputting their details one by one

Your program should print detailsof the drivers in a beautiful fashion.

Create a structure*/

typedef struct Driver
{
    char name[20];
    char dr_li_num[6]; // dr_li_num means driving license number
    char route[20];
    float kms;
} dr;
int main()
{
    dr d1, d2, d3;
    printf("Enter the details of the Driver number 1\n");
    printf("Enter the name of first driver\n");
    scanf("%s", &d1.name);
    printf("Enter the driving licence of first driver\n");
    scanf("%s", &d1.dr_li_num);
    printf("Enter the route of first driver\n");
    scanf("%s", &d1.route);
    printf("Enter the total kms travelled by the first driver\n");
    scanf("%f", &d1.kms);

    printf("Enter the details of the Driver number 2\n");
    printf("Enter the name of second driver\n");
    scanf("%s", &d2.name);
    printf("Enter the driving licence of second driver\n");
    scanf("%s", &d2.dr_li_num);
    printf("Enter the route of second driver\n");
    scanf("%s", &d2.route);
    printf("Enter the total kms travelled by the second driver\n");
    scanf("%f", &d2.kms);

    printf("\nEnter the details of the Driver number 3\n");
    printf("Enter the name of third driver\n");
    scanf("%s", &d3.name);
    printf("Enter the driving licence of third driver\n");
    scanf("%s", &d3.dr_li_num);
    printf("Enter the route of third driver\n");
    scanf("%s", &d3.route);
    printf("Enter the total kms travelled by the third driver\n");
    scanf("%f", &d3.kms);

    printf("\n**** Printing information of these drivers ****\n\n");
    printf("For Driver No. 1:\nName is %s\n", d1.name);
    printf("Driving Licence Number is %s\n", d1.dr_li_num);
    printf("Route is %s\n", d1.route);
    printf("Kms is %f\n\n", d1.kms);

    printf("For Driver No. 2:\nName is %s\n", d2.name);
    printf("Driving Licence Number is %s\n", d2.dr_li_num);
    printf("Route is %s\n", d2.route);
    printf("Kms is %f\n\n", d2.kms);

    printf("For Driver No. 3:\nName is %s\n", d3.name);
    printf("Driving Licence Number is %s\n", d3.dr_li_num);
    printf("Route is %s\n", d3.route);
    printf("Kms is %f\n\n", d3.kms);
    
    return 0;
}