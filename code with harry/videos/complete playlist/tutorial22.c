#include <stdio.h>
/* 
1 km = 0.621371 mile
1 inch = 0.083 foot
1 cm = 0.393701 inch
1 pound = 0.453592 kg
1 inch = 0.0254 meter
*/

int main()
{
start:
    printf("Let's convert this...\n");
    int num;
    float kms, inches, cms, pound, miles, foot, kgs, meters;
    printf("Select a conversion unit:\n\
1) kms to miles\n\
2) inches to foot \n\
3) cms to inches\n\
4) pound to kgs\n\
5) inches to meters\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Enter the value of kilometers\n");
        scanf("%f", &kms);

        miles = kms * 0.621371;
        printf("%f kms = %f miles\n", kms, miles);
    }
    else if (num == 2)
    {
        printf("Enter the value of inches\n");
        scanf("%f", &inches);

        foot = inches * 0.083;
        printf("%f inches = %f foot\n", inches, foot);
    }
    else if (num == 3)
    {
        printf("Enter the value of centimeters\n");
        scanf("%f", &cms);

        inches = cms * 0.393701;
        printf("%f cms = %f inches\n", cms, inches);
    }
    else if (num == 4)
    {
        printf("Enter the value of pound\n");
        scanf("%f", &pound);

        kgs = pound * 0.453592;
        printf("%f pound = %f kgs\n", pound, kgs);
    }
    else if (num == 5)
    {
        printf("Enter the value of inches\n");
        scanf("%f", &inches);

        meters = inches * 0.0254;
        printf("%f inches = %f meters\n", inches, meters);
    }
    else
    {
        printf("Error!! Please enter a number between 1 to 5\n\n");
        goto start;
    }

    char c;
    printf("\n\n\nDo you want to again convert something?\n(Press 'y' for yes and 'n' for exit)\n");
    scanf(" %c", &c); // Use a space before %c in scanf to read character after an integer or float or etc...
    // Defintion 2:- we use a character (which is a space) so that scanf don't consider new line and spaces
    // If we don't use space here it also counts new line

    if (c == 'y' || c == 'Y')
    {
        goto start;
    }
    else if (c == 'n' || c == 'N')
    {
        printf("\n****Thanks for using this program****\n");
    }
    return 0;
}