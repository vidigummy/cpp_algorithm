//
// Created by user on 2023-01-25.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 10000

int head = 0;
int tail = 0;
int queue[MAX_LEN];

bool isEmpty(){
    if(head == tail){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(tail+1 == MAX_LEN){
        return true;
    }else{
        return false;
    }
}

bool push(int input){
    if(isFull()){
        return true;
    }else{

        queue[tail] = input;
        tail ++;
        return false;
    }
}

int pop(){
    if(isEmpty()){
        return -1;
    }else{
        int output = queue[head];
        head ++;
        return output;
    }
}


int main(){
    int N;
    scanf("%d", &N);
    for(int i; i < N; i++){
        int input;
        scanf("%d", &input);
        bool result = push(input);
        if(result){
            printf("Fucked Up!");
        }
    }
    for(int i; i < N; i++){
        int output = pop();
        if(output == -1){
            printf("Can't Pop From Queue. Is Empty\n");
            break;
        }
        printf("%d : %d\n", i, output);
    }
    return 0;
}