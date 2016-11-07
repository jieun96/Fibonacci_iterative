#include <stdio.h>
#include <time.h>
int fib(int);
int main(){
	int n[11];
	int i,j;
	long b;
	const long r[11] = {30000000,30000000,20000000,20000000,10000000,10000000,10000000,8000000,8000000,5000000,500000};
	for(i=0;i<11;i++){
		n[i] = 5*i;
	}

	printf("    n   totalTime     runTime\n");
	for(int j=0;j<11;j++){
		clock_t start, stop;
		start = clock();
		for(b = 1;b<r[j];b++)
			fib(n[j]);
		stop = clock();
		clock_t totalTime = stop-start;
		double runTime = (double)totalTime/(double)(r[j]);
		printf(" %4d %11d %11lf\n",n[j],totalTime,runTime);
	}
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
