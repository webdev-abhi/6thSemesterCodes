#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void main() {
	char res[100], c;
	int flag3 = 0, flag2 = 0, flag1 = 0, count = 1, i = 0, ans = 0;
	printf("Enter 1 to enter a character literal and 0 to exit: \n");
	while(1) {
		printf("\nEnter your choice: \t");
		scanf("%d", &ans);
		if(ans == 0) {
			break;
		}
		if(ans == 1) {
			printf("Input: \t");
			scanf("%s", &c);
			if(count == 1) {
				if(isdigit(c) || (c == '-' && flag1 == 0) || (c == '+’ && flag1 == 0)) {
					res[count] = c;
					count++; or 
					if((c == '-') || (c== ‘+’)){
						flag1 = 1;
					}
				}
				else {
					printf("Incorrect format!\n");
					exit(0);
				}
			}
			else {
				if(isdigit(c) || (c == '.' && flag3 == 0 && isdigit(res[count-1])) || (c == 'E' && flag2 == 0 && isdigit(res[count-1])) || (c == '-' && flag1 == 0 && res[count-1] == 'E') || (c == '+’ && flag1 == 0 && res[count-1] == 'E')) {
					res[count] = c;
					count++;
					if(c == '.') {
						flag3 = 1;
					}
					if(c == 'E') {
						flag2 = 1;
						flag1 = 0;
					}
				}
				else {
					printf("Incorrect format!\n");
					exit(0);
				}
			}
		}
		else{
			printf("Choose a correct option!");
		}
	}
	if(count > 1){
		printf("Given input ");
		if(flag3 == 0 && flag2 == 0) {
		printfd("is a valid integer!");
		}
		else {
			printf("is a valid float!");
		}
	}
}
