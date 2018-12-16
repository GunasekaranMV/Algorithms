#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE  1

int N = 4; // Number of Queen
int chessBoard[4][4]; // Chessboard

int placeQueen(int chessBoard[][4], int row, int column, int dimension)
{
    if(row >= dimension)
	 return 1;

    int i;
    int result;
    for(i = column; i<dimension;i++)
	{
           if(!isAttacked(row,i,chessBoard,dimension))
            {
			chessBoard[row][i] = 1;
            result = placeQueen(chessBoard, row+1, 0, dimension);

            if(result == 1)
    		return 1;

			chessBoard[row][i] = 0;
            }
	}
	return 0;
}

int isAttacked(int row, int column,int chessBoard[][4], int dimension)
{
   return
	isAttackedFromDownRightDiagonal(row, column, chessBoard, dimension) &&
	isAttackedFromDownLeftDiagonal(row, column, chessBoard, dimension) &&
	isAttackedFromDown(row, column, chessBoard, dimension);
}
int isAttackedFromDownLeftDiagonal(int row, int column,int chessBoard[][4], int dimension)
{
   row--;
   column++;
   while((row >= 0 && column < dimension) && chessBoard[row][column] == 0)
	{
	   row--;
	   column++;
	}
  return (row >= 0 && column < dimension);
}
int isAttackedFromDownRightDiagonal(int row, int column, int chessBoard[][4], int dimension)
{
   row--;
   column--;
   while((row >=0 && column >=0) && chessBoard[row][column] == 0)
	{
	   row--;
	   column--;
	}
  return (row >= 0 && column >= dimension);
}
int isAttackedFromDown(int row, int column, int chessBoard[][4], int dimension)
{
   row--;
   while((row >= 0) && chessBoard[row][column] == 0)
	{
	   row--;
	}
  return (row >= 0);
}

int main()
{
    int i = 0, j = 0;
    placeQueen(chessBoard, 0, 0, N); //calling the functions
    for (i = 0; i<N; i++) // printing the matrix
        {
        for (j = 0; j <N ; j++)
            printf("%d ",chessBoard[i][j]);
            printf("\n");
        }

    return 0;
}
