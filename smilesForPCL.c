#include <stdio.h>
 
int main() { 

    int n, i;
    n = 50;

	FILE *file_pointer; 
	
	file_pointer = fopen("PCL_smiles.txt", "w"); 
 
    i = 1;
    while (i<n+1)
    {
        fprintf(file_pointer, "OCCCCCC(=O)");
        i++;
    }
    
	fclose(file_pointer); 
	return 0;
}
