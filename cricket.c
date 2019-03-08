#include<stdio.h>
void main()
{
	int wicket=0,score=0,player[2]={1,2},k=3,ball=0,i,j,b,s,temp;
	char str1,str2;

	printf("total number of balls : ");
	
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		printf("enter score for ball %d : ",i+1);
		scanf("%d",&s);
		switch(s)
		{
			case -1:
			wicket++;
			player[0]=k;
			k++;
			ball++;
			if(ball%6==0)
			{
				temp=player[0];
				player[0]=player[1];
				player[1]=temp;

			}
			break;
			case 1:
			score=score+1;
			ball++;
			temp=player[0];
			player[0]=player[1];
			player[1]=temp;
			if(ball%6==0)
			{
				temp=player[0];
				player[0]=player[1];
				player[1]=temp;

			}
			break;
			case 2:
			score=score+2;
			ball++;
			if(ball%6==0)
			{
				temp=player[0];
				player[0]=player[1];
				player[1]=temp;

			}
			break;
			case 3:
			score=score+3;
			ball++;
			temp=player[0];
			player[0]=player[1];
			player[1]=temp;
			if(ball%6==0)
			{
				temp=player[0];
				player[0]=player[1];
				player[1]=temp;

			}
			break;
			case 4:score=score+4;
			ball++;
			if(ball%6==0)
			{
				temp=player[0];
				player[0]=player[1];
				player[1]=temp;

			}
			break;
			case 6:score=score+6;
			ball++;
			if(ball%6==0)
			{
				temp=player[0];
				player[0]=player[1];
				player[1]=temp;

			}
			break;
			case 0:score = score+0;
			ball++;
			if(ball%6==0)
			{
				temp=player[0];
				player[0]=player[1];
				player[1]=temp;

			}
			break;
			default:printf("invalied score\n");
			break;
		}

	}
	
	if(wicket == 10)
	{
	    printf("    BATTING TEAM :  ");
	    printf("SCORE : %d - %d \n",score,wicket);
	    printf("ALL OUT");
	    printf("7 is on offstrike\n");
	}
	else
	{
	    printf("    BATTING TEAM\n");
	    printf("SCORE : %d - %d",score,wicket);
	    printf("\nplayer %d on strike\nplayer %d is on offstrike\n",player[0],player[1]);
	}
	printf("    BOWLING TEAM\n");
	printf("wickets taken: %d\n",wicket);
	
	
}