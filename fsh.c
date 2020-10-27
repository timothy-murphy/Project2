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
    
    result1 = strcmp(str, str1); //if the user inputs “cd” then this if statement runs
    if (result1 == 0)
    {
        printf("We use the cd function");
        //this will contain the code to use the cd command
    }
    
    
    result2 = strcmp(str, str2); // if the user inputs “ls” then this if statement runs 
    if (result2 == 0)
    {
        printf("We use the ls function");
	//this will contain the code to use the ls command 
    }
    
	
}	
return 0;
}
