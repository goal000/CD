// Implementing Static Stack using an Array in C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10

int top = -1;
int stack[N];
void push();       
int pop();         
int peek();          
void display();

int main(){
    printf("STATIC ARRAY (Total Capacity: %d)\n", N);
    int choice;

    while(1){
        printf("\nChoose any of the following options:\n");
        printf("0: Exit\n1: PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n");        
        scanf("%d", &choice);
        switch(choice){
            case 0: exit(0);
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
	    case 4: display();break;
	    default: printf("Choose a valid option\n");
        }
    }
    return 0;
}

void push(){
    if(top == N-1)
        printf("Overflow State: can't add more elements into the stack\n");
    else{
        int x;
        printf("Enter element to be pushed into the stack: ");
        scanf("%d", &x);
        top+=1;
        stack[top] = x;
    }
}

int pop(){
    if(top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else{
        int x = stack[top];
        printf("Popping %d out of the stack\n", x);
        top-=1;
        return x;
    }
    return -1;
}

int peek(){
    int x = stack[top];
    printf("%d is the top most element of the stack\n", x);
    return x;
}

void display() {
	printf("Elements in the array are : ");
	for(int i=top;i>=0;i--) {
		printf("%d ",stack[i]);
	}
	printf("\n");
}
