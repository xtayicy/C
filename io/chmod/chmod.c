#include <stdio.h>
#include <sys\stat.h>

/*
	 改变文件的访问方式
*/
void make_read_only(char *filename){
	int status;

	status = chmod(filename,S_IREAD);
	printf("status = %d\n",status);
	if(status){
		printf("Couldn't make %s read-only\n",filename);
	}else{
		printf("Made %s read-only\n",filename);
	}
}

void main(){
	make_read_only("NOTEXIST.FIL");
	make_read_only("MYFILE.FIL");
}