#include <stdio.h>
#include <string.h>

int main()
{
while (1){
    
    
    char str[100]; 
    char str1[] = "cd";
    char str2[] = "ls";
    int result1;
    int result2;
    
    gets(str); 
	char delim[] = " "; 
	char *ptr = strtok(str, delim);
	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}
    printf("\n");
    
    result1 = strcmp(str, str1); 
    if (result1 == 0)
    {
        printf("We use the cd function");
    }
    
    
    result2 = strcmp(str, str2); 
    if (result2 == 0)
    {
        printf("We use the ls function");
    }
    
	
}	
return 0;
}
