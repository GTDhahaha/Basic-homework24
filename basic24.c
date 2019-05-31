#include <stdio.h>
#include <stdlib.h>

struct course
{
	char Name[10];  
	int Calculus;
	int ComputerIntroduction;
	int Programming;
} data;


int main(void)

{
    FILE *pFile;
	printf("Read course.txt (structure) in read-only mode\n");
	printf("\nContent is:\n\n");
	pFile=fopen("couse.txt", "r");
        
    if (pFile==NULL)
    {
        printf("Read failed!\n");
        exit(1);
	}   

    else
    {
    	while (fscanf(pFile, "%[^,],%d,%d,%d",data.Name,&data.Calculus,&data.ComputerIntroduction,&data.Programming)!=EOF) 
    	    printf("%s\t %d\t %d\t %d",data.Name,data.Calculus,data.ComputerIntroduction,data.Programming); 
	}

	printf("\n");
    fclose(pFile);

    system("pause");
    return 0;
}
