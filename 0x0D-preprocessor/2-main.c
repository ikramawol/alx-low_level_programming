#include <stdio.h>

/**
 * main: prints the name of the file it was compiled from
 *
 * Return: 0 if successful
 */
 
int main(void)
{

  printf("%s\n",__BASE_FILE__);
  printf("\n");
  return (0);
}
