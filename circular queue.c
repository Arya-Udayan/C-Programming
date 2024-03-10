#include<stdio.h>
#define MAX 20
int queue[MAX],front=-1,rear=-1;
void enqueue(int e)
{
	if((rear+1)%MAX==front)
	{
		printf("full");
		return;
	}
	if(front==-1)
	{
		front=rear=0;
		queue[rear]=e;
	}
	else{
		rear=(rear+1)%MAX;
		queue[rear]=e;
	}
}
void dequeue()
{  
    int n;
	if(front==-1)
	{
		printf("empty");
		return;
	}

		if(front==rear)
		{
			front=rear=-1;	
		}
		else
		{
			printf("\nDequeqed element is %d ",queue[front]);
			front=(front+1)%MAX;
		}
}
void disp()
{
    int i = front;
    if (front == -1)
    {
        printf("empty");
    }
    else
    {
        printf("\nQueue is :");
        do
        {
            printf("%d\t", queue[i]);
            i = (i + 1) % MAX;
        } while (i != (rear + 1) % MAX);
    }
}

int main()
{
	enqueue(10);
	enqueue(40);
	enqueue(30);
	disp();
	dequeue();
	disp();
	return 0;
}
