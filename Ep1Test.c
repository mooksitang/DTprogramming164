#include<Stdio.h>

func1(){
    printf("999\n");	
}

func2();    

main(){    

    printf("------------\n");
    func1();   //call function
    func1();   //call function
	printf("Wow Wow Wow\n");
	printf("------------\n");
	printf("Hi everybody....\n");
	printf("------------\n"); 
	func2();   //call function
	printf("Hollo World!\n");
	func2();   //call function
	
    getch();				
}	

func2()	{
	printf("111\n");	
}
