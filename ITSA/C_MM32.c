#include <stdio.h>
/*[C_MM32-��] Armstrong��
���D�y�z�G
�ҿ� " Armstrong�� " �O���@�ӤT��ƪ���ơA��U��Ʀr���ߤ�M����Ӽƥ����C
�Ҧp�G 153 �O�@��  Armstrong�ơA�]�� 153 =1 3 + 53 + 33 �C
�ռ��g�@�{���A�P�_�O�_��  Armstrong�ơC
��J�����G
��J�@�ӤT��ƥ���ơC
��X�����G
�O ���i�����ƿ�X Yes �A���O ���i�����ƿ�X No ���T���C*/
int main()
{
    int input;
    int hundred,ten,digit;
    scanf("%d",&input);
    hundred=input/100;
    ten=(input-hundred*100)/10;
    digit=input%10;
    if(input==(hundred*hundred*hundred+ten*ten*ten+digit*digit*digit))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
