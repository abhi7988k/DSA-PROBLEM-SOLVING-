#include<stdio.h>
void pushZeroToEnd(int arr[],int arr_size){
 int count=0;
 for(int i=0;i<arr_size;i++){
 	if(arr[i]!=0){
	 
 	int temp=arr[i];
 	arr[i]=arr[count];
 	arr[count]=temp;
 	count++;}
 	
 }
 	for(int i=0;i<arr_size;i++){
 	printf("%d ",arr[i]);}
	
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	pushZeroToEnd(arr,n);

 
	return 0;
	
}