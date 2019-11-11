#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	
	char *op = argv[2];
	char *posA = argv[1];
	char *posB = argv[3];



	int numA = atoi(posA);
	int numB = atoi(posB);

	int sum = 0;
	
	if(isalpha(*posA)){

		printf("ERROR: Invalid number\n");
	
	
	
	}
	else if(isalpha(*posB)){

		printf("ERROR: Invalid number\n");
	
	
	
	}
	else if(isdigit(*op) ){
		printf("ERROR: Missing number\n");
}

	else{
		
		switch(*op){
	
		case '+':
		sum = numA + numB;
		printf("%d %s %d = %d",numA, op, numB, sum);
		break;

		case '-':
		sum = numA - numB;
		printf("%d %s %d = %d",numA, op, numB, sum);
		break;

		case '/':
		sum = numA / numB;
		printf("%d %s %d = %d",numA, op, numB, sum);
		break;

		case 'x':
		sum = numA * numB;
		printf("%d %s %d = %d",numA, op, numB, sum);
		break;
		default:
		printf("Error: invalid operator\n");
		}
		
	}

	return 0;
}