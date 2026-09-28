#include "stdio.h"
int main(){
	double U,I,t;
	scanf("%lf %lf %lf",&U,&I,&t);
	double P=U*I;
	double R=U/I;
	double E=P*t/3600.0;
	printf("P=%.2f W\n",P);
	printf("R=%.2f ohm\n",R);
	printf("E=%.3f Wh\n",E);
	return 0;
}
