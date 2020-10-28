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
    char* argv[100];
    char* path= "/bin/";
    char progpath[20];
    int argc;
    
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
    result3 = strcmp(str, str3);
    if (result3 ==0){
	pid_t pid;
	pid = fork();
	if(pid<0){
	printf(stderr, "fork failed");
   	return 1;    }
	else if(pid == 0){  
   		execlp("bin/ls", "ls", NULL);
	}
	else{
   		wait(NULL);
   		printf("child complete\n");
   	     }
return 0;
}
	}	
}
return 0;
}
