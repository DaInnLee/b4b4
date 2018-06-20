#include <stdio.h>
int main(){
	int a=20,b=10,c;
	printf("바꾸기 전: %d %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n바꾼 후: %d %d",a,b);
}
