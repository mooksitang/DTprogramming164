//file name : Ep5Test2.c
//#incluch <stdio.h>

main(){
	//declaration  variable
	int age;
	char fname[25]= "somchay";
	const int num =  111; 
	
	age = 60;
	//num = 222; error
	
	printf("Wow    %d\n",age);
	printf("We %s e\n",fname);
	
	age =999;
	
	printf("%d", age);
}

