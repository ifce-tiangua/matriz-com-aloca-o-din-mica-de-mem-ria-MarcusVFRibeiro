#include <stdio.h>
#include<stdlib.h>

int main()
{
  int l,c;
  scanf("%d %d", &l, &c);
  int **p =(int**)malloc(sizeof(int*)*l);

  for(int i = 0; i < l; i++)
    p[i] = (int*)malloc(sizeof(int)*c);

  for(int i = 0; i < l; i++)
  {
    for(int j = 0; j < c; j++)
    {
      scanf("%d", &p[i][j]);
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
  for(int i = 0; i < l; i++)
    free(p[i]);
  
  free(p);

  return 0;
}