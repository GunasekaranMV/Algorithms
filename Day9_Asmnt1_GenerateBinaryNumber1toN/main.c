/*
Algorithm to be implement:
|_ Create an empty Queue.
|_ Push first value inside it as 1.
|_ Now run a loop for n times and follow below mentioned steps
      |_ Dequeue an item and print the number
      |_ Append "0" in the dequeued number and enqueue it in the Queue.
      |_ Append "1" in the dequeued number and enqueue it in the Queue.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

char queue[MAX][MAX], temp[MAX];
int front = -1, rear = -1;

void enqueue(char *s)
{
     if(rear == MAX-1)
     {
         printf("Queue is FULL\n");
         return;
     }
     if(front == -1 && rear == -1)
            front = rear = 0;
     else
            rear = rear + 1;
     strcpy(queue[rear],s);
}

char *dequeue()
{
    if(front == -1)
        printf("Queue is Empty\n");
    else
    {
        strcpy(temp, queue[front]);
        if(front == rear)
            front = rear = -1;
        else
            front = front+1;
        return temp;
    }
}

void decimaltobinary()
{
 char temp2[MAX];
 strcpy(temp,dequeue());
 printf("%s\n",temp);
 strcpy(temp2,temp);
 strcat(temp,"0");
 enqueue(temp);
 strcat(temp2,"1");
 enqueue(temp2);
}

int main()
{
    int i, n;
    printf("Enter the Number:");
    scanf("%d",&n);
    char temp[]="1";
    enqueue(temp);
    for(i=1;i<=n;i++)
    decimaltobinary();
    return 0;
}
