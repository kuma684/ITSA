#include<stdio.h>
/*[C_AR33-易] 轉置矩陣
問題描述：
有一矩陣 N,M ，將其利用轉置方法改變矩陣。
輸入說明
輸入資料第一列為矩陣大小， N 、 M ，然後輸入矩陣數值。
若 N 、 M 輸入 0 則結束程式。
輸出說明
得到轉置矩陣。*/
int main()
{
    int n,m,i,j;
    int arr[100][100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n-1;j++)
            printf("%d ",arr[j][i]);
        printf("%d",arr[n-1][i]);
        printf("\n");
    }
    return 0;
}
