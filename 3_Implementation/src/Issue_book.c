#include<library_Manag_system.h>
test_values issuebook(int pid)
{
    char name1[20];
    FILE *fp=NULL;
    fp = fopen("bookLibrary.dat","rb");
    if(fp==NULL)
    {
        printf("\nError\\n");
        return fail;
    }
    else{

    scanf("%19s student name",name1);
    book *book_to_find=(book*)malloc(sizeof(book));
    while(fread(book_to_find,sizeof(book),1,fp))
    {
        if(book_to_find->book_id==id)
        {
            
            printf("\nBook_Id: %d\t\tBook_name: %s\t\tBook_Author: %s",book_to_find->book_id,book_to_find->book_name,book_to_find->author_name);
            printf("\n Book is issued to %s",name1);
            fclose(fp);
            free(book_to_find);
            return pass;
        }
    }
    
    fclose(fp);
    free(book_to_find);
    printf("\nRequested book is not available\n");
    
    return fail;
    }
}