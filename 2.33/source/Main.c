#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float km, dpl, kmpl, pd, cd,tt;
	printf("輸入以下資料來算出一天的車費\n");
	printf("請輸入一整天的總里程數:");
	scanf_s("%f",&km);
	printf("請輸入汽油一公升多少元:");
	scanf_s("%f",&dpl);
	printf("請輸入汽油一公升能行駛多少公里:");
	scanf_s("%f",&kmpl);
	printf("請輸入一天的停車費:");
	scanf_s("%f",&pd);
	printf("請輸入一天的過路費:");
	scanf_s("%f",&cd);
	tt = km*(dpl / kmpl) + pd + cd;
	printf("您一天的車費為 %.2f 元", tt);

	system("pause");
	return 0;

}