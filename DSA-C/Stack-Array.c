#include <stdio.h>
int ch,max,top=-1;
void push(int arr[]){
	top++;
	printf("Enter element to be pushed:");
	scanf("%d",&arr[top]);
	printf("Element pushed!\n");
	return;
	
}
void pop(int arr[]){
	printf("Element popped!Value removed: %d\n",arr[top]);
	top--;
	return;
	
}
void peep(int arr[]){
	printf("Top most element: %d\n",arr[top]);
	return;
	
}

void main(){
	printf("Enter no. of elements in array:");
	scanf("%d",&max);
	int a[max];
	
	do{
		printf("Enter 1 to PUSH \nEnter 2 to POP \nEnter 3 to PEEP \nEnter 4 to QUIT\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(top==max-1){
					printf("Stack Overflow:No more elements can be added.\n");
				}
				else{
					push(a);
				}
				break;
			case 2:
				if(top==-1){
					printf("Stack Underflow:No more elements to be removed.\n");
				}
				else{
					pop(a);
				}
				break;
			case 3:
					if(top==-1){
					printf("No element in array.\n");
				}
				else{
					peep(a);
				}
				break;
			case 4:
				printf("Program ends.");
				break;
			default:
				printf("Choice doesn't match!Try again.\n");
				break;
		}
	}while(ch!=4);
				
}
