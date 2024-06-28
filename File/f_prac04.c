#include<stdio.h>
#define sol_Num 3
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	Soldier sols[sol_Num];
	SetInfo(sols, "file04.txt");
	Display(sols);
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < sol_Num; i++)
		{
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s+i)->hp, (s+i)->wpn.Wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
		}
		fclose(fp);
	}
	else
	{
		printf("ì«Ç›çûÇ›ÉGÉâÅ[");
		return;
	}
}
void Display(Soldier* s) 
{
	int i;
	for (i = 0; i < sol_Num; i++) 
	{
		printf("%s ëÃóÕ:%d\n", (s+i)->name, (s + i)->hp);
		printf("ïêäÌ:%s íeêî:%d çUåÇóÕ:%.2f\n", (s+i)->wpn.Wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
	}
}