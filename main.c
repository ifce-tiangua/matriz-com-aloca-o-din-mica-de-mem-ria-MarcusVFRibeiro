#include <stdio.h>
#include<stdlib.h>

int main()
{
  int l,c;
  scanf("%d %d", &l, &c);
  if(l == 0 || c == 0)
  {
    printf("[matriz vazia]");
    return 1;
  }
  int **p =(int**)malloc(sizeof(int*)*l);

  for(int i = 0; i < l; i++)
    p[i] = (int*)malloc(sizeof(int)*c);

  for(int i = 0; i < l; i++)
  {
    for(int j = 0; j < c; j++)
    {
      scanf("%d", &p[i][j]);
      printf("%d", p[i][j]);
      if(j < c - 1)
        printf("\n");
    }
    printf("\n");
  }
  for(int i = 0; i < l; i++)
    free(p[i]);

  free(p);

  return 0;
}