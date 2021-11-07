#include <stdio.h >//libary file

main(){
	//declaration variable
	double money;      //format code-->%lf
	int  person;      //format code-->%d 
	double share_money;//format code-->%lf
	
	printf("+++++++++++++++++++++++++++\n");
	printf("  American share\n");
	printf("++++++++++++++++++++++++\n");
	printf("Input money:");
    scanf("%lf"  , &money  );	
	printf("Input person  : ");
	scanf("%d"  , &person  );
	printf("+++++++++++++++++++++++++++\n");
	share_money=money / person;
	
	printf("share_money is : %lf baht /person\n " , share_money );
	
	printf("+++++++++++++++++++++++++++\n");
	
	getch();//input character  or break screen
}

