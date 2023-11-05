#include <assert.h>
#include <stdio.h>

/*
	测试一个条件并可能使程序终止
*/
struct ITEM
{
	int key;
	int value;
};

void addItem(struct ITEM *itemprt){
	assert(itemprt != NULL);
}

void main(){
	addItem(NULL);
	
}