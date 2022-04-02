#include<stdio.h>
#include<string.h>
main(){
    FILE *fp;
    char s[80];
    fp=fopen("POEM","w");
    printf("Enter few Lines :- \n");
    while(strlen(gets(s))>0){
        fputs(s,fp);
        fputs("\n",fp);

    }

    fclose(fp);
    getch();
}
