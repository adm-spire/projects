#include <stdio.h>
int main(){
    int year;
    printf("enter year");
    scanf("%d",&year);
    if (year%4 == 0 && year%100 != 0){
        printf("year is leap year1");
    }
    else if ( year%100 == 0 && year%400 == 0){
        printf("year is leap year2");

    }
    else if ( year == 0 && year%400 != 0){
        printf(" year is not a leap year3");
    }
    else {
        printf("year is not a leap year4");
    }

}