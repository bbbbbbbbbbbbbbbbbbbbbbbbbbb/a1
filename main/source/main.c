#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DIGITS = 4;    //�ŧi�n�q���Ʀr����ơA�ѨϥΪ̩w�q�A��ȳ] 4 
int question[6];    //�ŧi���D�Ʀr�}�C
void generateQuestion();    //�H������ DIGITS �Ӥ��P���Ʀr int 
void guess(int your_answer[]);    //�q�Ʀr�A�ѨϥΪ̿�J�Ʀr 
int compare(int your_answer[]);    //����O�_���T  

int main(int argc, char *argv[])
{
	int your_answer[6];    //�ŧi�q���Ʀr�}�C
	int is_correct;    //��ƭȡG��O�Ҳq�Ʀr�O�_���T
	int count = 0;    //�p��q�F�X�� 
	do
	{
		printf("�п�J�n�q�X��ơH(4 �� 5 �� 6)");
		scanf_s("%d", &DIGITS);
	} while (DIGITS < 4 || DIGITS > 6);
	generateQuestion();
	printf("�п�J%d�Ӥ��P���Ʀr�A�B�Ĥ@�ӼƦr�����s�C��J 0 �h��ܵ��� ^_^\n", DIGITS);

	do
	{
		guess(your_answer);    //�q�Ʀr
		count++;
		is_correct = compare(your_answer);    //����O�_���T
	} while (is_correct == 0);    //�����T�N�~��q

	printf("���ߡI�I\n�A�q��F�I�I\n");
	printf("�A�`�@�q�F %d���I\n", count);
	system("PAUSE");
	return EXIT_SUCCESS;
}