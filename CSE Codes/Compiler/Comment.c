#include<stdio.h>

int
main ()
{
  int i, flag = 0;
  char arr[40];
  printf ("Enter the line:\n");
  fgets (arr, 40, stdin);
  if (arr[0] == '/')
    {
      if (arr[1] == '/')
	{
	  printf ("\n It is a single line comment");
	}
      else if (arr[1] == '*')
	{
	  for (i = 2; i <= 40; i++)
	    {
	      if (arr[i] == '*' && arr[i + 1] == '/')
		{
		  printf ("\n It is a multi-line comment");
		  flag = 1;
		  break;
		}
	      else
		continue;
	    }
	  if (flag == 0)
	    printf ("\n It is not a comment");

	}
    }


  else
    printf ("\n It is not a comment");




  return 0;
}
