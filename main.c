#include<stdio.h>
int add(int a, int b){
	int result;
	result = a + b;
	return result;
	}
int main(){
int y  = 50;
int z = 10;
int sum = add(y, z);
printf("The sum is: %d\n", sum);

return 0;
}
