// Matrix multiplication
#include <stdio.h>

int main()
{
start:
    printf("\n*** Program to do 'Matrix Multiplication' ***\n\n");
    int sum = 0;               // sum used during the matrix multiplication is intialized to zero
    int num_row1, num_column1; // for number of rows and columns in first matrix
    int num_row2, num_column2; // for number of rows and columns in second matrix
    printf("Enter number of rows in first matrix\n");
    scanf("%d", &num_row1);
    printf("Enter number of columns in first matrix\n");
    scanf("%d", &num_column1);
    printf("Enter number of rows in second matrix\n");
    scanf("%d", &num_row2);
    printf("Enter number of columns in second matrix\n");
    scanf("%d", &num_column2);

    if (num_column1 == num_row2)
    {
        int first_matrix[num_row1][num_column1], second_matrix[num_row2][num_column2], result[num_row1][num_column2];
        // Taking input of the first matrix
        printf("\nEnter the first matirx:-\n");
        for (int i = 0; i < num_row1; i++)
        {
            for (int j = 0; j < num_column1; j++)
            {
                printf("Enter the %d %d element of first matrix\n", i + 1, j + 1);
                scanf("%d", &first_matrix[i][j]);
            }
        }
        // Displaying the first matrix
        printf("\nThe first matirx A is:-\n");
        for (int i = 0; i < num_row1; i++)
        {
            for (int j = 0; j < num_column1; j++)
            {
                printf("%-6d\t", first_matrix[i][j]);
            }
            printf("\n");
        }

        // Taking input of the second matrix
        printf("\nEnter the second matirx:-\n");
        for (int i = 0; i < num_row2; i++)
        {
            for (int j = 0; j < num_column2; j++)
            {
                printf("Enter the %d %d element of second matrix\n", i + 1, j + 1);
                scanf("%d", &second_matrix[i][j]);
            }
        }
        // Displaying the second matrix
        printf("\nThe second matirx B is:-\n");
        for (int i = 0; i < num_row2; i++)
        {
            for (int j = 0; j < num_column2; j++)
            {
                printf("%-6d\t", second_matrix[i][j]);
            }
            printf("\n");
        }

        // finding the result
        for (int i = 0; i < num_row1; i++) // resultant matrix is of num_row1 x num_coulumn2
        {
            for (int j = 0; j < num_column2; j++)
            {
                // Calculate the result
                // for (int k = 0; k < num_row2; k++) // both line 72 and 71 act as same
                for (int k = 0; k < num_column1; k++)
                {
                    sum += first_matrix[i][k] * second_matrix[k][j];
                }
                result[i][j] = sum;
                sum = 0; // so that the value is not added to the previous value
            }
        }

        // Printing the resultant matrix
        printf("\nThe product of two matrix A and B is :-\n");
        for (int i = 0; i < num_row1; i++)
        {
            for (int j = 0; j < num_column2; j++)
            {
                // Print the result
                printf("%-6d \t", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("This matrix multiplication is not possible as column of first matrix and row of second matrix is not same\n\n");
    }

    // Asking user if he/she again want to run this program
    char c;
    printf("\nDo you want to again run this program?\nPress 'y' for yes and any other key to close the program\n");
    scanf(" %c", &c);
    switch (c)
    {
    case 'y':
    case 'Y':
        goto start;
        // break;

    default:
    printf("\n~~~ Thanks for using this program ~~~\n");
        break;
    }
    return 0;
}