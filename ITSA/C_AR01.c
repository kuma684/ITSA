#include <stdio.h>

/*[C_AR01-��] �@���}�C���� I
�D�شy�z:
�@���}�C����
��J����:
��J�@�Ӥ@���}�C�A�����̦h���W�L100��
��X����:
��X����᪺�}�C
�̫�ݦ�����C*/

int main()
{
    int arr[100];
    int count=0;
    while(scanf("%d",&arr[count])!=EOF)
        count++;
    for (int i=count-1; i>0; i--)
        printf("%d ",arr[i]);
    printf("%d",arr[0]);
    printf("\n");
    return 0;
}
