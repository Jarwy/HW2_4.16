#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int r, d, s;		//r=(row),d=翴(dot),s=(space)
	
	printf("(A)\t\t(B)\t\t(C)\t\t(D)\n");

	for (r = 1; r <= 10; r++)
	{
		for (d = 1; d <= r; d++)		//瓜(A)翴:翴计ヘ籔计璓
		{
			printf("*");					
		}

		for (s = 1; s <= (10 - r); s++)	//瓜(A):计ヘ=(10-计)
		{
			printf(" ");
		}

		printf("\t");

		/*---------------------------------------------*/
		for (d = 1; d <= (11-r); d++)	//瓜(B)翴:翴计ヘ=(11-计)
		{
			printf("*");
		}

		for (s = 1; s <= (r - 1); s++)	//瓜(B):计ヘ=(计-1)
		{
			printf(" ");
		}

		printf("\t");

		/*---------------------------------------------*/
		for (s = 1; s <= (r - 1); s++) //瓜(C):计ヘ=(计-1)
		{
			printf(" ");
		}

		for (d = 1; d <= (11 - r); d++)	//瓜(C)翴:翴计ヘ=(11-计)
		{
			printf("*");
		}

		printf("\t");
		/*---------------------------------------------*/
		for (s = 1; s <= (10 - r); s++)	//瓜(D):计ヘ=(10-计)
		{
			printf(" ");
		}

		for (d = 1; d <= r; d++)		//瓜(D)翴:翴计ヘ籔计璓
		{
			printf("*");
		}
		
		printf("\n");
	}

	printf("\n");

	system("pause");
	return 0;
}