#include <stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("sample.txt", "r"); // --> for reading the file
    // ptr = fopen("sample.txt", "w"); // --> for writing the file


    ptr = fopen("sample2.txt", "w"); // Create a new file in write mode if the file does'nt exist


    return 0;
}