#include<limits.h>
#include<stdio.h>
void print3largest(int arr[],int arr_size){
	int i,first,second,third;
	if(arr_size<3){
		printf("invalid input");
		return;
	}
	third=second=first=INT_MIN;
	for(int i=0;i<arr_size;i++){
		if(arr[i]>first){
			third=first;
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second && arr[i]!=first){
			third=second;
			second=arr[i];
		}
		else if(arr[i]>third && arr[i]!=first && arr[i]!=second){
			third=arr[i];
		}
	}
	 printf("Three largest elements are %d %d %d\n", first, second, third);
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	print3largest(arr,n);
	return 0;
}
