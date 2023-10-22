//delete a number from a given location in array
#include <stdio.h>
int main(){
	int i,n,id;
	printf("Enter total number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter index of deletion: ");
	scanf("%d",&id);
	if(id<=n){
		a[n-1];
	}
	else{
		printf("Error:index out of array range");
		exit(0);
	}
	i=id;
	while(i!=n-1){
		a[i]=a[i+1];
		i++;
	}
	printf("Deletion done!NEW ARRAY:");
	for(i=0;i<n-1;i++){
		printf("%d \t",a[i]);
	}
}
