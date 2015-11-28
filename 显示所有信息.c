#include <stdio.h>
#include "sourse.h"
void Display_Infor(STU_INFOR *phead)
{
	STU_INFOR *ptemp;
	if (phead->next == NULL)               // 空链表；
		printf("对不起，没有内容\n");
	else
	{
    ptemp = phead->next;
	printf("\t学号\t姓名\t性别\t出生日期\t成绩\n");
	while(ptemp->next != NULL)
	{
		printf("\t%d\t%s\t%s\t%s\t%.1f\n",ptemp->stuNum,ptemp->stuName,ptemp->stuSex,ptemp->stuBorn ,ptemp->stuScore);
		ptemp = ptemp->next;
	}
	printf("\t%d\t%s\t%s\t%s\t%.1f\n",ptemp->stuNum,ptemp->stuName,ptemp->stuSex,ptemp->stuBorn ,ptemp->stuScore);
	}
}
