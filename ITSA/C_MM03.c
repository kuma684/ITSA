#include <stdio.h>
/*[C_MM03-��] ����`�M
���D�y�z�G
�мg�@�ӵ{���AŪ�J��ӼƦr�A�èD�X���̪��M�C
��J���� �G
��J���h�մ���A�C�@�C���@�մ���A�C�տ�J����Ӿ��(int)�C
��X���� �G
��X�Ө��ƪ��M(int)�A�C�@�C���@�տ�X���G�C*/
int main()
{
    int a,b;
    int result;
    while(1)
    {
        if(scanf("%d %d",&a,&b)==EOF)
            break;
        result=a+b;
        printf("%d\n",result);
    }
    return 0;
}
