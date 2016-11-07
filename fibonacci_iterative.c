#include <stdio.h>
int fib(int);
int main(){
	int n;
	printf("입력 : ");
	scanf("%d",&n);
	printf("fib = %d\n",fib(n));
	return 0;
}
int fib(int n){
	int i;
	int f[n+1];
	f[0] = 0;
	if(n>0){
		f[1] = 1;
		for(i=2;i<n+1;i++)
			f[i] = f[i-1]+f[i-2];
	}
	return f[n];
}
