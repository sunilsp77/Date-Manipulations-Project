/*To find whether a date entered is valid or not*/
int isValid(char *date)
{
    int d,m,y;
    if(date[2]!='/' || date[5]!='/' || strlen(date)!=10)
        return 0;//if the date is not valid
<<<<<<< HEAD
    splitDate(date,&y,&m,&d);//spliting date
=======
    splitDate(date,&y,&m,&d);//spliting date and checking
>>>>>>> exp
    if(d==0 || m==0 || y==0)return 0;
    if(d<1 || d>31 || m<1 || m>12)return 0;
    if(m==2)
    {
        if(d==29 &&isLeap(y))return 1;
        if(d>28)return 0;
    }
    if(m==4||m==6||m==9||m==11)
    {
        if(d>30)return 0;
    }
<<<<<<< HEAD
    return 1;
=======
    return 1;//valid date
>>>>>>> exp
}
