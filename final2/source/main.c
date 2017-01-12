#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DIGITS = 4;    //璶瞦计计パㄏノ﹚竡砞 4 
int question[6];    //拜肈计皚
void generateQuestion();    //繦诀玻ネ DIGITS ぃ计 int 
void guess(int your_answer[]);    //瞦计パㄏノ块计 
int compare(int your_answer[]);    //ゑ耕琌タ絋  

void guess(int your_answer[])
{
	int value, i;    //俱计跑计 
	scanf_s("%d", &value);    //块计 
	if (value == 0)    //讽计 0 氮 
	{
		for (i = 0; i<DIGITS; i++)
		{
			printf("%d", question[i]);
			your_answer[i] = question[i];
		}
		printf(" endl");
	}
	else     /* 眔计 */
	{
		for (i = DIGITS; i >= 0; i--)
		{
			your_answer[i] = value % 10;
			value = value / 10;
		}
	}
}