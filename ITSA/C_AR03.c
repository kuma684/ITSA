#include <stdio.h>

/*[C_AR03-��] �p��}�C���Ҧ��������ߤ�M
���D�y�z�G
�ռ��g�@�ӵ{���A�ŧi�@�� 1 ������ư}�C�A
�íp�⤸�����Ҧ��������ߤ�M�C
��J�����G
���N��J���Ӿ�ơC
��X�����G
��X�Ҧ��������ߤ�M�C*/

int main()
{
    int arr[6];
    int i,result=0;
    for (i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<6;i++)
    {
        result = result + (arr[i]*arr[i]*arr[i]);
    }
    printf("%d",result);
    printf("\n");
}
