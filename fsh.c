#include <stdio.h>
#include <string.h>

int main()
{
    
    char str[100]; //the string that the user inputs. This is the length. I chose 100 as an arbitrary number
    gets(str); //this is essentially where the user inputs the string
    
	char delim[] = " "; //It defines the spaces between the words. It can be "-"" or  " "
	
	char *ptr = strtok(str, delim);

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}
    printf("\n");

	return 0;
	


}
