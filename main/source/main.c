#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DIGITS = 4;    //宣告要猜的數字的位數，由使用者定義，初值設 4 
int question[6];    //宣告問題數字陣列
void generateQuestion();    //隨機產生 DIGITS 個不同的數字 int 
void guess(int your_answer[]);    //猜數字，由使用者輸入數字 
int compare(int your_answer[]);    //比較是否正確  

int main(int argc, char *argv[])
{
	int your_answer[6];    //宣告猜測數字陣列
	int is_correct;    //整數值：辨別所猜數字是否正確
	int count = 0;    //計算猜了幾次 
	do
	{
		printf("請輸入要猜幾位數？(4 或 5 或 6)");
		scanf_s("%d", &DIGITS);
	} while (DIGITS < 4 || DIGITS > 6);
	generateQuestion();
	printf("請輸入%d個不同的數字，且第一個數字不為零。輸入 0 則顯示答案 ^_^\n", DIGITS);

	do
	{
		guess(your_answer);    //猜數字
		count++;
		is_correct = compare(your_answer);    //比較是否正確
	} while (is_correct == 0);    //不正確就繼續猜

	printf("恭喜！！\n你猜對了！！\n");
	printf("你總共猜了 %d次！\n", count);
	system("PAUSE");
	return EXIT_SUCCESS;
}