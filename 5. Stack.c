/*
    WACP to implement a Static Queue. Create the menu and functions for "Push", "Pop", "Peek" and "Display".
    (Try to use 'swicth-case' method)
	    https://www.edureka.co/blog/queue-in-c/
	    https://www.youtube.com/watch?v=YqrFeU90Coo
*/

#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20

void push();    
void pop();
void display();

int queue[MAX_SIZE];
int rear = -1;
int front = -1;

void main(){
    int choice;
    while(1){
        printf("\n\n------------ Menu ------------\n");
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        printf("\n");

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();   
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("Invlaid Choice\n");
        }
    }
}

//Function to Push/Enqueue.
void push(){
    int item;
    if(rear == (MAX_SIZE - 1))                    //Condition for Overflow ,i.e, Array is Full.
        printf("Queue Overflow!\n");
    else if((front == -1) && (rear == -1))          //Condition where Queue was empty.
        front = 0;
    printf("Inset the element in queue : ");
    scanf("%d", &item);
    rear++;
    queue[rear] = item;
    printf("Element successfully entered!\n");
}

//Function to Pop/Dequeue.
void pop(){  
    if(front == -1 || front > rear){           //Condition for underflow, i.e, Array is empty.
        printf("Queue Underflow!\n");
        return;
    }
    printf("Element deleted from queue is : %d\n", queue[front]);
    if(front == rear){
        front = rear = -1;
        printf("*%d*",front);
    }
    else
        front++;
}

//Function to Display entire Queue.
void display(){
    int i;
    if(front == -1)
        printf("Queue is empty\n");
    else{
        printf("Queue is :\nFront-> ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("<-rear\n");
    }
}
