#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DIGITS = 4;    //�ŧi�n�q���Ʀr����ơA�ѨϥΪ̩w�q�A��ȳ] 4 
int question[6];    //�ŧi���D�Ʀr�}�C
void generateQuestion();    //�H������ DIGITS �Ӥ��P���Ʀr int 
void guess(int your_answer[]);    //�q�Ʀr�A�ѨϥΪ̿�J�Ʀr 
int compare(int your_answer[]);    //����O�_���T  

void guess(int your_answer[])
{
	int value, i;    //�ŧi����ܼ� 
	scanf_s("%d", &value);    //��J�Ʀr 
	if (value == 0)    //��Ʀr�� 0 �ɡA�L�X���� 
	{
		for (i = 0; i<DIGITS; i++)
		{
			printf("%d", question[i]);
			your_answer[i] = question[i];
		}
		printf(" endl");
	}
	else     /* ���o�Ʀr */
	{
		for (i = DIGITS; i >= 0; i--)
		{
			your_answer[i] = value % 10;
			value = value / 10;
		}
	}
}