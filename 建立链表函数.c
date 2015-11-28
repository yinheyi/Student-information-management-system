#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "sourse.h"
STU_INFOR *Setup_Infor(void)
{
STU_INFOR *phead,*pnew,*ptail;
phead = (STU_INFOR*)malloc( sizeof(STU_INFOR) );      //申请一个动态存储空间；
if (NULL==phead)                                   //判断有否申请成功；
{
	printf("申请一个动态存储空间失败\n");
	exit(-1);
}
pnew = ptail = phead;
phead->next = NULL;
return phead;
}




