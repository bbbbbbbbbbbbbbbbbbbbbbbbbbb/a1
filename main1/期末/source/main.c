#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DIGITS = 4;    
int question[6];   
void generateQuestion();    
void guess(int your_answer[]);   
int compare(int your_answer[]);  

int main(int argc, char *argv[])
{
	int your_answer[6];    
	int is_correct;   
	int count = 0;   
	do
	{
		printf( "�п�J�n�q�X��ơH(4 �� 5 �� 6)");
		scanf_s("%d",&DIGITS);
	} while (DIGITS < 4 || DIGITS > 6);
	generateQuestion();
	printf("�п�J%d�Ӥ��P���Ʀr�A�B�Ĥ@�ӼƦr�����s�C��J 0 �h��ܵ��� ^_^\n",DIGITS);

	do
	{
		guess(your_answer);    
		count++;
		is_correct = compare(your_answer);    
	} while (is_correct == 0);    

	printf("���ߡI�I\n�A�q��F�I�I\n");
	printf("�A�`�@�q�F %d���I\n",count);
	system("PAUSE");
	return EXIT_SUCCESS;
}

