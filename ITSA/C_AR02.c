#include <stdio.h>

/*[C_AR02-��] �@���}�C���� II
���D�y�z�G
�ռg�@�ӵ{���A�N�}�C�����e����A�|�Ҩӻ��A
�p�G�}�C�����e�O�G30,20,10,5,34�A�A���{�������N�}�C���e�אּ�G34,5,10,20,30
��J�����G
�H�N��J���ӼƦr�C
��X�����G
�L�X����᪺���e�C*/

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
