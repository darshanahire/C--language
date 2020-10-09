#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the Three number:");
	scanf(" %d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	   {
		if(b>c){
		printf("Numbers in Disending order are: %d %d %d\n",a,b,c);
		printf("Numbers in Assending order are: %d %d %d\n",c,b,a);}
		else{
		printf("Numbers in Disending order are: %d %d %d\n",a,c,b);
		printf("Numbers in Assending order are: %d %d %d\n",b,c,a);}
    	}
	else if((b>a)&&(b>c))
	 {
	 	if(a>c){
	    printf("Numbers in Disending order are: %d %d %d\n",b,a,c);
		printf("Numbers in Assending order are: %d %d %d\n",c,a,b);}
		else{
		printf("Numbers in Disending order are: %d %d %d\n",b,c,a);
		printf("Numbers in Assending order are: %d %d %d\n",a,c,b);}
	 }
	else{
		if(a>b){
		printf("Numbers in Disending order are: %d %d %d\n",c,a,b);
		printf("Numbers in Assending order are: %d %d %d\n",b,a,c);}
		else{
		printf("Numbers in Disending order are: %d %d %d\n",c,b,a);
		printf("Numbers in Assending order are: %d %d %d\n",a,b,c);}
}
}