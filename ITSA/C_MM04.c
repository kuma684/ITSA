#include <stdio.h>
/*[C_MM04-��] �p���`�M�B���n�B�t�B�өM�l��
���D�y�z�G
���g�@�ӵ{���A�n�D�ϥΪ̿�J��ӼƦr�A�A�q�ϥΪ̨��o�o��Ӽ�
�r�A�M��L�X�o��ӼƦr���`�M�B���n�B�t�B�ӡB�M�l�ơC
��J���� �G
��J��Ӿ�ơC
��X���� �G
��X�`�M�B���n�B�t�B�ӡB�M�l�ơC
���l�ơ�0�C*/
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    if(a%b<0)
    {
        //��-1 �l��+���Ƹɥ�
        printf("%d/%d=%d...%d\n",a,b,a/b-1,a%b+b);
    }
    else
        printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
    return 0;
}
