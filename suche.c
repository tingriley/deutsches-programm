#include<stdio.h>

int arr[] = {1, 2, 3 ,4 ,5};
int binaresuche(int *arr, int links, int rechts, int num)
{
    if(links <= rechts){
        int mid = (links + rechts)/2;
        if(arr[mid] == num){
            return mid;     
        }
        else if(arr[mid] < num){
            return binaresuche(arr, mid+1, rechts, num);
        }
        else{
            return binaresuche(arr, links, mid-1, num);
        }
    }
    return -1;
}


int binaresuche2(int *arr, int links, int rechts, int num)
{
    while(links <= rechts){
        int mid = (links + rechts)/2;
        if(arr[mid] == num){
            return mid;     
        }
        else if(arr[mid] < num){
            links = mid + 1;
        }
        else{
            rechts = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int x = -1;
    for(int i = 0; i <= 5; i++){
        x = binaresuche(arr, 0, 5, i);
        printf("x = %d\n", x);

        x = binaresuche2(arr, 0, 5, i);
        printf("x = %d\n", x);
    }
    return 0;
}
