#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int j=1;
  int k=1;
  i=1;
  printf("%d",i);
  i=i+1;
  printf("\n%d",i);
  i*=5;
  printf("\n%d",i);
  i++;
  printf("\n%d",i);
  ++i;
  printf("\n%d",i);
  printf("\nj=%d",j);
  printf("\n++j=%d",++j);
  printf("\nk=%d",k);
  printf("\nk++=%d",k++);
  printf("\nafter k++=%d",k);


}
