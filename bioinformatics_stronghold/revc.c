#include <stdio.h>

int main(void)
{
    FILE* fp = fopen("rosalind_revc.txt", "r");

    if (fp == NULL)
    {
	printf("File does not exist.\n");
	return 1;
    }

    char s[1000];

    while(fgets(s, 1000, fp) != NULL)
    {
	printf("%s", s);
    }

    fclose(fp);
}

void revc(const char *s)
{
    while (*s != '\0')
    {


	++s;
    }
    
}