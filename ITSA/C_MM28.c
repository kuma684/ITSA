#include <stdio.h>
/*[C_MM28-��] �p��1��N�����ݩ�5�M7������
���D�y�z�G
�ռg�@�ӵ{���A���ϥΪ̿�J���N����� N �A
�i�p��X 1 �� N �����ݩ� 5 �M 7 �����ƪ��ƭȡC
��J�����G
��J�@�ӥ���ơC
��X�����G
��X 5 �M 7 �����ƪ��Ʀr�C*/
int main()
{
    int input,i=0,j=0;
    int result[500]={};
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        if(i%35==0)
        {
            result[j]=i;
            j++;
        }
    }
    for(i=0;i<j-1;i++)
        printf("%d ",result[i]);
    printf("%d\n",result[j-1]);
    return 0;
}
