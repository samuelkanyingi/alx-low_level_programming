#include "main.h"
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool isNumeric(char *str)
{
	while (*str)
	{
		if(!isdigit(*str))
			return false;
		str++;
	}
		return true;
}
void product(char *num1, char *num2)
{
	char c[200];
	sprintf(c,"echo 'scale=0; %s * %s' | bc", num1, num2);
	FILE *fp = popen(,"r");
	if (fp == NULL){
		printf("error whil erunning bc\n");
		exit(1);
	}
	char result[200];
	if(fgets(results,sizeof(result),fp)==NULL){
		printf("error");
		pclose(fp);
		exit(1);
	}
	pclose(fp);
	printf("%s", result);
}
int main(int argc, char *argv[])
{
	if( argc != 3)
	{
		printf("error\n");
		return (98);
	}

