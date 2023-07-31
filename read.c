#include <stdio.h>
#define MAX_LINE_LENGTH 1000
int main(void)
{
	FILE *fp = fopen("ospt.csv","r");
	FILE *fr = fopen("ospt.txt","w");
	char str[MAX_LINE_LENGTH];
	char *token1;
	char *token2;
	int i;
	if(fp == NULL)
	{
		printf("error opening file!\n");
		return -1;
	}
	//DO STRTOK()
	while(fgets(str,sizeof(str),fp)!=NULL)
	{
		token1 = strtok(str,",");
		for(i = 0; i<6; i++)
		{
			token2 = strtok(NULL,",");
		}
		fprintf(stdout,"%s%s\n",token1,token2);
		fprintf(fr,"%s%s\n",token1,token2);
	}
	fclose(fp);
	fclose(fr);
	return 0;
}
