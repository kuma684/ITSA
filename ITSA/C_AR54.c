#include <stdio.h>
/*[C_AR54-��] �p�g�r���p��
���D�y�z�G
�м��g�@�ӵ{���A�i�H�ھڨϥΪ̿�J���r���A�έp a-z ���X�{���ơC
��J�����G
�ϥΪ̿�J�@�Ӿ�ƪ�ܦ@���X�Ӧr���A���ۨϥΪ̷|��J�Ӿ�ƭӤp�g�r�� (a-z)  �C
��X�����G
�ھڨϥΪ̿�J���r���A�ھڦr�����Ƨ� (a-z) ��ܦU�r�����X�{���� (0 ������� ) �C*/
int main()
{
    int n=0,i=0;
    char arr[1000]={};
    int count[26]={};
    int num;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %c",&arr[i]);
        // a=97 ~ z=122 ASCII
        count[arr[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
            printf("%c %d\n",i+97,count[i]);
    }
    return 0;
}
