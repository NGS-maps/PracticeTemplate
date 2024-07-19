#include <stdio.h>
#include <stdlib.h>
#define  N  8

int a[N+1][N+1] = {{0,0,0,0,0,0,0,0,0},
		  {0,0,1,0,0,0,0,0,0},
		  {0,1,0,1,1,0,0,0,0},
		  {0,0,1,0,0,0,0,1,0},
		  {0,0,1,0,0,1,0,0,0},
		  {0,0,0,0,1,0,1,0,0},
		  {0,0,0,0,0,1,0,1,1},
		  {0,0,0,1,0,0,1,0,1},
		  {0,0,0,0,0,0,1,1,0}};

int v[N+1];

void visit(int);


int main(void)
{
int i;
for(i=1;i<=N;i++)
 {
 v[i] = 0;
 }
visit(1);
printf("\n");
}


void visit(int now)
{
int next;
v[now] = 1;
for(next = 1; next <= ###; next ++)
 {
 if((a[###][###] == 1) && (v[###] == 0))
  {
  printf("%d->%d, ",now,next);
  visit(###);
  }
 }
}
