//mean using array
#include <stdio.h>
int main(){
	int i, n,a[n],sum=0;
	float mean;
	printf("Enter total number of elements:");
	scanf("%d",&n);
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
