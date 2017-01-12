int compare(int your_answer[])
{
	int a_count = 0, b_count = 0, i, j;

	for (i = 0; i < DIGITS; i++)
	{
		if (your_answer[i] == question[i])
		{
			a_count++;
		}
		else
		{
			for (j = 0; j < DIGITS; j++)
			{
				if (your_answer[i] == question[j] && j != i)
				{
					b_count++;
					break;
				}
			}
		}
	}

	printf("%dA%dB\n",a_count,b_count);
	if (a_count == DIGITS)
		return 1;
	else
	{
		printf("請再猜一次 ^_^\n");
		return 0;
	}