#include<stdio.h>
#include<string.h>
main(){
    FILE *fp;
    char ch[100];
    fp=fopen("POEM","r");
    while(fgets(ch,99,fp)!=NULL){
        printf("%s",ch);
    }

    fclose(fp);
    getch();
}
