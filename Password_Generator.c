#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

#define MIN '!'
#define MAX '}'


void string_gen(int length)
{
	int counter = 0;
	char randChar = 0;
	int randNum = 0;
	srand(time(NULL));

	for (counter = 0; counter < length; counter++)
		{
			randNum = MIN + rand() / (RAND_MAX / (MAX - MIN) + 1);
			randChar = (char) randNum;
			
			printf ("%c", randChar);
		}
}

int main()
{
	printf("-------------------------WELCOME IN PASSWORD GENERATOR-------------------------\n");
	int length = 0;

	printf("Enter password length: ");
	scanf("%d", &length);

	if(length)
	{
		string_gen(length);	
	}
	else
	{
		printf("Error: non-digit character");
	}
	printf("\n");
	return 0;
}
