#include<stdio.h>
int main(){
char arr[2];
scanf("%c",&arr[0]);
scanf("%c",&arr[1]);
switch(arr[0]){
case '+':
if(arr[1]=='+'){
printf("++ increment");
break;
}
printf("+ addition");
break;
case '-':
if(arr[1]=='-'){
printf("-- increment");
break;
}
printf("- substraction");
break;
case '*':
printf("* multiplication");
break;
case '/':
printf("/ division");
break;
case'%':
printf("%% modulus");
break;
case '=':
if(arr[1]=='='){
printf("== equal to operator");
break;
}
printf("= assignment opearator");
break;
case '!':
if(arr[1]=='='){
printf("!= logical not equal to");
break;
}
printf("! logical not");
break;
case '>':
if(arr[1]=='='){
printf(">= greater than or equal to");
break;
}
printf("> greater than");
break;
case '<':
if(arr[1]=='='){
printf("less than or equal to");
break;
}
printf("< less than");
break;
case '&':
if(arr[1]=='&'){
printf("&& logical AND");
break;
}
printf("& binary AND");
break;
case '|':
if(arr[1]=='|'){
printf("|| logical OR");
break;
}
printf("| binary OR");
break;
default:
printf("not a valid token in c");
}
return 0;
}
