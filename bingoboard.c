#include "bingoboard.h"

int bingoBoard[N_SIZE][N_SIZE];

static int bingoBoard[N_SIZE][N_SIZE];
static int bingoStatus[N_SIZE*N_SIZE];

void bingo_init(void);
{
	int i,j,cnt=1;
	for (i=0;i<N_SIZE;i++)
	   for(j=0;j<N_SIZE;j++)
	   {
	   	   if (cnt==15)
	   	   {
	   	   	   bingoBoard[i][j]==BINGONUM_HOLE;
	   	   	   numberStatus[cnt-1]=N_SIZE*i+j;
	   	   }
	   	   else
	   	   {
	   	   	   numberStatus[]=i*N_SIZE+j;
	   	   	   bingoBoard[i][j]=cnt++;
			}
	   }
}

void bingo_print(void);
{
	printf("===========================================================================================\n");
	for (i=0; i<N_SIZE; i++){
		for(j=0;j<N_SIZE; j++)
		{
		if (bingoBoard[i][j]==BINGONUM_HOLE)
		printf("X\t");
	  else
	  printf("%i\t",bingoboard[i])
	  	printf("%i\t", bingoBoard[i][j]);
	  }
	  printf("\n");
}

}
bingo_intputNum(int sel)
{
	
}

int bingo_coutnCompletedLime(void)
{
	
}
