#include <stdio.h>

// This program generates a text file of SMILES having 'n' 
// number of monomers of PGA

int main() { 

    int n, i;
    n = 150;

	FILE *file_pointer; 
	
	file_pointer = fopen("PGA_smiles.txt", "w"); 
 
    fprintf(file_pointer, "O");
    i = 1;
    while (i<n+1)
    {
        fprintf(file_pointer, "C(=O)CO");
        i++;
    }
    
	fclose(file_pointer); 
	return 0;
}
