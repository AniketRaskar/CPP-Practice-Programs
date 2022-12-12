//perform addition of n numbers
#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum += Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iLength =0;
    int iRet=0,iCnt=0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iLength);

    ptr=malloc(sizeof(int)*iLength);

    printf("Enter the values of array\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr,iLength);
    printf("Addition is:%d\n",iRet);

    return 0;

}