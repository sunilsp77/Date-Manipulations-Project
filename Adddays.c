/*to add days to a date and get the resulting date*/
void addDays(char *date,int days,char *newDate)
{
    int d1,m1,y1,d2,m2,y2;
    int j1,j2,x,k;
    splitDate(date,&y1,&m1,&d1);
    j1=julian(d1,m1,y1);
    x=isLeap(y1)?366-j1 : 365-j1;
    if(days <=x)
    {
        j2=j1+days;
        y2=y1;
    }
    else
    {
        days=days-x;
        y2=y1+1;
        k=isLeap(y2)? 366:365;
        while(days >=k)
        {
            if(isLeap(y2))
                days-=366;
            else
                days-=365;
            y2++;
            k=isLeap(y2)? 366:365;
        }
        j2=days;
    }
    revJulian(j2,y2,&d2,&m2);
    formDate(newDate,y2,m2,d2);//resulting date
}
