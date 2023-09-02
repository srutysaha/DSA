//insert a number at a given location in array
#include <stdio.h>
int main(){
	int i, n,num,id,c;
	printf("Enter total number of elements:");
	scanf("%d",&n);
	printf("Enter elements in array\n");
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter number to insert: ");
	scanf("%d",&num);
	printf("Enter index of insertion: ");
	scanf("%d",&id);
	if(id<=n){
		a[n+1];
	}
	else{
		printf("Error:index out of array range");
		exit(0);
	}
	for(i=id;i<n+1;i++){
		c=a[i];
		a[i]=num;
		num=c;
	}
	printf("Insertion done!NEW ARRAY:");
	for(i=0;i<n+1;i++){
		printf("%d \t",a[i]);
	}
}

