#include <stdio.h>
main(){
int a;  //선언
  printf("number plz: ");
  scanf("%d", &a);  //a에 저장

  if(a%2==0) {
    printf("it's a even number");  //= ->대입, == -> e
  }
  else
    printf("that's a odd number");
}