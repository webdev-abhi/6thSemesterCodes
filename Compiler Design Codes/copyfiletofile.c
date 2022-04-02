#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
    FILE *fp, *ft;
    char ch;
    fp= fopen("ARRAY.c","r");
    if(fp==NULL){
        puts("Can't open file");
        exit(0);

    }

    fp=fopen("f_array.c","w");
    while(1){
        ch=fgetc(fp);

        if(ch==EOF)
        break;
        else
            fputc(ch,ft);

            }
    fclose(fp);
    fclose(ft);
    }
