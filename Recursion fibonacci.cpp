#include <stdio.h>

unsigned long long int fib (unsigned long long int n, unsigned long long int prev, unsigned long long int prev2){
	n = prev + prev2;
	return (n);
}

void print (unsigned long long int a, unsigned long long int b, unsigned long long int hist, unsigned long long int hist2){
	unsigned long long int res;
	if(b < a){
		res = fib(b, hist, hist2);
		printf("%llu ", res);
		b ++;
		hist2 = hist;
		hist = res;
		if (b == 1) hist = 1;
		print(a, b, hist, hist2);
	}
}

int main(){
	unsigned long long int ans;
	unsigned long long int num = 0;
	printf("Numero de elementos de la seria fibonacci: ");
	scanf("%llu", &ans);
	printf("Elementos de la serie\n");
	print(ans, num, 0, 0);
	
	return 0;
}
