#include<limits.h>
#include<stdio.h>
void largest2number(int arr[],int arr_size){
	int i,first,second;
	if(arr_size<2){
		printf("Invalid output");
		return;
	}
	second=first=INT_MIN;
	for(int i=0;i<arr_size;i++){
		if(arr[i]>first){
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second && arr[i]!=first){
			second=arr[i];
		}
	}
	if(second ==INT_MIN){
		printf("There is not a second largest in array\n");
	}
	else{
		printf("There is second largerst number is %d",second);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	largest2number(arr,n);
	return 0;
}