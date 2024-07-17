#include <stdio.h>

int main() {
    int rows, i, j;
     int n = 5; 
      int m = 5; 

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);

   
    for (i = 1; i <= rows; i++) {
        
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        
       
        printf("\n");
    }
    

        printf("\nQue--2\n");

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);

   
    for (i = 1; i <= rows; i++) {
        
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d ", j);
        }
        
        
        printf("\n");
    }


            printf("\nQue--3\n");

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    
    for (i = rows; i >= 1; i--) {
        
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        
       
        printf("\n");
    }


    printf("\nQue--4\n");

    
    for (int i = 1; i <= m; ++i) {
        
        for (int j = i; j <= m; ++j) {
          
            if (j < m) {
                printf("%d ", j);
            } else {
                printf("%d", j);
            }
        }
        printf("\n"); 
    }

    
    printf("\nQue--5\n");
   

    
    for (int i = 1; i <= n; ++i) {
       
        for (int j = n - i + 1; j >= 1; --j) {
            
            if (j > 1) {
                printf("%d ", i);
            } else {
                printf("%d", i);
            }
        }
        printf("\n"); 
    }

    return 0;
}
    


    
    

    
    

    


   
