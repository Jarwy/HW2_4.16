#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int r, d, s;		//r=�C(row),d=�I(dot),s=�Ů�(space)
	
	printf("(A)\t\t(B)\t\t(C)\t\t(D)\n");

	for (r = 1; r <= 10; r++)
	{
		for (d = 1; d <= r; d++)		//�ϧ�(A)���I:�I���ƥػP�C�Ƥ@�P
		{
			printf("*");					
		}

		for (s = 1; s <= (10 - r); s++)	//�ϧ�(A)���Ů�:�Ů�ƥ�=(10-�C��)
		{
			printf(" ");
		}

		printf("\t");

		/*---------------------------------------------*/
		for (d = 1; d <= (11-r); d++)	//�ϧ�(B)���I:�I���ƥ�=(11-�C��)
		{
			printf("*");
		}

		for (s = 1; s <= (r - 1); s++)	//�ϧ�(B)���Ů�:�Ů�ƥ�=(�C��-1)
		{
			printf(" ");
		}

		printf("\t");

		/*---------------------------------------------*/
		for (s = 1; s <= (r - 1); s++) //�ϧ�(C)���Ů�:�Ů�ƥ�=(�C��-1)
		{
			printf(" ");
		}

		for (d = 1; d <= (11 - r); d++)	//�ϧ�(C)���I:�I���ƥ�=(11-�C��)
		{
			printf("*");
		}

		printf("\t");
		/*---------------------------------------------*/
		for (s = 1; s <= (10 - r); s++)	//�ϧ�(D)���Ů�:�Ů�ƥ�=(10-�C��)
		{
			printf(" ");
		}

		for (d = 1; d <= r; d++)		//�ϧ�(D)���I:�I���ƥػP�C�Ƥ@�P
		{
			printf("*");
		}
		
		printf("\n");
	}

	printf("\n");

	system("pause");
	return 0;
}