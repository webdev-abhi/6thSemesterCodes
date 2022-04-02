#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int main()
{
 printf("Enter the length of the string\n");
int n,i;
 scanf("%d",&n);
 char *str=(char*)malloc(n*sizeof(char));
 printf("Enter the string:\n");
 scanf("%s",str);
 int flag=0;
 if(strlen(str)==1 && *str=='a')
{
   printf("It is a valid string ");
    return 0;
}
else
{
bool isa = false, isb = false;
 for(i=0;i<n-1;i++)
 {
   if(str[n-1] =='b')
   {
        if(str[i] == 'b' && isa == true)
        {
            isb = true;
        }
        else if(str[i] == 'b' && isa == false)
        {
            isb = true;
        }
        else if(str[i] == 'a' && isb == false)
        {
            isa = true;
        }
        else if(str[i] == 'a' && isb == true)
        {
            flag = 1; 
          break;
        }
    }
 else
    {
      
      flag=1;
      break;
    }
}
}

  if(flag==0)
{
  printf("It is a valid string\n");
 }

else
{
  printf("It is not a valid string\n");
}

 return 0;
}
