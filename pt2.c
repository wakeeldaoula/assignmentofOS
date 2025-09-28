#include<stdio.h>
int main(){
char str[50];
printf("Enter the string: ");
fgets(str, sizeof(str), stdin);
printf("Your entered: %s", str);

return 0;
}
