//Authors: Michalis Chatzinikolaou , Thanasis Topalis
//Contributors: 
#include <stdio.h>
#include <math.h>

/* Description:
This is a 'hacktool' to help you solve the Complex Wire module of the game
Keep Talking And Nobody Explodes a bit faster :)
We decided to write some code just for fun , hope you enjoy :)
*/

/*Code-to-do: 


*/
int main() {
	int S=0,P=0,B=0; //flags to check bomb characteristics
	int pov=1; // expert(1) or defuser(2) pov
	int RBSL=0000;
	//int RBSLarray[4];
	char check; // y/n char for do-while loop to check if we wanna to back to the menu
	
	printf("WELCOME TO COMPLEX WIRES HACKTOOL !\n");
	printf("\n");
	printf("\n");
	printf("Is there a Parallel Port? (1/0): ");
	scanf("%d",&P);
	printf("\nAre the 2 or more Batteries? (1/0):");
	scanf("%d",&B);
	printf("\nIs the last digit of the Serial Number even? (1/0):");
	scanf("%d",&S);
	
	
	do{
	system("cls");
	printf("\nMAIN MENU:");
	printf("\n");
	printf("\nSelect action: ");
	printf("\n1) See the wires to cut list");
	printf("\n2) Insert wire feats to get a CUT or DO NOT CUT feedback ");
	printf("\nAction No. :");
	scanf("%d",&pov);
	
	if (pov==1)
	{
	
	printf("\nCUT THOSE:\n\n");
	if(P==0 && B==0 && S==0)
	{
		printf("WHITE\n");
		printf("RED + STAR\n");
		printf("ONLY STAR\n");
	}
	
	else if(P==0 && B==0 && S==1)
	{
		printf("WHITE\n");
		printf("RED\n");
		printf("RED + STAR\n");
		printf("ONLY STAR\n");
		printf("BLUE\n");
		printf("BLUE + RED\n");
		printf("BLUE + RED + LED\n");
	}
	
	else if(P==0 && B==1 && S==0)
	{
		printf("WHITE\n");
		printf("RED + STAR\n");
		printf("ONLY STAR\n");
		printf("RED + LED\n");
		printf("RED + LED + STAR\n");
		printf("STAR + LED\n");
	}
	
	else if(P==0 && B==1 && S==1)
	{
		printf("WHITE\n");
		printf("RED\n");
		printf("RED + STAR\n");
		printf("ONLY STAR\n");
		printf("BLUE\n");
		printf("BLUE + RED\n");
		printf("BLUE + RED + LED\n");
		printf("RED + LED\n");
		printf("RED + LED + STAR\n");
		printf("STAR + LED\n");
	}
	
	else if(P==1 && B==0 && S==0)
	{
		printf("WHITE\n");
		printf("RED + STAR\n");
		printf("ONLY STAR\n");
		printf("RED + BLUE + STAR\n");
		printf("BLUE + LED\n");
		printf("BLUE + LED + STAR\n");
	}
	
	else if(P==1 && B==0 && S==1)
	{
		printf("WHITE\n");
		printf("RED\n");
		printf("RED + STAR\n");
		printf("ONLY STAR\n");
		printf("BLUE\n");
		printf("BLUE + RED\n");
		printf("BLUE + RED + LED\n");
		printf("RED + BLUE + STAR\n");
		printf("BLUE + LED\n");
		printf("BLUE + LED + STAR\n");
	}
	
	else if(P==1 && B==1 && S==0)
	{
		printf("WHITE\n");
		printf("RED + STAR\n");
		printf("ONLY STAR\n");
		printf("RED + LED\n");
		printf("RED + LED + STAR\n");
		printf("STAR + LED\n");
		printf("BLUE + RED + STAR\n");
		printf("BLUE + LED\n");
		printf("BLUE + LED + STAR\n");
	}
	
	else if(P==1 && B==1 && S==1)
	{
		printf("WHITE\n");
		printf("RED\n");
		printf("RED + STAR\n");
		printf("ONLY STAR\n");
		printf("BLUE\n");
		printf("BLUE + RED\n");
		printf("BLUE + RED + LED\n");
		printf("RED + LED\n");
		printf("RED + LED + STAR\n");
		printf("STAR + LED\n");
		printf("BLUE + RED + STAR\n");
		printf("BLUE + LED\n");
		printf("BLUE + LED + STAR\n");
	}
}
else
{
	do{
	printf("\nInsert wire feats in the following format:\nRBSL:");
	scanf("%d",&RBSL);
	//RBSLarray[1]=RBSL/1000; //RED
	//RBSLarray[2]=RBSL/100;  //BLUE
	//RBSLarray[3]=RBSL/10;   //STAR
	//RBSLarray[4]=RBSL%10;   //LED
	
	if (RBSL==0000 || RBSL==1010 || RBSL==0010) // You always CUT those
	{//   WHITE        Red+Star     Only Star 
			printf("\nCUT\n");
	}
	else if(P==0 && B==0 && S==1) //RBSL= 1000 , 0100 , 1100 , 1101
	{
		if (RBSL==1000 || RBSL==0100 || RBSL==1100 || RBSL==1101)
		{
			printf("\nCUT\n");
		}
		else
		{
			printf("\nDO NOT\n");
		}
	}
	
	else if(P==0 && B==1 && S==0) //RBSL= 1001 , 1011 , 0011
	{
		if (RBSL==1001 || RBSL==1011 || RBSL==0011)
		{
			printf("\nCUT\n");
		}
		else
		{
			printf("\nDO NOT\n");
		}
	}
	
	else if(P==0 && B==1 && S==1) //RBSL= 1000 , 0100 , 1100 , 1101 , 1001 , 1011 , 0011
	{
		if (RBSL==1000 || RBSL==0100 || RBSL==1100 || RBSL==1101 || RBSL==1001 || RBSL==1011 || RBSL==0011)
		{
			printf("\nCUT\n");
		}
		else
		{
			printf("\nDO NOT\n");
		}
	}
	
	else if(P==1 && B==0 && S==0) //RBSL= 1110 , 1100 , 0111
	{
		if (RBSL==1110 || RBSL==1100 || RBSL==0111)
		{
			printf("\nCUT\n");
		}
		else
		{
			printf("\nDO NOT\n");
		}
	}
	
	else if(P==1 && B==0 && S==1) //RBSL= 1000 , 0100 , 1100 , 1101 , 1110 , 0101 , 0111
	{
		if (RBSL==1000 || RBSL==0100 || RBSL==1100 || RBSL==1101 || RBSL==1110 || RBSL==0101 || RBSL==0111)
		{
			printf("\nCUT\n");
		}
		else
		{
			printf("\nDO NOT\n");
		}
	}
	
	else if(P==1 && B==1 && S==0) //RBSL= 1001 , 1011 , 0011 , 1110 , 0101 , 0111
	{
		if (RBSL==1001 || RBSL==1011 || RBSL==0011 || RBSL==1110 || RBSL==0101 || RBSL==0111)
		{
			printf("\nCUT\n");
		}
		else
		{
			printf("\nDO NOT\n");
		}
	}
	
	else if(P==1 && B==1 && S==1) //RBSL= 1000 , 0100 , 1100 , 1101 , 1001 , 1011 , 0011 , 1110 , 0101 , 0111
	{
		if (RBSL==1000 || RBSL==0100 || RBSL==1100 || RBSL==1101 || RBSL==1001 || RBSL==1011 || RBSL==0011 || RBSL==1110 || RBSL==0101 || RBSL==0111)
		{
			printf("\nCUT\n");
		}
		else
		{
			printf("\nDO NOT\n");
		}
	}
	
	}while (RBSL>=0); //you can exit by typing a negative number
}
	printf("\n");
	printf("\n");
	printf("\nYou NEVER cut the following:\nONLY LED\nBLUE + STAR\nRED + BLUE + STAR + LED\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Do you want to go back to the Main Menu? Press 'y' to do so, or press 'n' to Exit the Hacktool (y/n) : ");
	scanf(" %c",&check);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	}while(check=='y');
	
	printf("\nHope your friend is still alive mate ;)\n");
	system("PAUSE");
	return 0;	
}
