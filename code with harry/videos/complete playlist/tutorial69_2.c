#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i]) //notes: If the string is "this is a stirng"
        //notes: and if point to the 's' of "this" and if 'is' is the old word then it returns a string from 'is' to last i.e. "is a string"
        {
            count++; //* if we get the word so we increase the count i.e. word is found

            // after a word say 'is' is found then to make program efficient we skip that word
            // i.e. jump over this word

            i += oldWordLength - 1; //notes: '-1' is used b/c 'i' is also increment during i++
        }
    }

    // Making a new string to fit in the replced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1); //notes: '+1' is used to accomodate NULL character

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i++;
            str++;
        }
    }
    resultString[i] = '\0'; //notes: there must be a NULL character at the end
    return resultString;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "2");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);

    // Call the replaceWord function and generate newStr
    char *newStr;
    newStr = replaceWord(str, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan outlet");
    newStr = replaceWord(newStr, "{{name}}", "Harry");
    printf("The actual bill template is: %s\n", newStr);
    printf("The generated bill has been written to the file genBill.txt\n");

    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}