#include<stdio.h>
int CountFour(int iNo)
{
    int iCount = 0;
    while (iNo>0)
    {
        if (iNo%10 ==4)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
    
}

int main()
 {
    int iValue = 0;
    int iRet = 0;
    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("%d",iRet);

    return 0;
}