#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int a; // Data
    struct node *next; // Pointer to the next node
};

int main() {
    struct node *head = NULL, *new_node, *temp;
    int count = 0, i = 0, pos;

    // Create the initial linked list
    printf("Enter number of nodes: ");
    scanf("%d", &count);
    if (count < 2) {
        printf("Not a valid number\n");
        return 1;
    }

    printf("Enter data\n");
    for (i = 0; i < count; i++) {
        new_node = (struct node *)malloc(sizeof(struct node));
        if (new_node == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        scanf("%d", &new_node->a);
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            temp->next = new_node;
        }
        temp = new_node;
    }

    // Print the initial list
    printf("Initial linked list data:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->a);
        temp = temp->next;
    }

    // Insert a new node at the beginning
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter new data for the beginning: ");
    scanf("%d", &new_node->a);
    new_node->next = head;
    head = new_node;

    // Print the list after insertion at the beginning
    printf("List after insertion at the beginning:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->a);
        temp = temp->next;
    }

    // Insert a new node at the end
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter new data for the end: ");
    scanf("%d", &new_node->a);
    new_node->next = NULL;

    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;

    // Print the list after insertion at the end
    printf("List after insertion at the end:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->a);
        temp = temp->next;
    }

    // Insert a new node at a specific position
    printf("Enter the position to insert the new node (0 to %d):\n", count);
    scanf("%d", &pos);

    if (pos < 0 || pos > count) {
        printf("Invalid position\n");
        return 1;
    }

    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter new data for the position %d: ", pos);
    scanf("%d", &new_node->a);

    if (pos == 0) {
        // Insert at the beginning
        new_node->next = head;
        head = new_node;
    } else {
        temp = head;
        for (i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    // Print the list after insertion at the specific position
    printf("List after insertion at position %d:\n", pos);
    temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->a);
        temp = temp->next;
    }

    // Free the memory allocated for the linked list
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
