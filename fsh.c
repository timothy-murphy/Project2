#include <stdio.h>
#include <string.h>
#include<unistd.h>

int main()
{
while (1){
    
    
    char str[100]; 
    char str1[] = "cd";
    char str2[] = "exit";
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
        int ret = chdir(str);   // Here dir equals the user's input.
        printf(getcwd(str, 100));
        //printf("chdir returned %d.\n", ret);

    }
    
    
    result2 = strcmp(str, str2); 
    if (result2 == 0)
    {
        //exit code
        exit(0);
        return (0);
        
    }
    
	
}	
return 0;
}

