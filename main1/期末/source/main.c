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
		printf( "請輸入要猜幾位數？(4 或 5 或 6)");
		scanf_s("%d",&DIGITS);
	} while (DIGITS < 4 || DIGITS > 6);
	generateQuestion();
	printf("請輸入%d個不同的數字，且第一個數字不為零。輸入 0 則顯示答案 ^_^\n",DIGITS);

	do
	{
		guess(your_answer);    
		count++;
		is_correct = compare(your_answer);    
	} while (is_correct == 0);    

	printf("恭喜！！\n你猜對了！！\n");
	printf("你總共猜了 %d次！\n",count);
	system("PAUSE");
	return EXIT_SUCCESS;
}

