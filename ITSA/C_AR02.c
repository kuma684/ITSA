#include <stdio.h>

/*[C_AR02-易] 一維陣列反轉 II
問題描述：
試寫一個程式，將陣列的內容反轉，舉例來說，
如果陣列的內容是：30,20,10,5,34，你的程式必須將陣列內容改為：34,5,10,20,30
輸入說明：
隨意輸入六個數字。
輸出說明：
印出反轉後的內容。*/

int main()
{
    int arr[6];
    int i;
    for (i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=5;i>0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("%d",arr[0]);
    printf("\n");
    return 0;
}
