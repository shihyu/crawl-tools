#include<stdio.h>
int a[10000][260]={0};   //æ¯ä¸ªåç´ å¯ä»¥å­å¨8ä½æ°å­ï¼æä»¥2005ä½å¯ä»¥ç¨260ä¸ªæ°ç»åç´ å­å¨ã
int main()
{
    int i,j,n;
    a[1][0]=1;      //èµåå¼
    a[2][0]=1;
    a[3][0]=1;
    a[4][0]=1;
    for(i=5;i<10000;i++)
    {
        for(j=0;j<260;j++)
            a[i][j]+=a[i-1][j]+a[i-2][j]+a[i-3][j]+a[i-4][j];
        for(j=0;j<260;j++)                //æ¯å«ä½èèè¿ä½ã
            if(a[i][j]>100000000)
            {
                a[i][j+1]+=a[i][j]/100000000;
                a[i][j]=a[i][j]%100000000;
            }
    }
    while(scanf("%d",&n)!=EOF)
    {
        for(j=259;j>=0;j--)
            if(a[n][j]!=0) break;      //ä¸è¾åºé«ä½ç0
        printf("%d",a[n][j]);
        for(j=j-1;j>=0;j--)
            printf("%08d",a[n][j]);     //æ¯ä¸ªåç´ å­å¨äºå«ä½æ°å­ï¼æä»¥æ§å¶è¾åºä½æ°ä¸º8ï¼å·¦è¾¹è¡¥0
        printf("\n");
    }
    return 0;
}
