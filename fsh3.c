#include <stdio.h>
#include <string.h>
#include<unistd.h>
#include <stdlib.h>

#define BUFFER_LEN 1024

int main()
{
char str[100]; 
    char str1[] = "cd";
    char str2[] = "exit";
    char str3[] = "ls";
    int result1;
    int result2;
    int result3;
    char line[BUFFER_LEN];
    
while (1){
    
   printf("fsh>");
    	if(!fgets(line, BUFFER_LEN, stdin)){
    	break;
    	}
    	if(strcmp(line, "exit\n")==0){
    	break;
	} 
    
    
 	result1 = strcmp(str, str1); 
    if (result1 == 0)
    {
       // int ret = chdir(str);   // Here dir equals the user's input.
        printf("%s\n", getcwd(str, 100));
        chdir("..");
        printf("%s\n", getcwd(str, 100));
     //   printf("chdir returned %d.\n", ret);
     return 0;
    }
    
    
    
    result2 = strcmp(str, str2); 
    if (result2 == 0)
    {
        //exit code
        exit(0);
        return (0);
        
    }
     
    int myShell_cd(char **args)
{
	if (args[1] == NULL) 
	{
		printf("myShell: expected argument to \"cd\"\n");
	} 
	else 
	{
		if (chdir(args[1]) != 0) 
		{
			perror("fsh>: ");
		}
	}
	return 1;
}

int myShell_exit()
{
	QUIT = 1;
	return 0;
}
	int myShellLaunch(char **args)
{
	pid_t pid, wpid;
	int status;
	pid = fork();
	if (pid == 0)
	{
		// The Child Process
		if (execvp(args[0], args) == -1)
		{
			perror("fsh>: ");
		}
	exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		//Forking Error
		perror("fsh>: ");
	}
	else
	{
		// The Parent Process
	do 
	{
      wpid = waitpid(pid, &status, WUNTRACED);
    } while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return 1;
}

// Function to execute command from terminal
int execShell(char **args)
{
	int ret;
	if (args[0] == NULL)
	{
		// Empty command
		return 1;
	}
	// Loop to check for builtin functions
	for (int i=0; i< numBuiltin(); i++) // numBuiltin() returns the number of builtin functions
	{
		if(strcmp(args[0], builtin_cmd[i])==0) // Check if user function matches builtin function name
			return (*builtin_func[i])(args); // Call respective builtin function with arguments
	}
	ret = myShellLaunch(args);
	return ret;
}
    
    
  
	
}	
return 0;
}
