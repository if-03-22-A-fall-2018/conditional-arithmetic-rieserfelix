#include <stdio.h>

void selection(int *choice, int *choice2){

  do {
    printf("Select Add(1) or Multiply(2) : ");
    scanf("%d",choice);
  } while(*choice != 1 && *choice != 2);


  do {
    printf("Select a number in a range of 1-100 :");
    scanf("%d",choice2 );
  } while(*choice2 <1 || *choice2 > 100);

}

void printresult(int res){

 printf("Result: %d ",res);
}



void add(int choice2){

  int res;

  for (size_t i = choice2; i > 0; i--) {
    if (i %5 == 0 || i %3 == 0) {
      res += i;
    }
  }
printresult(res);
}

void multiply(int choice2){
  int res=1;

  for (size_t i = choice2; i > 0; i--) {
    if (i %5 == 0 || i %3 == 0) {
      res *= i;
      }
    }

    if (res == 1) {
    res = 0;
    }
  printresult(res);
}

void execute(int choice, int choice2){
  switch (choice) {
    case 1:
      add(choice2);
      break;
    case 2:
      multiply(choice2);
    break;
  }
}

int main(int argc, char const *argv[]) {

int choice;
int choice2;

selection(&choice, &choice2);
execute(choice, choice2);

  return 0;
}
