#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int add, i, r;

	char ch[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char key[20];

	add = 0;
	i = 0;

	srand(time(NULL));

	while (add < 2772)
	{
		r = rand() % 6;
		key[i] = ch[r];
		add += key[i];
		i++;
	}
	r = 2772 - add;
	key[i] = r;
	printf("%s\n",  key);
	return (0);
}
