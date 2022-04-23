#include <stdio.h>
#include <stdlib.h>

void scommand(char *a){
	system(a);
}
void sline(char *a){
	char c[2080];
	FILE *f1;
	f1=fopen(a,"r+");
	if(f1==NULL)exit(1);
		while(1){
			fgets(c,2070,f1);
			if (feof(f1)) break;
			scommand(c);
		}
	fclose(f1);
}
int main(int argc,char *argv[]){
	if (argc<2)exit(1);
	sline(argv[1]);
}
