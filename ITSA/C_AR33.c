#include<stdio.h>
/*[C_AR33-��] ��m�x�}
���D�y�z�G
���@�x�} N,M �A�N��Q����m��k���ܯx�}�C
��J����
��J��ƲĤ@�C���x�}�j�p�A N �B M �A�M���J�x�}�ƭȡC
�Y N �B M ��J 0 �h�����{���C
��X����
�o����m�x�}�C*/
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
