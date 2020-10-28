The main goal of project 2 was to create our own Linux shell writing in C code. Within this file we have written C code to help us create a simple shell that gives us basic commands. The commands that are implemented are: "ls", "cd", "exit". These basic Linux commands help us navigate through the terminal in between files.

Exit Function:
The "exit" function inside the Linux command line is designed to take us out of the shell that we are currently running and returns you back to the orignal prompt line. In order to do this we had to use the function strcmp. This function allows us to compare two strings. 

ls function:
The "ls" function is used in the Linux command to show the list of the current directory that you are in. We have also uses the function strmcp to help us compare the varibles. 

cd function: 
The "cd" function is used in the Linux command line to help us move bewteen different directories. Also we hve used the strcmp command to help us compare the stirngs to move directories. 

strcmp:
This function is used a lot throughout our project and for for specific purpose. When the user types in one of the following command it is linked to a str.

ex. char str1[] = "cd";

When you call one of the str it will compare with the other strings in the strcmp:

ex. int strcmp(const char *s1, const char *s2);

//////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAX 1024
#define DELIMS " \t\r\n"

int main(int argc, char *argv[]) {
char *cmd;
char cmd_line[MAX];

while (1) {
printf("$");
if (!fgets(cmd_line, MAX, stdin)) break;
argv[0] = cmd_line;

if ((cmd = strtok(cmd_line, DELIMS))) { //exicution of command
errno = 0;
if(fork() == 0) {
if (strcmp(cmd, "cd") == 0) {
char *arg = strtok(0, DELIMS);
if (!arg)
fprintf(stderr, "cd missing argument.\n");
else
chdir(arg);
} else if (strcmp(cmd, "exit") == 0) { //if exit break loop and come out
exit(0); //exit fork
break;

}
else {
execvp(argv[0],argv); //exicute command
}
exit(0); //exit child

}
else
{
wait(0); //wait until child complite it exicution
}

if (errno) //if there is error print command faild
perror("Command failed");
}
}

return 0;
}

