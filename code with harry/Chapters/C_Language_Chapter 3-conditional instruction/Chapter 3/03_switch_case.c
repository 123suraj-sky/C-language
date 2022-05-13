#include <stdio.h>

int main()
{
   int rating;
   printf("Enter your rating from 1-5\n");
   scanf("%d", &rating);

   switch (rating)
   {
   case 1:
      printf("Your rating is 1\n");
      break;
   case 2:
      printf("Your rating is 2\n");
      break;
   case 3:
      printf("Your rating is 3\n");
      break;
   case 4:
      printf("Your rating is 4\n");
      break;
   case 5:
      printf("Your rating is 5\n");
      break;
   default:
      printf("Invalid rating!\n");
      break;
      /*  If we not use break in all above 5 cases and in default then
               all the codes below the code which gets matched can run, 
               to stop switch situation in that particular case we use break  */
   }
   return 0;
}