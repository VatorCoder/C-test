#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resrps;
    int answer;
    printf("Pick. r = rock p = paper s = scissors");
    answer = getchar();
    if(answer == 'r') {
        resrps = 1;
    }else{
        if(answer == 'p') {
            resrps = 2;
        }else{
            if(answer == 's') {
                resrps = 3;
            }
        }
    }
    srand(time(NULL));
    int enemy = (rand() % 3) + 1;
        if(enemy == 3 & resrps == 3|enemy == 2 & resrps == 2|enemy == 1 & resrps == 1) {
      printf("Tie!\n");
      return 0;
    }else{
      if(enemy == 1 & resrps == 2|enemy == 2 & resrps == 3|enemy == 3 & resrps == 1) {
        printf("You won!\n");
        return 0;
      }else{
        if(enemy == 2 & resrps == 1|enemy == 3 & resrps == 2|enemy == 1 & resrps == 3) {
          printf("I won!\n");
          return 0;
        }
      }
    }


}
