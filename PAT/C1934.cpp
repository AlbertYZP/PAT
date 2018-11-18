#include"stdafx.h"
#include<cstdio>
/*
using namespace std;
void Bubbe(int x[], int n){
	for(int j=0;j<n;j++){ 
		for (int i = 0;i < n-j-1;i++){
			if (x[i] > x[i + 1]) {
				int temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
			}
		}
	}
}
int BinarySearch(int x_all[], int x, int left,int right){
	int mid;
	while (left<right){
		mid = (left + right) / 2;
		if (x_all[mid] == x) return mid;
		else if (x_all[mid] > x) right = mid - 1;
		else left = mid + 1;
	}
	return -1;
}
int main(){
	int n,x_all[200],x;
	while (scanf("%d", &n) != EOF);{
		for(int i=0;i<n;i++){
			scanf("%d", &x);
			x_all[i] = x;
		}
		Bubbe(x_all, n);
		scanf("%d", &x);
		printf("%d", BinarySearch(x_all, x, 0,n));
	}
	return 0;
}
*/
int main() {
	int a = 0.006;
	printf("%0.2f", a );
	return 0;
}