#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main ()
{
  char a[10];
  int flag, i = 1;
  printf ("\n Enter an identifier:");
  gets (a);
  if (isalpha (a[0]) || a[0] == '_' )
    flag = 1;
  else
    printf ("\n Not a valid identifier");


  while (a[i] != '\0')
    {
      if (!isdigit (a[i]) && !isalpha (a[i]) && a[i] != '_')
	{
	  flag = 0;
	  break;
	}
      i++;
    }
  if (flag == 1)
    printf ("\n Valid identifier");
  else
    printf ("\n Not a valid identifier");
}

