#include <stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
} date;

void display(date d){
    printf("The date is %d/%d/%d\n", d.date, d.month, d.year);
}

int dateCompare(date d1, date d2){
    // Make decision on the basis of year comparison
    if(d1.year > d2.year){
        return 1;
    }
    if(d1.year < d2.year){
        return -1;
    }

    // Make decision on the basis of month comparison
    if(d1.month > d2.month){
        return 1;
    }if(d1.month < d2.month){
        return -1;
    }

    // Make decision on the basis of date comparison
    if(d1.date > d2.date){
        return 1;
    }if(d1.date < d2.date){
        return -1;
    }
    
    else{
        return 0;
    }
}

int main(){
    date d1 = {6, 3, 2031}; // date, month, year
    date d2 = {3, 6, 2022};
    display(d1);
    display(d2);

    int a = dateCompare(d1, d2);
    if(a == 1){
        printf("Date %d/%d/%d is greater than or more than date %d/%d/%d\n", d1.date, d1.month, d1.year, d2.date, d2.month, d2.year);
    }
    else if(a == 0){
        printf("Date %d/%d/%d is equal to date %d/%d/%d\n", d1.date, d1.month, d1.year, d2.date, d2.month, d2.year);
    }
    else if(a == -1){
        printf("Date %d/%d/%d is greater than or more than date %d/%d/%d\n", d1.date, d1.month, d1.year, d2.date, d2.month, d2.year);
    }
    return 0;
}