#include <stdio.h>
#include <stdbool.h>
int euclid(int m,int n) {
  if (m < n) {
    return 1;
  }
  while (true) {


  if (n==0) {
    printf("%d\n",m );
    return 0;
  }
  int a;
  a = n;
  n = m % n;
  m = a;
  }
}


int main(int argc, char const *argv[]) {
  int m;
  int n;
  scanf("%d %d", &m, &n);
  euclid(m,n);
  return 0;
}
