#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "mylib/mylib.h"

int main(int argc, char *argv[]){
	
	char *c1,*c2;
	
	c1 = readline("entrez la chaine 1 : ");
	c2 = readline("entrez la chaine 2 : ");
	
	printf("%s et %s %s 2 anagrammes\n",c1,c2,anagramme(c1,c2)?"sont":"ne sont pas");
	
	printf("\n\n");
	
	printf("%s %s un palindrome\n",c1,palind(c1)?"est":"n'est pas");
	printf("%s %s un palindrome\n",c2,palind(c2)?"est":"n'est pas");
	
	free(c1);
	free(c2);
return 0;
}
