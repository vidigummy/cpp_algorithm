//
// Created by vidigummy on 2023/01/24.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK 10
int top;
int stack[MAX_STACK];

void stackInit(void){
    top = 0;
}
bool isEmpty(){
    if(top == 0){
        return true;
    }else{
        return false;
    }
}
bool isFull(){
    if(top == MAX_STACK-1){
        return true;
    }else{
        return false;
    }
}
bool push(int inputInt){
    if(isFull()) {
        return false;
    }
    top++;
    stack[top] = inputInt;
    return true;
}
int pop(){
  if(isEmpty()){
      return -1;
  }
  int returnValue = stack[top];
  top--;
  return returnValue;
}

int main(){
    int* list;
    int n;
    scanf("%d", &n);
    list = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        int tmpInput;
        scanf("%d", &tmpInput);
        if(!push(tmpInput)) {
            printf("Can't Insert! Memory Full");
            break;
        }
    }
    printf("top : %d\n", top);
    for(int i = 0; i < n+1; i++){
        int tmpOutput;
        tmpOutput = pop();
        if(tmpOutput == -1){
            printf("\nStack is Empty.");
            break;
        }
        printf("%d ", tmpOutput);
    }
}