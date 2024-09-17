#include <stdio.h>

int Numeri(int N1, int N2){
if (N2 % N1 == 0) {
   return 1;
  } else {
    return 0;
  }
}

int main(void){
	int N1;
	int N2;
	printf("Give me the 1st Number You are Thinking \n ");
	scanf("%d", &N1);
	printf("Give me the 2nd Number You are Thinking  after that \n ");
	scanf("%d", &N2);
	int Res = Numeri(N1,N2);
	if (Res) {
	  printf("%d is a multiple of %d\n", N2, N1);
	} else {
	  printf("%d is not a multiple of %d\n", N2, N1);
	}
  return 0;
}
