#include <stdio.h>

int main()
{
    FILE *sourceFile, *destFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL)
    {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL)
    {
        printf("Error: Could not open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    printf("File content copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char ch;
    int charCount = 0, spaceCount = 0, lineCount = 0;

    // Input the file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF)
    {
        charCount++; // Count every character
        if (ch == ' ')
        {
            spaceCount++; // Count spaces
        }
        if (ch == '\n')
        {
            lineCount++; // Count new lines
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Character count (excluding EOF): %d\n", charCount);
    printf("Space count: %d\n", spaceCount);
    printf("Line count: %d\n", lineCount);

    return 0;
}