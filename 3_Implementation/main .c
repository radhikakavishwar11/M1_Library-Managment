#include"library_Manag_system.h"

int main()
{
    
    int pid,choice,success; 
    
    char name[20],authorname[20];
    
        

    printf("\n\t\t\t\t\t\t*************** MAIN MENU ***************\n");
    printf("\n\t\t\t\t\t\t2. Delete books");
    printf("\n\t\t\t\t\t\t3. View Books");
    printf("\n\t\t\t\t\t\t4. Search book");
    printf("\n\t\t\t\t\t\t5. Issue books");
    printf("\n\t\t\t\t\t\t6. Close Application");
    printf("\n\t\t\t\t\t\t******************************************\n");
    printf("\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:
        printf("\nBookId: ");
        scanf("%d",&pid);
        success=deletebook(pid);
        break;
        case 2:
        success=viewbook();
        break;
        case 3:
        printf("\nBookId:");
        scanf("%d",&pid);
        success=searchbook(pid);
        break;
        case 4:
        printf("\nBookId: ");
        scanf("%d",&pid);
        success=issuebook(pid);
        break;
        case 5:
        printf("\n\n\n");
        exit(1);
        default:
        printf("\n\t\t\t\t\t\tInvalid input");
        break;
     }
    if(success == pass)
    {
        printf("Successful\n");
    }
    else if(success==fail)
    {
        printf("Unsuccessful\n");
    }
    else{
        printf("Error\n");
    }
return 0;
}