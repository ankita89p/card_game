#include<stdio.h>
void findmaxsubarraysum(int arr[], int n){
    int max_so_far = arr[0];
    int current_max = arr[0];
    int start = 0, end = 0, s = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] > current_max + arr[i]){
            current_max = arr[i];
            s=i;
        } else {
            current_max = current_max + arr[i];
        }
        if (current _max > max_so_far){
            max_so_far = current_max;
            start = s;
            end = i;
        }
    }
    printf("maximum subarry sum: %d\n", max_so_far);
    printf("subarry elements: ");
    for (int i = start; i<=end; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}
    int main(){
        int arr[] = {-2, -3, 4, -1, 5, -3};
        int n = sizeof(arr) / sizeof(arr[0]);
        printf("original array: ");
        for (int i = 0; i< n; i++){
            printf("%d", arr[i]);
        }
        printf("\n\n");
        findmaxsubbarysum(arr, n);
        return 0;
    }
} 