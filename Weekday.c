/*to find day of week from given date*/
#include<string.h>
void weekDay(char *date,char *dayweek )
{
    int d,m,y,j,f,h,fh,day;
    splitDate(date,&y,&m,&d);
    j=julian(d,m,y);
    f=(y-1)/4;
    h=(y-1)/100;
    fh=(y-1)/400;
    day=(y+j+f-h+fh)%7;
    switch(day)
    {
    case 0: strcpy(dayweek,"Saturday");break;
    case 1: strcpy(dayweek,"Sunday");break;
    case 2: strcpy(dayweek,"Monday");break;
    case 3: strcpy(dayweek,"Tuesday");break;
    case 4: strcpy(dayweek,"Wednesday");break;
    case 5: strcpy(dayweek,"Thursday");break;
    case 6: strcpy(dayweek,"Friday");break;
    }
}

