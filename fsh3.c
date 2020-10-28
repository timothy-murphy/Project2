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
        int ret = chdir(str);   // Here dir equals the user's input.
        printf("%s", getcwd(str, 100));
        chdir(str);
        printf("%s", getcwd(str, 100));
     //   printf("chdir returned %d.\n", ret);
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
    char *file_name = "ls";
    char *arg1 = "-a";
    char *arg2 = "-s";
    execlp(file_name, file_name, arg1, arg2, NULL);
    //execlp(str, str, (char *)NULL);
	
}	
}
return 0;
}
