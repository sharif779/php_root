
  #include <stdio.h>
  #include <stdlib.h>
  #include <sys/types.h>
  #include <unistd.h>
  #include <string.h>

  int main (int argc, char  **argv)
  {
     setuid (0);

     /* 
      * It is for execution command from php file
      * Author : Sharif Hossain
      * Brotecs Technologies Ltd.
      * WARNING: Only use an absolute path to the script to execute,
      *          a malicious user might fool the binary and execute
      *          arbitary commands if not.
      * if only raw command then no need to headeche. just write system then command 
     */
     
     char cmd[100] = "";
     int i;
     char *p;
     for(i=0; i < argc; i++) {
     	if(i != 0){
	   strcat(cmd, *(argv+i));
	   strcat(cmd, " ");
     	}
     }
     /*if only raw command then no need to headeche. just write system then command system("your command") or write command in char cmd.
      * no need to thes line from 18-26 no line
      * command has argumnet like andd need to concate then use those lines then pass the command
     */
     system (cmd);

     return 0;
   }
   
   

