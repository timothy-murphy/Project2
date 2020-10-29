The main goal of project 2 was to create our own Linux shell writing in C code. Within this file we have written C code to help us create a simple shell that gives us basic commands. The commands that are implemented are: "ls", "cd", "exit". These basic Linux commands help us navigate through the terminal in between files.

Exit Function:
The "exit" function inside the Linux command line is designed to take us out of the shell that we are currently running and returns you back to the orignal prompt line. In order to do this we had to use the function strcmp. This function allows us to compare two strings. We used the simple funciton exit(0), which effectively terminates the program. 

ls function:
The "ls" function is used in the Linux command to show the list of the current directory that you are in. We have also uses the function strmcp to help us compare the varibles. To implement the ls function we used a function called execlp, which uses the systems version of ls. When the user inputts the command "ls", the program executes the execlp, with ls as the input. The program then prints out the list of the current directory. We accomplished this by using a fork(), becuase that allows the program to keep running after the execlp(ls) is called. If we didn't use the fork(), then the program would simply end and we couldn't input anything else.

cd function: 
The "cd" function is used in the Linux command line to help us move bewteen different directories. Also we hve used the strcmp command to help us compare the stirngs to move directories. Our cd function is not quite working right. We are able to print out the current working directory (cwd), but so far we are unable to change it.

strcmp:
This function is essentially the linchpin of our project. This enables us to see what the user inputted and then call the function that would execute their command. When the user inputted a string say "exit", the program would tokenize the string and then run it through strcmp, which would return a 1 or 0. If it returned 0, that means it was a match, and it would run the specified if statment. 
