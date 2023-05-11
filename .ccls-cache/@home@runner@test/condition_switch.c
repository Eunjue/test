#include <stdio.h>
main(){
   int x;
   printf("1:사과, 2:바나나, 3:키위, 4:망고\n");
   scanf("%d", &x);
  
   switch(x){
     case 1:
       printf("에플다!\n");
     break;
     case 2:
       printf("죠르노 바나나!\n");
     break;
     case 3:
       printf("위키위키!\n");
     break;
     case 4:
       printf("플라망고!\n");
       break;
  defalt:
     printf("음 다 안 좋아하는 군...놀라운데?\n");
  }
   printf("-End-");
}