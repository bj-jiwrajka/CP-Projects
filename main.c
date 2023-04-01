

// // // ------------------------------------NEW START LINKEDLIST--------------------------------

// // #include <stdio.h>
// // #include <stdlib.h>
// // struct node
// // {
// //     int data;
// //     struct node *link;
// // };
// // struct node *head = NULL;
// // void create()
// // {

// //     struct node *temp, *ptr;
// //     temp = (struct node *)malloc(sizeof(struct node));
// //     printf("Enter the value: ");
// //     scanf("%d", &temp->data);
// //     temp->link = NULL;
// //     if (head == NULL)
// //     {
// //         head = temp;
// //     }
// //     else
// //     {
// //         ptr = head;
// //         while (ptr->link != NULL)
// //         {
// //             ptr = ptr->link;
// //         }
// //         ptr->link = temp;
// //     }

// //     int n;
// //     printf("Enter a data: ");
// //     scanf("%d", &n);
// //     temp->data = n;

// //     if (head == NULL)
// //     {
// //         head = temp;
// //     }
// //     else
// //     {
// //         ptr = head;
// //         while (ptr->link != NULL)
// //         {
// //             ptr = ptr->link;
// //         }
// //         ptr->link = temp;
// //     }
// // }

// // }

// // int main()
// // {
// //     // int q;
// //     // printf("Enter number of queries: \n");
// //     // scanf("%d", &q);
// //     // while (q!=7)
// //     // {

// //     printf("Enter your choice: \n 1.Create a linkedlist\n 2. Display your inkedlist\n 3.Exit the program\n 4.Insert an elemnent at the beginning\n 5.Insert an elemnent at the end\n 5.Delete from beginning\n");
// //     int choice;
// //     scanf("%d", &choice);
// //     switch (choice)
// //     {
// //     case 1:
// //         create();
// //         break;
// //     case 2:
// //         display();
// //         break;
// //     case 3:
// //         exit(0);
// //         break;
// //     case 4:
// //         insert();
// //         break;
// //     case 5:
// //         insertEnd();
// //         break;
// //         case 6:
// //         beginDel();
// //         break;
// //     default:
// //         printf("Invalid choice!!");
// //         break;
// //     }
// // }

// // ----------------------------------linkedlist naresh techno---------------------------
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };
// void create()
// {
//     struct node *root = NULL;
//     root = (struct node *)malloc(sizeof(struct node));
//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));
//     printf("Enter data");
//     scanf("%d", &temp->data);
//     temp->link = NULL;
//     if (root == NULL)
//     {
//         root = temp;
//     }
//     else
//     {
//         struct node *ptr;
//         ptr = root;
//         while (ptr->link != NULL)
//         {
//             ptr = ptr->link;
//         }
//         ptr->link = temp;
//     }
// }
// int length()
// {
//     struct node *root = NULL;
//     root = (struct node *)malloc(sizeof(struct node));
//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));

//     temp = root;
//     int count = 0;
//     while (temp->link != NULL)
//     {
//         temp = temp->link;
//         count++;
//     }
//     return count;
// }
// void insertBegin()
// {
//     struct node *root = NULL;
//     root = (struct node *)malloc(sizeof(struct node));
//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));
//     printf("Enter data");
//     scanf("%d", &temp->data);
//     temp->link = NULL;
//     if (root == NULL)
//     {
//         root = temp;
//     }
//     else
//     {
//         temp->link = root;
//         root = temp;
//     }
// }


