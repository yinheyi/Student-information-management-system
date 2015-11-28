typedef struct stu_infor STU_INFOR;
struct stu_infor {
	int  stuNum;
	char stuName[20];
	char stuSex[10];
	char stuBorn[30];
	float  stuScore;
	struct stu_infor *next;
};
void ScreenDisplay(void);                                          // 界面函数；
STU_INFOR *Setup_Infor(void);                                      // 建立链表函数；
STU_INFOR *Dle_Infor(STU_INFOR *head,int stuNum);                  // 删除学生信息函数；
STU_INFOR *Mod_Infor(STU_INFOR *head,STU_INFOR *modify);           // 修改学生信息函数；
STU_INFOR *Input_Infor(STU_INFOR *phead,STU_INFOR *newstruct);     // 录入学生信息函数；
void Check_Infor(STU_INFOR *phead,int stuNum);                     // 查看学生信息函数；
void Display_Infor(STU_INFOR *phead);                              // 显示所有信息函数；
