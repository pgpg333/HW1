#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float km, dpl, kmpl, pd, cd,tt;
	printf("��J�H�U��ƨӺ�X�@�Ѫ����O\n");
	printf("�п�J�@��Ѫ��`���{��:");
	scanf_s("%f",&km);
	printf("�п�J�T�o�@���ɦh�֤�:");
	scanf_s("%f",&dpl);
	printf("�п�J�T�o�@���ɯ��p�h�֤���:");
	scanf_s("%f",&kmpl);
	printf("�п�J�@�Ѫ������O:");
	scanf_s("%f",&pd);
	printf("�п�J�@�Ѫ��L���O:");
	scanf_s("%f",&cd);
	tt = km*(dpl / kmpl) + pd + cd;
	printf("�z�@�Ѫ����O�� %.2f ��", tt);

	system("pause");
	return 0;

}