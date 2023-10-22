//mean using array
#include <stdio.h>
int main(){
	int i, n;
	float mean, sum=0;
	printf("Enter total number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	mean=sum/n;
	printf("Mean= %f",mean);
}
