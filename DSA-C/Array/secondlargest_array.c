//second largest of n numbers using array
int main(){
	int i, n,max1,max2;
	printf("Enter total number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max1=a[0];
	for(i=0;i<n;i++){
		if(a[i]>=max1){
			max1=a[i];
		}
	}
	max2=a[0];
	for(i=0;i<n;i++){
		if(a[i]>=max2 && a[i]!=max1){
			max2=a[i];
		}
	}
	printf("The second largest number= %d",max2);
}
