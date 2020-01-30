#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    float GRatio, LRatio;
    int i=0, r, n;

    n = 150;
    LRatio = 50;
    GRatio = 100-LRatio;

    FILE *file_pointer; 
	
	file_pointer = fopen("PLGA_smiles.txt", "w"); 

    srand(time(0));

    while (i<n) {
        r = rand()%100;
        //printf("%d ", r);
        
        if (r<LRatio){
            //printf("L \n");
            fprintf(file_pointer, "C(=O)C(-C)O");
        }
        else {
            //printf("G \n");
            fprintf(file_pointer, "C(=O)CO");
        }
        i++;
    }
    //printf("\n");

    fclose(file_pointer);

    return 0;

}