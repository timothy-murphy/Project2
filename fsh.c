#include <stdio.h>
#include <string.h>

int main()
{
    
    char str[100]; 
    char str1[] = "cd";
    int result;
    
    gets(str); 
	char delim[] = " "; 
	char *ptr = strtok(str, delim);
	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}
    printf("\n");
    
    result = strcmp(str, str1); 
    if (result == 0)
    {
        printf("We us the cd function");
    }
    
	return 0;
	
}
