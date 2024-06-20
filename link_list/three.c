#include <stdio.h>
#include <stdlib.h>
//Create a linked list first then
//insert a node at the beginning of a linked list
//insert a node at the end of a linked list
int main()
{
    struct node
    {
        int a;//data
        struct node *next;//pointer that stores address of the next node
    };
    struct node *head = 0, *new_node, *temp, *extra_node;
    int count = 0, i = 0;

    printf("Enter number of node: ");//Ask user how many node that want to create
    scanf("%d", &count);// Take number of node to n=be created from user
    if(count < 2)
    {
        printf("Not a valid number\n");// Handle error if the user enter number below 2
        exit(1);
    }

    printf("Enter data\n");//prompts user to enter data to be in the linked list
    while (i < count)// checks the number of node created
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        if (new_node == NULL)
        {
            printf("Memory allocation failed\n");//Handle error in memory allocation
            return 1;
        }
        
        scanf("%d", &new_node->a);//receives user input
        
        new_node->next = 0;// The pointer next of the new node created is initialized to zero
        if (head == NULL)// checks if head pointer is null which means there's is no node in the link list
        {
            head = temp = new_node;// The address stored in the new_node pointer is added to head and temp pointer
        }else
        {
            temp->next = new_node;// The address stored in the new_node pointer is added to the next pointer which temp is pointing to
            temp = new_node; //The address stored in the new_node pointer is added to temp pointer
        }
        i++; // increase the iteration  
    }
    temp = head;//The address of head node which is in head pointer is stored in the temp pointer

    printf("Initial linked list data: \n");// print the first link list created

    while (temp != 0)// loop helps in printing
    {
        printf("%d\n", temp->a);
        temp = temp->next;
    }

    new_node = (struct node *)malloc(sizeof(struct node));// creating a new node
    if (new_node == NULL)
        {
            printf("Memory allocation failed\n");//handles error allocating memory
            return 1;
        }
    printf("Enter new data\n");// prompts users to enter data to be inserted at the beginning of the linked list
    scanf("%d", &new_node->a);//receives user input
    new_node->next = 0;// new node next pointer is initialized to 0
    new_node->next = head;// address stored in the head pointer is stored in new node next pointer
    head = new_node;//The head pointer is made to point to new node

    temp = head;// temp node is moved back to head to start transversing the linked list
    printf("list after insertion at the beginning: \n");// prints the updated linked list
    while (temp != 0)// loop help in printing
    {
        printf("%d\n", temp->a);
        temp = temp->next;
    }


    new_node = (struct node *)malloc(sizeof(struct node));// creating a new node
    if (new_node == NULL)
        {
            printf("Memory allocation failed\n");//handles error allocating memory
            return 1;
        }
    printf("Enter new data\n");// prompts users to enter data to be inserted at the beginning of the linked list
    scanf("%d", &new_node->a);//receives user input
    new_node->next = 0;// new node next pointer is initialized to 0
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = new_node;

    temp = head;

    printf("list after insertion at the end: \n");// prints the updated linked list
    while (temp != 0)// loop help in printing
    {
        printf("%d\n", temp->a);
        temp = temp->next;
        free(temp);
    }
    free(new_node);
}