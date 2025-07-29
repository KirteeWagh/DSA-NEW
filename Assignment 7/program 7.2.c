#include <stdio.h>

int DollarToINR(int iNo)
{
    int rate = 70;
    
    if(iNo<0)
    {
      iNo = iNo * rate; 
    }
     return iNo;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d\n", iRet);

    return 0;
}
