#include <stdio.h>
#include <string.h>
int main(){
    int daynum;
    char day[20];
    int count = 0;
    char daytw[20];
    
    printf("enter number of days\n");
    scanf("%d",&daynum);
    printf("enter day of 1st january\n");
    scanf("%s",&day);
    


    if(daynum <= 31){       //jan
        count = daynum;
        printf("january\n");
    }
    
    else if(daynum <= 59 && daynum > 31){  //feb
        count = daynum - 31;
        printf("febuary\n");
    }
    else if(daynum <= 90 && daynum > 59){ //march
        count = daynum - 59;
        printf("march\n");
    }
    else if(daynum <= 120 && daynum > 90){ //april
        count = daynum - 90;
        printf("april\n");
    }
    else if(daynum <= 151 && daynum > 120){ //may
        count = daynum - 120;
        printf("may\n");
    }
    else if(daynum <= 181 && daynum > 151){ //jun
        count = daynum - 151;
        printf("june\n");
    }
    else if(daynum <= 212 && daynum > 181){ //july
        count = daynum - 181;
        printf("july\n");
    }
    else if(daynum <= 243 && daynum > 212){ //aug
        count = daynum - 212;
        printf("august\n");
    }
    else if(daynum <= 273 && daynum > 243){ // spt
        count = daynum - 243;
        printf("september\n");
    }
    else if(daynum <= 304 && daynum > 273){ //oct
        count = daynum - 273;
        printf("october\n");
    }
    else if(daynum <= 334 && daynum > 304){  //nov
        count = daynum - 304;
        printf("november\n");
    }
    else if(daynum <= 365 && daynum > 334){ //dec
        count = daynum - 334;
        printf("december\n");
    }
    printf("date is %d\n",count);
    int week;
    int offset;
    week = (int)(count%7);
    if(strcmp(day,"monday")){
        offset = 0;
    }
    else if( strcmp(day,"tuesday")){
        offset = 1;
    }
    else if(strcmp(day,"wednesday") ){
        offset = 2;
    }
    else if(strcmp(day,"thursday") ){
        offset = 3;
    }
    else if(strcmp(day,"friday")){
        offset = 4;
    }
    else if(strcmp(day,"saturday") ){
        offset = 5;
    }
    else if(strcmp(day,"sunday")){
        offset = 6;
    }
   

    switch(week+offset)  
    {  
        case 0: printf("Monday.\n");  
                break;  
        case 1: printf("Tuesday.\n");  
                break;  
        case 2: printf("Wednesday.\n");  
                break;  
        case 3: printf("Thursday.\n");  
                break;  
        case 4: printf("Friday.\n");  
                break;  
        case 5: printf("Saturday.\n");  
                break;  
        case 6: printf("Sunday.\n");  
                break;
        case 7: printf("Monday.\n");  
                break;  
        case 8: printf("Tuesday.\n");  
                break;  
        case 9: printf("Wednesday.\n");  
                break;  
        case 10: printf("Thursday.\n");  
                break;  
        case 11: printf("Friday.\n");  
                break;  
        case 12: printf("Saturday.\n");  
                break;  
        case 13: printf("Sunday.\n");  
                break;   
    } 
    
    

}