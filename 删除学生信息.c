#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include "sourse.h"
STU_INFOR *Dle_Infor(STU_INFOR *phead,int stuNum)
{
	STU_INFOR *ptemp,*pdel;
	ptemp = phead;
	while (ptemp->next->next!=NULL && ptemp->next->stuNum!=stuNum)     //查找要删除的学生信息所在链表中的位置
		ptemp = ptemp->next;
	if (ptemp->next->stuNum == stuNum)                                     //判断是否是要删除的位置
	{
		pdel = ptemp->next;
		ptemp->next = pdel->next;
		free(pdel);
		printf("恭喜你，删除成功\n");
	}
	else
	{
		printf("没有你要查找的内容！\n");
		printf("不好意思，删除失败！\n");
	}
	return phead;
}

