#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;}
/*[C_AR53-��] �ǥͦ��Z�Ƨ�
���D�y�z�G
�м��g�@�ӵ{���A�ϥΪ̷|��J�ǥͤH�ơA�H�ΨC��ǥͪ����Z (0-99) �A
�{���|�N���Z���Ƨǿ�X�C
��J�����G
�ϥΪ̿�J�ǥͤH�� n �A�H�ΨC��ǥͪ����Z (0~99) �C
��X�����G
�ھڨϥΪ̿�J�����Z�A��ܱƧǪ����G ( �ѧC�찪 ) �C*/
int main()
{
    int n,i,j;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
                SWAP(arr[i],arr[j]);
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    return 0;
}
