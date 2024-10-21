#include <stdio.h>

int main() {
    int count = 10;
    char n[count][count];

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++) {
            n[i][j] = '*';
        }
    }

        //plane head
    n[3][4] = 'T';

    
    n[4][4] = 'B';
    n[5][4] = 'B';
    n[6][4] = 'B';
    n[4][3] = 'B';
    n[4][5] = 'B';
    n[6][3] = 'B';
    n[6][5] = 'B';



    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++) {
            printf("%c  ", n[i][j]);
        }
        printf("\n");
    }




    int column, row;
    printf("Please enter you shooting position: \n");
    printf("Row: ");
    scanf("%d", &row);
    printf("Column: ");
    scanf("%d", &column);
    

    if (n[row][column] == 'T' ){
        n[row][column] = 'X';
        printf("Hit\n");
    }
    else {
        printf("Miss\n");
    }

        
           
    

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++) {
            printf("%c  ", n[i][j]);
        }
        printf("\n");
    }
    

    
    
    
    return 0;
}
