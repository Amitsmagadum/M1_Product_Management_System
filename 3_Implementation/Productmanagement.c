-:    0:Source:SRC/Productmanagement.c
           0:Graph:./ProductManagement.gcno
           0:Data:-
           0:Runs:0
           1:
           2:#include "Productmanagement.h"
           3:// This program only run on gcc compiler.
           4:/*
           5:Product management system to Add_Product, Read, delete,Edit and Sell product
           6:*/
           7:/*#include <stdio.h>
           8:#include <stdlib.h>
           9:#include <string.h>*/
          10:
          11:#define USERNAME "Admin"
          12:#define PASSWORD "Admin123"
          13:/*typedef struct items
          14:{
          15:    char product_code[50];
          16:    char product_name[50];
          17:    int rate;
          18:    int quantity;
          19:    char Company_name[30];
          20:
          21:}
          22: ITEM;
          23:
          24:ITEM item;*/
          25:
          26:// // Operate to see in the given product code is available
          27:// int isCodeAvailable(char code[])
          28:// {
          29://     FILE *file;
          30://     file = fopen("Record.txt", "r");
          31://     while (!feof(file))
          32://     {
          33://         fread(&item, sizeof(item), 1, file);
          34://         if (strcmp(code, item.product_code) == 0)
          35://         {
          36://             fclose(file);
          37://             return 1;
          38://         }
          39://     }
          40://     fclose(file);
          41://     return 0;
          42:// }
          43:
          44:// // Function to check the quentity during the Sell product.
          45:// int isProductAvailable(int quantity)
          46:// {
          47://     FILE *file;
          48://     file = fopen("Record.txt", "r");
          49://     while (!feof(file))
          50://     {
          51://         fread(&item, sizeof(item), 1, file);
          52://         if (item.quantity >= quantity)
          53://         {
          54://             fclose(file);
          55://             return 1;
          56://         }
          57://     }
          58://     fclose(file);
          59://     return 0;
          60:// }
          61:
          62:// function to check the choice is integer or not
          63:int get_int(int input)
          64:{
          65:    char ch;
          66:    while (scanf("%d", &input) != 1)
          66-block  0
         66-block  1
          67:    {
      68:        while ((ch = getchar()) != '\n')
      68-block  0
      68-block  1
          69:        {
          70:        }
          71:
        72:        printf("\n\v\t\t\t\t\t\tMust be positive integer.\n");
        72-block  0
        73:        printf("\t\t\t\t\tEnter Positive integer value, such as 1,2,3,4: ");
          74:    }
          75:
      76:    return input;
      76-block  0
          77:}
          78:
      79:int check_rate()
          80:
          81:{
          82:    int input;
          83:    char ch;
      84:    while (scanf("%d", &input) != 1)
      84-block  0
      84-block  1
          85:    {
      86:        while ((ch = getchar()) != '\n')
      86-block  0
      86-block  1
          87:        {
          88:        }
          89:
      90:         printf("\n\v\t\t\t\t\t\tRate be positive Integer.\n");
      90-block  0
      91:        printf("\t\t\t\t\tEnter rate of the product in positive integer: ");
          92:    }
          93:
      94:    return input;
      94-block  0
          95:}
          96:
          97:
      98:void login()
          99:{
     100:    printf("---------------------------------------------------------------------------------------------------------\n");
     100-block  0
     101:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     102:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     103:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     104:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     105:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     106:	printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
     107:	printf("|\t\t\t\t|\t     WELCOME TO \t |\t\t\t\t\t\t|\n");
     108:	printf("|\t\t\t\t|\tPRODUCT MGMT SYSTEM\t |\t\t\t\t\t\t|\n");
     109:	printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
     110:	printf("|\t\t\t\t            Address      \t\t\t\t\t\t\t|\n");
     111:	printf("|\t\t\t\t\t     Number\t\t\t\t\t\t\t\t|\n");
     112:	printf("|\t\t\t\t      \"WE BELIEVE IN QUALITY\"\t\t\t\t\t\t\t|\n");
     113:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     114:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     115:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     116:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     117:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     118:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     119:	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
     120:    printf("---------------------------------------------------------------------------------------------------------\n");
         121:
     122:    printf("\v\v\t\t\t\t\t\t\tLogin \n");
     123:    printf("\t\t\t\t\t\t************************\n");
         124:    char username[15], password[10];
         125:
     126:    printf("\v\v\t\t\tEnter username: ");
     127:    scanf("%s", username);
     128:    printf("\t\t\tEnter password: ");
     129:    scanf("%s", password);
         130:    while (1)
         131:    {
     132:        if ((strcmp(USERNAME, username)) == 0 && (strcmp(PASSWORD, password)) == 0)
     132-block  0
     132-block  1
     133:        {
         134:
     135:            printf("\t\t\t\t\tLogin successfully!!");
     135-block  0
     136:            options();
         137:        }
         138:        else
         139:        {
         140:
     141:            printf("\n\t\t\tsorry you enter the worng information.\n");
     141-block  0
     142:            printf("\n\t\t\tPlease try again.\n");
     143:            login();
     144:            break;
         145:        }
         146:    }
     147:} //Finished login function
         148:
         149:// start main funcion
     150:int main()
         151:{
     152:    login();
     152-block  0
         153:
     154:    return 0;
         155:} // Finished
         156:
         157:
         158:
         159:
     160:void options()
         161:{
     162:    printf("\v\n\v\t\t\t\t\t\t\t\t--Hritik Departmental Store--\n");
     162-block  0
     163:    printf("\t\t\t\t\t\t\t\t**********************************\n");
         164:    int num, choice;
         165:    while (1)
         166:    {
     167:        printf("\n\t\t\t\t\t\t\t\t\t1. Add_Product\n\t\t\t\t\t\t\t\t\t2. ReadProduct");
     167-block  0
     168:        printf("\n\t\t\t\t\t\t\t\t\t3. SearchProduct\n\t\t\t\t\t\t\t\t\t4. Delete\n\t\t\t\t\t\t\t\t\t5. Edit");
     169:        printf("\n\t\t\t\t\t\t\t\t\t6. close\n\t\t\t\t\t\t\t\t\t7. Sell product\n\n");
     170:        printf("\t\t\t\t\t\t\t\t\tEnter your choice: ");
     171:        choice = get_int(num);
     172:        switch (choice)
         173:        {
     174:        case 1:
         175:
     176:            AddProduct();
     176-block  0
         177:
     178:            break;
     179:        case 2:
         180:
     181:            ReadProduct();
     181-block  0
         182:
     183:            break;
     184:        case 3:
         185:
     186:            SearchProduct();
     186-block  0
     187:            break;
     188:        case 4:
         189:
     190:            deleteRecord();
     190-block  0
     191:            break;
     192:        case 5:
         193:
     194:            EditProduct();
     194-block  0
     195:            break;
         196:
     197:        case 6:
         198:
     199:            close_app();
     199-block  0
     200:            break;
     201:        case 7:
         202:
     203:            SellProduct();
     203-block  0
     204:            break;
     205:        default:
         206:
     207:            printf("\t\t* Invalid choice.\n");
     207-block  0
     208:            break;
         209:        } // Finished switch
         210:    }
         211:}