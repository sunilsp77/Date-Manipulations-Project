#include<stdio.h>
#include "Dtmanip.h"
main()
{
    int choice;
    char date[11],date1[11],date2[11];
    char dayWeek[10],newDate[11];
    int iyear,imonth,dyear,dmonth,days;
    int y,m,d;

    while(1)
    {   //providing choices
        printf("1. Date validation\n");
        printf("2. Compare Dates\n");
        printf("3. Difference of Dates in days\n");
        printf("4. Difference of Dates in years months days\n");
        printf("5. Day of week\n");
        printf("6. Add years\n");
        printf("7. Add months\n");
        printf("8. Add days\n");
        printf("9. Subtract years\n");
        printf("10. Subtract months\n");
        printf("11. Subtract  days\n");
        printf("12. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter date (dd/mm/yyyy) : ");
            scanf("%s",date);
            if(isValid(date))
            printf("Valid date\n");
            if(!isValid(date))
            printf("Not a Valid date\n");
            break;

            case 2:
            printf("Enter first date (dd/mm/yyyy) : ");
            scanf("%s",date1);
            printf("Enter second date (dd/mm/yyyy) : ");
            scanf("%s",date2);
            if(!isValid(date1) || !isValid(date2))
            {
                printf("Enter only valid dates\n");
                break;
            }
            if(cmpDate(date1,date2)==0)
                printf("Dates are same\n");
                else if(cmpDate(date1,date2)==1)
                printf("Date1 is less than Date2\n");
                else if(cmpDate(date1,date2)==-1)
                printf("Date1 is greater than date2\n");
                break;

            case 3:
            printf("Enter first date (dd/mm/yyyy) : ");
            scanf("%s",date1);
            printf("Enter second date (dd/mm/yyyy) : ");
            scanf("%s",date2);
            if(!isValid(date1) || !isValid(date2))
            {
                printf("Enter only valid dates\n");
                break;
            }
            if(cmpDate(date1,date2)==1)
                days=diffDays(date1,date2);
                else
                days =diffDays(date2,date1);
            printf("Difference in days = %d\n",days);
            break;

            case 4:
            printf("Enter first date (dd/mm/yyyy) : ");
            scanf("%s",date1);
            printf("Enter second date (dd/mm/yyyy) : ");
            scanf("%s",date2);
            if(!isValid(date1) || !isValid(date2))
            {
                printf("Enter only valid dates\n");
                break;
            }
            if(cmpDate(date1,date2)==1)
            diffYMD(date1,date2,&y,&m,&d);
            else
            diffYMD(date2,date1,&y,&m,&d);
            printf("Difference of the two dates is : ");
            printf("%d years  %d months  %d  days \n",y,m,d);
            break;

            case 5:
            printf("Enter date (dd/mm/yyyy) : ");
            scanf("%s",date);
            weekDay(date,dayWeek);
            printf("Day of week is %s \n",dayWeek);
            break;

            case 6:
            printf("Enter date (dd/mm/yyyy) : ");
            scanf("%s",date);
            if(!isValid(date))
            {
                printf("Enter a valid date\n");
                break;
            }
            printf("Enter the no of years to be added : ");
            scanf("%d",&iyear);
            addYear(date,iyear,newDate);
            printf("Now the new date is %s\n",newDate);
            break;

            case 7:
            printf("Enter date (dd/mm/yyyy) : ");
            scanf("%s",date);
            if(!isValid(date))
            {
                printf("Enter a valid date\n");
                break;
            }
            printf("Enter the no of months to be added : ");
            scanf("%d",&imonth);
            addMonth(date,imonth,newDate);
            printf("Now the new date is %s\n",newDate);
            break;


            case 8:
            printf("Enter date (dd/mm/yyyy) : ");
            scanf("%s",date);
            if(!isValid(date))
            {
                printf("Enter a valid date\n");
                break;
            }
            printf("Enter the no of days to be added : ");
            scanf("%d",&days);
            addDays(date,days,newDate);
            printf("Now the new date is %s\n",newDate);
            break;

            case 9:
            printf("Enter date (dd/mm/yyyy) : ");
            scanf("%s",date);
            if(!isValid(date))
            {
                printf("Enter a valid date\n");
                break;
            }
            printf("Enter the no of years to be subtracted : ");
            scanf("%d",&dyear);
            subYear(date,dyear,newDate);
            printf("Now the new date is %s\n",newDate);
            break;

            case 10:
            printf("Enter date (dd/mm/yyyy) : ");
            scanf("%s",date);
            if(!isValid(date))
            {
                printf("Enter a valid date\n");
                break;
            }
            printf("Enter the no of months to be subtracted : ");
            scanf("%d",&dmonth);
            subMonth(date,dmonth,newDate);
            printf("Now the new date is %s\n",newDate);
            break;

            case 11:
            printf("Enter date (dd/mm/yyyy) : ");
            scanf("%s",date);
            if(!isValid(date))
            {
                printf("Enter a valid date\n");
                break;
            }
            printf("Enter the no of days to be subtracted : ");
            scanf("%d",&days);
            subDays(date,days,newDate);
            printf("Now the new date is %s\n",newDate);
            break;

            case 12:
            exit(1);
            default:
            printf("Wrong choice\n");

        }
    }


}
