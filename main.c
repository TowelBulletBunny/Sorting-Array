#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int arr[3][4] = {{9,8,5,1},{3,2,7,6},{9,5,4,3}};  //original array
    
    printf("%s","Original array \n");
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<4 ; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //change the array
    // Outer loop for passes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            // Inner loop for comparisons and swaps
            // The last i elements are already in place, so we don't need to check them
            for (int k = 0; k < 3 - j; k++) {
                // Compare adjacent elements
                if (arr[i][k] > arr[i][k + 1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
    
    printf("%s","Sorted array \n");
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<4 ; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;

}