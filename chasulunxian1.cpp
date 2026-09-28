#include "stdio.h"
int main(){
	long double PI=3.1415926;
	double d,nL,nR;
	scanf("%lf %lf %lf",&d,&nL,&nR);
	double vL=PI*d*nL/60.0;
	double vR=PI*d*nR/60.0;
	double V=(vL+vR)/2.0;
	printf("vL=%.3f m/s\n",vL);
	printf("vR=%.3f m/s\n",vR);
	printf("V=%.3f m/s\n",V);
	return 0;
	
	
	
	
}
