/*#include<stdio.h>

int main()
{   char ch;
    FILE *fptr;
    fopen("src.txt","r");

    if(fptr == NULL)
    {
        printf("File not found");
    }

   while( ch = fget(fptr)!= EOF)
    {
        fputc(ch,stdout);
    }
    return 0;
}
*/

#include<stdio.h>
//read the contents from text document

int main(void)
{
    FILE *fptr; // FILE structure
    char ch;
    //fptr is pointer which holds the address of file
    fptr=fopen("src.txt","r");
    // if file is present it returns address
    // if file is not found it returns NULL
    if(fptr==NULL)
    {
        printf("File is not found");
        return 0;
    }

    while((ch=fgetc(fptr))!=EOF) //End of File (-1)
    {
        fputc(ch,stdout);// stdout  standard outpust screen
    }
    fclose(fptr);

    return 0;
}
