#include <stdio.h>
/*[C_AR43-��] �H���j��ƭp�⾭��
1. ���D�y�z �G �H���j��ƭp�⾭��
�g�@�ӵ{���H���j��ƭp�⾭���C
��J���� �G
�h������A�C���@���Ӿ�� m �M n ( �Ҥj��ε��� 0) �A����EOF�����C
��X���� �G
�C���@��A�H���j��ƭp�� mn �C*/
int main()
{
    int n,m,i;
    long int result;
    while(1)
    {
        int read;
        read=scanf("%d %d",&n,&m);
        if(read==EOF)
            break;
        result=n;
        if(m==0)
            result=1;
        else
        {
            for(i=0;i<m-1;i++)
                result*=n;
        }
        printf("%ld\n",result);
    }
    return 0;
}
