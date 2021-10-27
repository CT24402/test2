#include<stdio.h>
#include<stdlib.h>
int nhiphan(long n){
	int s=0, k, i=0;
	while(n!=0){
		k=n%10;
		if(k==1)s+=pow(2, i);
		i++;
		n/=10;
	}
	return s;
}
long thapphan(int n){
	long s=0;
	int k, i;
	while(n!=0){
		k=log2(n);
		s+=pow(10, k);
		n-=pow(2, k);
	}
	return s;
}
int main(){
	long n;
	scanf("%ld", &n);
	printf("%d", nhiphan(n));
	return 0;
}
