#include <stdio.h>

/*
	É¾³ıÎÄ¼ş
*/
void main(){
	int status;

	FILE *fp = fopen("junk.jnk","w");
	fprintf(fp,"junk");
	status = access("junk.jnk",0);
	printf("status = %d\n",status);
	if(status == 0){
		printf("File exists\n");
	}else{
		printf("File doesn't exist\n");
	}

	fclose(fp);
	
	unlink("junk.jnk");
	status = access("junk.jnk",0);
	printf("status = %d\n",status);
	if(status == 0){
		printf("File exists\n");
	}else{
		printf("File doesn't exist\n");
	}
}