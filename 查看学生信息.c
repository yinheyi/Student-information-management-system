#include <stdio.h>
#include "sourse.h"
void Check_Infor(STU_INFOR *phead,int stuNum)
{
	STU_INFOR *ptemp;
	ptemp = phead->next;
	while  (ptemp->next!=NULL && ptemp->stuNum!=stuNum)          //查找学生信息所在链表中的位置；
		ptemp = ptemp->next;
	if( ptemp->stuNum == stuNum)                                 //判断学生信息所在链表中的位置；
	{
		printf("\t学号\t姓名\t性别\t出生日期\t成绩\n");
		printf("\t%d\t%s\t%s\t%s\t%.1f\n",ptemp->stuNum,ptemp->stuName,ptemp->stuSex,ptemp->stuBorn ,ptemp->stuScore);
	}
	else
	printf("对不起，没有你要查找的信息！\n");
}
