#include<stdio.h>
 
void main() {
   int max = 10;
   int a[max];
   max = FillTable(a, max);
   PrintReverseTable(a, max);
}

int FillTable(int a[], int max){
   int i, count;
   int *ptr;
   ptr = &a[0];
 
   printf("\nEnter array data (Max of %d elements, Q to quit): \n", max);
   for (;;) {
      if (scanf("%d", ptr) != 1){
        printf("\nExiting... \n");
        break;
      }
      if (count == max){
          printf("\nWARNING: Too many elements in array \n");
			break;
      }
      else {
        printf("Data Entered \n");
        ptr++;
        count++;
      }
   }
   return count;
}
    
PrintReverseTable(int a[], int max){
       int i;
       int *ptr;
       ptr = &a[max - 1];
 
       printf("\nReversed Table:\n");
 
       for (i = max - 1; i >= 0; i--) {
          printf("Element at position %d is: %d  \n", max-i, *ptr);
          ptr--;
       }
}
