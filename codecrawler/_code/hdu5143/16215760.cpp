/*
hdu 5143 æ´åæä¸¾
é¢ç®å¤§æï¼
     ç»å®æ°å­1,2,3,4.çä¸ªæ°æ¯ä¸ªæ°å­è½ä¸ä»è½ä½¿ç¨ä¸æ¬¡ï¼ç»æå¤ä¸ªæä¸ä¸ªç­å·®æ°åï¼é¿åº¦å¤§äºç­äº3ï¼é®è½å¦æå
è§£é¢æè·¯ï¼ï¼æ­çµå®æ¹é¢è§£ï¼
     å¯ä»¥åç°ç­å·®æ°ååªæï¼123,234,1234åé¿åº¦>=3çå¸¸æ°åï¼ï¼å¦æéæ©éå¸¸æ°åï¼123,234,1234ï¼æ°éå¤§äºç­äº3ï¼
å¯ä»¥åä¸ºä¸ä¸ªæ4ä¸ªå¸¸æ°å,ä¾å¦ï¼123,123,123ï¼åä¸ºï¼111,222,333ï¼ãæä»¥ä»0-2æä¸¾éæ©éå¸¸æ°åçæ°éï¼åå¤æ­è½
å¦ç¨å¸¸æ°åè¦çå©ä¸çï¼å¦ææ°å­é¿åº¦æ­£å¥½ä¸º0æâ¤3å°±å¯ä»¥ï¼ã
*/
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
bool ok(int a[5])
{
    if((a[0]>=3||a[0]==0)&&(a[1]>=3||a[1]==0)&&(a[2]>=3||a[2]==0)&&(a[3]>=3||a[3]==0))
        return true;
    return false;
}
int a[10],b[10];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        for(int i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
        }
        int flag=0;
        if(ok(a))
        {
            flag=1;
        }
        else
        {
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    for(int k=0;k<=2;k++)
                    {
                        b[0]=a[0]-i-j;
                        b[1]=a[1]-i-j-k;
                        b[2]=a[2]-i-j-k;
                        b[3]=a[3]-i-k;
                        if(ok(b))
                            flag=true;
                    }
                }
            }
        }
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}