#include <stdio.h>
/*[C_MM27-��] �p����ƶ��Ҧ���ƪ��`�M
���D�y�z�G
�ռg�@�ӵ{���A��J��Ӿ�ơA�íp����ƶ��Ҧ���ƪ��`�M�C
��J�����G
��J��Ӿ�ơC
��X�����G
��X���Ƥ����Ҧ���ƪ��`�M�C*/
int main()
{
    int a,b;
    int i,result=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        result+=i;
    printf("%d\n",result);
    return 0;
}
