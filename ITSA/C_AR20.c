#include <stdio.h>

/*[C_AR20-��] �ˬd�ƭȬO�_������
���D�y�z �G
�����@�ӥ�1��N���Ҧ���ƺc�����ƦC�A���̤j�p�ƦC�C
�g�@����ˬd���ƦC�O�_�C�Ӽƭȥu�X�{�@���C
��J���� �G
��J�������A�Ĥ@��O�@�Ӥ���1�P128��������ơA�N��ĤG�椤�ƦC�����Ʀr�ӼơC
�ĤG��O�Ѫť�����j�}���Ʀr�ǦC�A���W�L128�ӼơC
�C�@�ӼƭȤ���1��ǦC�Ʀr�Ӽƪ���ơC
��X���� �G
�Y�O�C�ӼƦr��n�u�X�{�@���h��X1�A��X0��ܨ䤤�����ƪ��Ʀr�C*/

int main()
{
    int N,i=0,j=0;
    int result=0;
    int arr[128];
    scanf("%d",&N);
    for (i=0; i<N; i++)
        scanf("%d",&arr[i]);
    for (i=0; i<N; i++)
    {
        for (j=i+1; j<N; j++)
        {
            if(arr[i]==arr[j])
                result++;
        }
    }
    if(result==0)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
