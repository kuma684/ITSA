#include <stdio.h>
/*[C_MM21-��] �ⶥ��
�D�شy�z:
�ⶥ��
��J����:
��J�@�Ӿ�� n�A0 < n < 20
��X����:
��X����*/
int main()
{
    int input,i;
    long int result=1;
    scanf("%d",&input);
    for(i=1;i<=input;i++)
        result*=i;
    printf("%ld\n",result);
    return 0;
}
