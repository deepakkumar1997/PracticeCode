// C program for the above approach
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Driver Code
int main()
{
	// Substitute the file_path string
	// with full path of CSV file
	FILE* fp = fopen("writeCsv.csv", "a+");

	char name[50];
	int accountno, amount;

	if (!fp) {
		// Error in file opening
		printf("Can't open file\n");
		return 0;
	}

	// Asking user input for the
	// new record to be added
	printf("\nEnter Account Holder Name : ");
	scanf("%[^\n]%*c", &name);
	printf("\nEnter Account Number : ");
	scanf("%d", &accountno);
	printf("\nEnter Available Amount: ");
	scanf("%d", &amount);

	// Saving data in file
	fprintf(fp, "%s, %d, %d\n", name,
			accountno, amount);

	printf("\nNew Account added to record");

	fclose(fp);
	return 0;
}
