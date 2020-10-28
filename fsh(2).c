#include <stdio.h>
#include <string.h>
#include<unistd.h>

int main()
{
while (1){
    
    
    char str[100]; 
    char str1[] = "cd";
    char str2[] = "exit";
    char str3[] = "ls";
    int result1;
    int result2;
    int result3;
    
    gets(str); 
	char delim[] = " "; 
	char *ptr = strtok(str, delim);
	while(ptr != NULL)
	{
		//printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}
    printf("\n");
    

    result1 = strcmp(str, str1); 
    if (result1 == 0)
    {
        int ret = chdir(str);   // Here dir equals the user's input.
        printf(getcwd(str, 100));
        printf("chdir returned %d.\n", ret);
        
    }
    
    
    result2 = strcmp(str, str2); 
    if (result2 == 0)
    {
        //exit code
        exit(0);
        return (0);
        
    }
    
   result3 = strcmp(str, str3); 
    if (result3 == 0)
   {
        fork();
        //chek return value of fork 
        // if 0 it meanss you are inside chile process 
            //you need to exit the child 
            // control then goes back to parent process 
        //else you are inside parent 
                //wait for the child to finish  
                
        //you try to execute it and it will give you message that it doesn't exist
        //  //c library function which calls exec system call
        execlp(str, str, (char *)NULL); //if i call ls then it does the ls commmand
        //we have to figure out the ls-al system call 
   }
    
	
}	
return 0;
}
