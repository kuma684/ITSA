#include <stdio.h>
/*[C_MM25-��] �p�⥿��ƳQ3�㰣���ƭȤ��`�M
���D�y�z�G
�ռg�@�ӵ{���A��J�@�����N�A�i�p��X1��N�����i�Q3�㰣���ƭȤ��`�M�C
��J�����G
��J�@����ơC
��X�����G
��X�`�M�C*/
int main()
{
    int input,result=0;
    int i;
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        if((i%3)==0)
            result+=i;
    }
    printf("%d\n",result);
    return 0;
}
