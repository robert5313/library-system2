#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()

{
    printf("===================================  MENU ASSIGNMENT   ========================================\n");
    printf("------------------------------------------------------------------------------------------\n");


    printf("                                       ROBERT KIMAIYO        \n");
    printf("------------------------------------------------------------------------------------------\n");

printf("      County Library2 \n");
printf("      welcome  Mr.KIMAIYO.\n");
    printf("                 what would you like to do?\n");

struct patron{
        char name[100];
        char email[50];
        char password[30];
        int is_staff;
};

void add_patron() {
    struct patron patron;
    printf("Enter name: ");
    getchar();
    gets(patron.email);
    printf("Enter Email: ");
    gets(patron.email);
    printf("Enter initial password: ");
    gets(patron.email);
    printf("Enter 1 if staff 0 otherwise");
    scanf("%d",&patron.is_staff);
    printf("$s added\n" ,patron.name);
}


  char firstname[10], lastname[10], record[1] ;
  char  passwowd[8], newpassword[8], cornfirmpassword[8];
  int option = 0;

  while (true)
  {
     printf("1) View user\n");
     printf("2) Add new user\n");
     printf("3) Edit user\n");
     printf("4) Delete user\n");
     printf("5) Change password\n");
     printf("6) Log out\n");
     printf("7) Exit system\n");

     printf("enter your option: ");
     scanf("%d", &option);


     switch (option)
     {
     case 1:
        printf("Here is the list of users : \n");
        printf("               a. mr.waweru Martin\n");
        printf("               b. mr.oloo Brian \n");
        printf("               c. mrs.Njeri Kiweu \n");
        printf("               d. miss.Quanter Chess \n");
        printf("===========================================================================\n");


        break;
     case 2:
        printf("enter your details below \n");
        printf("        Input your firstname: ");
        scanf("%s", firstname);
        printf("        Input your lastname: ");
        scanf("%s", lastname);
        printf("         Succesfully added user %s %s ", firstname, lastname);
        printf("into the database\n");
        printf("===========================================================================\n");
        break;

     case 3:
          printf("select the record to edit \n");
          printf("   a\n");
          printf("   b\n");
          printf("   c\n");
          printf("   d\n");

          printf("        select the record to edit: \n");
          scanf("%s", record);
          printf("        Input your firstname: ");
          scanf("%s", firstname);
          printf("        Input your lastname: ");
          scanf("%s", lastname);
          printf("         Succesfully edited the record to %s %s \n ", firstname, lastname);
          printf("===========================================================================\n");
          break;
     case 4:
          printf("select the record to delete \n");
          printf("   a\n");
          printf("   b\n");
          printf("   c\n");
          printf("   d\n");
          printf("        select the record to delete: \n");
          scanf("%s", record);
        printf("         Succesfully deleted the record  %s   ", record);
        printf("from the database\n");
        printf("===========================================================================\n");
        break;
     case 5:
          printf("change the password below: \n");
          printf("        Input your previous password: ");
          scanf("%s", newpassword);
          printf("        Input your new password: ");
          scanf("%s", cornfirmpassword);
          printf("         Succesfully changed the password to %s  \n ", cornfirmpassword);
          printf("===========================================================================\n");
          break;
     case 6:
         printf("logging out...\n");
         printf("thank you...\n");
   exit(0);

     case 7:
         printf("Exiting the program....\n");
   exit(0);


     }
  }



    return 0;
}
