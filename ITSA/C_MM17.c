#include <stdio.h>
/*[C_MM17-易] 求最大公因數
問題描述：
輸入兩個數字，找出它們的最大公因數
輸入說明：
輸入一組兩個整數。
輸出說明：
輸出兩數字的最大公因數。*/
int main()
{
    int a,b;
    int ans=1;
    int i=2;
    scanf("%d %d",&a,&b);
    if(a==0 || b==0)
        printf("1\n");
    else if(a==1 || b==1)
        printf("1\n");
    else
    {
        //a>=2和b>=2的情況
        while(a>=i && b>=i)
        {
            //從2開始除 若兩者都整除代表為公因數
            while(a%i==0 && b%i==0)
            {
                ans*=i;
                a/=i;
                b/=i;
            }
            //用a除因數和b除因數剩下的數繼續找公因數
            i++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
