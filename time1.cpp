#include "stdio.h"
int main(){
	int Time;
	scanf("%d",&Time);
	int h=Time/3600;
	int e=Time%3600;
	int min=e/60;
	int s=e%60;
	printf("%d h %d min %d s\n",h,min,s);
	return 0;	
}
