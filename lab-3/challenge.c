#include <stdio.h>

int main()
{

char grade_cal, grade_phy, grade_com;
int cal, phy, com;
float grade_num_cal, grade_num_phy, grade_num_com, avg;


printf("Calculus score: ");
scanf("%d", &cal);

printf("Physic score: ");
scanf("%d", &phy);

printf("Compro score: ");
scanf("%d", &com);

if (cal,phy,com > 100)
{
    printf("not in range");
}

avg = (cal + phy + com)/3.0;

if (cal >= 80)
{
        grade_cal = 'A';
        grade_num_cal = 4.0;
} 
    else if (cal >= 70 && cal < 80)

    {
        grade_cal = 'B';
        grade_num_cal = 3.0;
    }
    else if (cal >= 60 && cal < 70)
    {
        grade_cal = 'C';
        grade_num_cal = 2.0;
    }
    else if (cal >= 50 && cal < 60)
    {
        grade_cal = 'D';
        grade_num_cal = 1.0;
    }
    else if (cal < 50)
    {
        grade_cal = 'F';
        grade_num_cal = 0.0;
    }

if (phy >= 80)
{
        grade_phy = 'A';
        grade_num_phy = 4.0;
} 
    else if (phy >= 70 && phy < 80)

    {
        grade_phy = 'B';
        grade_num_phy = 3.0;
    }
    else if (phy >= 60 && phy < 70)
    {
        grade_phy = 'C';
        grade_num_phy = 2.0;
    }
    else if (phy >= 50 && phy < 60)
    {
        grade_phy = 'D';
        grade_num_phy = 1.0;
    }
    else if (phy < 50)
    {
        grade_phy = 'F';
        grade_num_phy = 0.0;
    }
    
    if (com >= 80)
{
        grade_com = 'A';
        grade_num_com = 4.0;
} 
    else if (com >= 70 && com < 80)

    {
        grade_com = 'B';
        grade_num_com = 3.0;
    }
    else if (com >= 60 && com < 70)
    {
        grade_com = 'C';
        grade_num_com = 2.0;
    }
    else if (com >= 50 && com < 60)
    {
        grade_com = 'D';
        grade_num_com = 1.0;
    }
    else if (com < 50)
    {
        grade_com = 'F';
        grade_num_com = 0.0;
    }

printf("Subject     Score     Grade     Grade\n--------------------------------------\n");
printf("Cal         %d        %c        %.1f\n",cal, grade_cal, grade_num_cal);
printf("Physics         %d        %c         %.1f\n",phy, grade_phy, grade_num_phy);
printf("compro         %d        %c         %.1f\n\n",com,grade_com,grade_num_com);
printf("GPA: %f\n", avg);
return 0;
}

