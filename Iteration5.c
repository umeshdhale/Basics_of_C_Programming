#include<stdio.h>

int main()
{
    int iCnt = 0;

    iCnt = 1;           // 1
    while(iCnt < 4);    // 2
    {
        printf("Hello World..\n");   // 4
        iCnt++;         // 3
    }
    return 0;
}