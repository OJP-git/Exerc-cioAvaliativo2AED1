#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int * nextGreaterElements ( int* nums, int numsSize, int* returnSize ) {
    int c = 0, volta=0;
    int target = nums[0];
    int * greaterElements = ( int * ) malloc ( sizeof ( int ) * numsSize );


    for ( int i = 0; c < numsSize; i++ ) {

        if ( i == numsSize ) {
            i = 0;
            volta = 1;
        }

        if ( target < nums[i] ) {
            
            greaterElements[c] = nums[i];
            c++;
            if ( c < numsSize ) {
                target = nums[c];
                i = c;
            }
            volta = 0;

        }else if ( i == c && volta == 1 ){
            
            greaterElements[c] = -1;
            c++;
            if ( c < numsSize ) {
                target = nums[c];
                i = c;
            }
            volta = 0;
        }

    }

    ( * returnSize ) = numsSize;
    return greaterElements;
}

int main ( ) {
    int teste1[] ={ 5, 4, 3, 2, 1 };
    int teste2[] ={ 1, 2, 1 };
    int teste3[] ={ 3, 5, 4, 3, 3, 1, 5 };

    int size1;
    int size2;
    int size3;

    int * resposta1 = nextGreaterElements ( teste1, 5 , & size1 );
    int * resposta2 = nextGreaterElements ( teste2, 3 , & size2 );
    int * resposta3 = nextGreaterElements ( teste3, 7 , & size3 );

    printf("\n[");
    for ( int i=0; i < size1; i++  ) {
        printf("%d, ", resposta1[i]);   
    }
    printf("]\n");

    printf("\n[");
    for ( int i=0; i < size2; i++  ) {
        printf("%d, ", resposta2[i]);   
    }
    printf("]\n");

    printf("\n[");
    for ( int i=0; i < size3; i++  ) {
        printf("%d, ", resposta3[i]);   
    }
    printf("]\n");

    free ( resposta1 );
    free ( resposta2 );
    free ( resposta3 );
}
