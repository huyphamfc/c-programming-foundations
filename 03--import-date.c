#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int day,month,year;
    bool flag = true;
    do
    {
        printf("Enter day: ");
        scanf("%d",&day);
        printf("Enter month: ");
        scanf("%d",&month);
        printf("Enter year: ");
        scanf("%d",&year);
        if(year<1582)
        {
            printf("Enter year again (>=1582)\n");
        }
        else
        {
            switch (month)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(1> day || day>31)
                {
                    printf("Enter day again (1-31)\n");
                }
                else
                {
                    flag = false;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if(1> day || day>30)
                {
                    printf("Enter day again (1-30)\n");
                }
                else
                {
                    flag = false;
                }
                break;
            case 2:
                if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
                {
                    if(1> day || day>29)
                    {
                        printf("Enter day again (1-29)\n");
                    }
                    else
                    {
                        flag = false;
                    }
                }
                else
                {
                    if(1> day || day>28)
                    {
                        printf("Enter day again (1-28)\n");
                    }
                    else
                    {
                        flag = false;
                    }
                }
                break;
            default:
                printf("Enter month again (1-12)\n");
            }
        }
    }
    while(flag);
    return 0;
}