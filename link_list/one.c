#include <stdio.h>
#include <stdlib.h>

//Creating, printing and counting a linked list
int main()
{
    struct node
    {
        int a;//data
        struct node *next;//pointer that stores address of the next node
    };
    struct node *head, *new_node, *temp;
    int choice, count = 0;
    head = 0;//pointer to the first node is initialized to NULL

    
    while (choice)//This loop creates new nodes and link them to the list
    {
        new_node = (struct node *)malloc(sizeof(struct node));//allocated memory and store address in pointer
        printf("Enter data\n");//prompt user to enter data

        scanf("%d", &new_node->a);//receives user's input and store in address of a through the new node pointer

        new_node->next = 0;// The pointer 'next' of the newly created node is initialized to NULL
        if (head == NULL)//checks if head pointer is NULL i.e no node present yet
        {
            head = temp = new_node;//pointer head and temp stores the address of the new_node
        }else
        {
            temp->next = new_node;// pointer next(which is part of the node) is made to store address of the next node which happens to be the new node created
            temp = new_node;//pointer temp now stores address of the new node created
        }

        printf("Do you want to continue (enter 0 to stop and 1 to continue)?: ");//ask user if they which to continue creating nodes
        scanf("%d", &choice);  //receives user's reply
        if (choice != 0 && choice != 1)
        {
            printf("selection is invalid\n");
            exit(1);
        }
    }

    //printing out the data stored in the linked list

    temp = head;// pointer tmp is made to store the address in head pointer

    while(temp != 0)// checks is temp doesn't have an address stored in it.Loop runs as long as there is an address stored.
    {
        printf("%d\n", temp->a);// prints the data stored in the node
        temp = temp->next;// stores the address which is stored in pointer next in pointer temp. Then loop goes back to condition to check if temp has any address
        count++;
    }
    printf("number of node: %d\n", count);
    return 0;
}