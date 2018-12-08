#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
bdraw();
wcon(int pn);
int b[6][6]={{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};

main()
{
	int i,j,k;
	bdraw();
	for (i=1; i<=36; i++)
    {
    	
     	if (i%2!=0)
	    {
	    	printf("Player 1 Turn: Select row col");
		    scanf("%d %d",&j, &k);
		    b[j][k]=1;
	     	bdraw();
		    wcon(1);
      	}
	    else
	    {
		    printf("Player 2 Turn: Select row col");
		    scanf("%d %d",&j, &k);
		    b[j][k]=2;
  		   	bdraw();
		    wcon(2);
	    }
	}
    printf("Match Draw: Try next time");	
}
bdraw()
{
	printf("\n\n\n\n");
	printf("%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\t%d\t%d\n",b[0][0], b[0][1], b[0][2], b[0][3], b[0][4], b[0][5],b[1][0], b[1][1], b[1][2], b[1][3], b[1][4], b[1][5],b[2][0], b[2][1], b[2][2], b[2][3], b[2][4], b[2][5], b[3][0], b[3][1], b[3][2], b[3][3], b[3][4], b[3][5], b[4][0], b[4][1], b[4][2], b[4][3], b[4][4], b[4][5], b[5][0], b[5][1], b[5][2], b[5][3], b[5][4], b[5][5]);
	printf("\n\n\n\n");
	
}
wcon(int pn)
{
	if (b[0][0]==pn && b[1][0]==pn && b[2][0]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][0]==pn && b[2][0]==pn && b[3][0]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][0]==pn && b[3][0]==pn && b[4][0]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][0]==pn && b[4][0]==pn && b[5][0]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][1]==pn && b[1][1]==pn && b[2][1]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][1]==pn && b[2][1]==pn && b[3][1]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][1]==pn && b[3][1]==pn && b[4][1]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
		else if (b[3][1]==pn && b[4][1]==pn && b[5][1]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][2]==pn && b[1][2]==pn && b[2][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][2]==pn && b[2][2]==pn && b[3][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][2]==pn && b[3][2]==pn && b[4][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][2]==pn && b[4][2]==pn && b[5][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][3]==pn && b[1][3]==pn && b[2][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][3]==pn && b[2][3]==pn && b[3][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][3]==pn && b[3][3]==pn && b[4][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][3]==pn && b[4][3]==pn && b[5][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][4]==pn && b[1][4]==pn && b[2][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][4]==pn && b[2][4]==pn && b[3][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][4]==pn && b[3][4]==pn && b[4][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][4]==pn && b[4][4]==pn && b[5][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][5]==pn && b[1][5]==pn && b[2][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][5]==pn && b[2][5]==pn && b[3][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][5]==pn && b[3][5]==pn && b[4][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][5]==pn && b[4][5]==pn && b[5][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][0]==pn && b[0][1]==pn && b[0][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][1]==pn && b[0][2]==pn && b[0][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][2]==pn && b[0][3]==pn && b[0][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[0][3]==pn && b[0][4]==pn && b[0][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][0]==pn && b[1][1]==pn && b[1][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][1]==pn && b[1][2]==pn && b[1][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][2]==pn && b[1][3]==pn && b[1][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[1][3]==pn && b[1][4]==pn && b[1][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][0]==pn && b[2][1]==pn && b[2][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][1]==pn && b[2][2]==pn && b[2][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][2]==pn && b[2][3]==pn && b[2][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][3]==pn && b[2][4]==pn && b[2][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][0]==pn && b[3][1]==pn && b[3][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][1]==pn && b[3][2]==pn && b[3][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][2]==pn && b[3][3]==pn && b[3][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][3]==pn && b[3][4]==pn && b[3][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][0]==pn && b[4][1]==pn && b[4][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][1]==pn && b[4][2]==pn && b[4][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][2]==pn && b[4][3]==pn && b[4][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][3]==pn && b[4][4]==pn && b[4][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][0]==pn && b[5][1]==pn && b[5][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][1]==pn && b[5][2]==pn && b[5][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][2]==pn && b[5][3]==pn && b[5][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][3]==pn && b[5][4]==pn && b[5][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][3]==pn && b[4][4]==pn && b[3][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][2]==pn && b[4][3]==pn && b[3][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][1]==pn && b[4][2]==pn && b[3][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][0]==pn && b[4][1]==pn && b[3][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][0]==pn && b[3][1]==pn && b[2][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][0]==pn && b[2][1]==pn && b[1][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][0]==pn && b[1][1]==pn && b[0][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][3]==pn && b[3][4]==pn && b[2][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][2]==pn && b[3][3]==pn && b[2][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][1]==pn && b[3][2]==pn && b[2][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][1]==pn && b[2][2]==pn && b[1][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][1]==pn && b[1][2]==pn && b[0][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][3]==pn && b[2][4]==pn && b[1][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][2]==pn && b[2][3]==pn && b[1][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
		else if (b[2][2]==pn && b[1][3]==pn && b[0][4]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][3]==pn && b[1][4]==pn && b[0][5]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][2]==pn && b[4][1]==pn && b[3][0]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][3]==pn && b[4][2]==pn && b[3][1]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][4]==pn && b[4][3]==pn && b[3][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[5][5]==pn && b[4][4]==pn && b[3][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][5]==pn && b[3][4]==pn && b[2][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][5]==pn && b[2][4]==pn && b[1][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][5]==pn && b[1][4]==pn && b[0][3]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][2]==pn && b[3][1]==pn && b[2][0]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[4][3]==pn && b[3][2]==pn && b[2][1]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
    }
	else if (b[4][4]==pn && b[3][3]==pn && b[2][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][4]==pn && b[2][3]==pn && b[1][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][4]==pn && b[1][3]==pn && b[0][2]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][2]==pn && b[2][1]==pn && b[1][0]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[3][3]==pn && b[2][2]==pn && b[1][1]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][3]==pn && b[1][2]==pn && b[0][1]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	else if (b[2][2]==pn && b[1][1]==pn && b[0][0]==pn)
	{
		printf("\nPlayer %d Won: ",pn);
		getch();
		exit(0);
	}
	
}
