#include<stdio.h>
int main(){
	int a,b,c,d,t1,t2,t3;
    char x,y,z;
	scanf("%d %c %d %c %d %c %d",&a,&x,&b,&y,&c,&z,&d);
	//a = 5, b = 7, c = 11, d = 13;
	t1 = (a - b > 0)? a:b;
	//printf("%d",t1);
	t2 = (t1 - c > 0)? t1:c;
	t3 = (t2 - d > 0)? t2:d;
	printf("%d",t3);
}