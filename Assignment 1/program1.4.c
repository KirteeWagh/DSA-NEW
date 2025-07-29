#include<stdio.h>
 
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{

    if ((iNo %5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    int  iVlaue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number ");
    scanf("%d",&iVlaue);

    bRet = Check(iVlaue);

    if(bRet == TRUE)
    {
        printf("Divisible By 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}