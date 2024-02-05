#include <stdio.h>

static void sort(int v[100], int n){
//add bubble sort alg
}

int main(void){

int n, v[100];
scanf("%d", &n);
int i;
for(i = 0; i < n; i++)
	scanf("%d", &v[i]);

sort(v, n);
for(i = 0; i < n; i++)
	printf("%d ", v[i]);
return 0;
}
