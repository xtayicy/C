#include <assert.h>
#include <stdio.h>

/*
	����һ������������ʹ������ֹ
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