#include <stdio.h>
/*C_MM38-��] �P�_3��ƬO�_��c���T���Τ��T���
���D�y�z�G
�ռ��g�@�{���A�P�_�o�T�Ӿ�ƬO�_��c���T���Ϊ��T�����
�]�� : �T���Ψ�������M�����j��ĤT��^�C
��J�����G
��J���@��r��A�]�t�F�T�ӼƭȡA�C�ӼƭȥH�ťչj�}�C
�T�ӼƭȤ��O���T���Ϊ��T������C
��X�����G
��X�ŦX (fit) �Τ��ŦX (unfit) �C*/
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        printf("fit\n");
    else
        printf("unfit\n");
    return 0;
}
