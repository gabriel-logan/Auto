#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   printf("\nSYNOPSIS: This script executes the git add, git commit, and git push commands. \n\n");
   printf("DESCRIPTION: The script accepts two commit messages as parameters. The first message is mandatory and the second is optional. \n\n");

   // Check if the first commit message is provided
   if (argc < 2)
   {
      printf("The first commit message. This parameter is mandatory. \n\n");

      printf("The first commit message prefix must be: feat, fix, refactor, docs, style, test, chore, perf, revert or update. \n\n");

      printf("The second commit message. This parameter is optional. \n\n");

      printf("Usage: ./gitpush \"chore: First commit message\" \"Second commit message\"\n\n");
      return 1;
   }

   char *message1 = argv[1];
   char *message2 = argc > 2 ? argv[2] : NULL;

   // Executes git add .
   system("git add .");

   // Executes git commit with the provided messages
   if (message2)
   {
      char command[256];
      sprintf(command, "git commit -m \"%s\" -m \"%s\" \n", message1, message2);
      system(command);
   }
   else
   {
      char command[256];
      sprintf(command, "git commit -m \"%s\" \n", message1);
      system(command);
   }

   // Executes git push
   system("git push");

   return 0;
}
