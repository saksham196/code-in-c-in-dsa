#include<stdio.h>
int main(){
int n;

printf("enter a no of rows:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
for(int j=1;j<=n-i;j++){
printf("  ");
}
	
int a=1;
for(int k=1;k<=2*i-1;k++){
int d=a+64;
char ch=(char)d;
printf("%ch",ch);	
}
int b=i-1;
for(int s=1;s<=i;s++){
int f=b+64;
char ch=(char)f;
printf("%c",ch);
}
printf("\n");
}	
return 0;
}