#include <stdio.h>
/*[C_MM17-��] �D�̤j���]��
���D�y�z�G
��J��ӼƦr�A��X���̪��̤j���]��
��J�����G
��J�@�ը�Ӿ�ơC
��X�����G
��X��Ʀr���̤j���]�ơC*/
int main()
{
    int a,b;
    int ans=1;
    int i=2;
    scanf("%d %d",&a,&b);
    if(a==0 || b==0)
        printf("1\n");
    else if(a==1 || b==1)
        printf("1\n");
    else
    {
        //a>=2�Mb>=2�����p
        while(a>=i && b>=i)
        {
            //�q2�}�l�� �Y��̳��㰣�N�����]��
            while(a%i==0 && b%i==0)
            {
                ans*=i;
                a/=i;
                b/=i;
            }
            //��a���]�ƩMb���]�ƳѤU�����~��䤽�]��
            i++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
