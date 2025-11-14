#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void test()
{
	SL seq_list;
	SLInit(&seq_list);
	SLPushBack(&seq_list, 10);
	SLPushBack(&seq_list, 20);
	SLPushBack(&seq_list, 30);
	SLPushBack(&seq_list, 40);
	SLPushBack(&seq_list, 50);
	/*SLPushFront(&seq_list,99);
	SLPrint(&seq_list);*/
	/*SLPopFront(&seq_list);
	SLPrint(&seq_list);*/
	SLInsert(&seq_list, 2, 288);
	SLPrint(&seq_list);
	SLErase(&seq_list, 2);
	SLPrint(&seq_list);
	int ret = SLFind(&seq_list, 10);
	printf("ret = %d\n", ret);
	//Ïú»Ù
	SLDestroy(&seq_list);
	SLPrint(&seq_list);
}

int main()
{
	test();
	return 0;
}