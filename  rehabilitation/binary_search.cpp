//
// Created by vidigummy on 2023/01/29.
//
#include <stdio.h>
int searchList[] = {1,2,55,8228,12934,222222,1321231231, 1231231124532415 };
int binarySearch(int left, int right, int target){
    int mid = (left+right)/2;
    if(left > right){
        return -1;
    }
    if(searchList[mid] == target){
        return mid;
    }else if(searchList[mid] < target){
        int newLeft = mid+1;
        int newRight = left;
        int result = binarySearch(newLeft, newRight, target);
        if(result == -1){
            return -1;
        }
    }else{
        int newLeft = mid-1;
        int newRight = left;
        int result = binarySearch(newLeft, newRight, target);
        if(result == -1){
            return -1;
        }
    }
}
int main(){
    int result = binarySearch(0, 7, 23);
    printf("%d",result);
    return 0;
}