#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

typedef struct node Node;

//create a struct for store node , node value and next pointer
struct node {
    int data;
    Node *next;
};

//this function is for create a node its return a node pointer
Node *create_node(int item, Node *next)
{
    //create memory for this node
    Node *new_node = (Node *) malloc(sizeof(Node));

    //if can not create memory for node
    if(new_node == NULL) {
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;

    return new_node;
}

//prepend function for add a node in first of linked list

Node *prepend(Node *head, int item)
{
    //here create a node and assign as first node
    Node *new_node = create_node(item, head);

    //here return the new node
    return new_node;
}

//append function create for add node in the last of linked list

Node *append(Node *head, int item)
{

    Node *new_node = create_node(item, NULL);

    //when linked list is empty
    if(head == NULL)
    {
        return new_node;
    }

    //create a node for find last node

    Node *current_node;
    //copy head for traverse from start
    current_node = head;

    //current node next null means this is last node
    while(current_node->next != NULL)
    {
        current_node = current_node->next;
    }

    //here the current node is last node
    //so assign new node in current node next

    current_node->next = new_node;

    //return the head of this linked list
    return head;

}

//print function for print linked list data

void print_linked_list(Node *head)
{
    Node *current_node = head;

    while(current_node != NULL)
    {
        printf("%d ", current_node->data);
        current_node = current_node->next;   //for looping and indicated the next pointer
    }
    printf("\n");
}

int main()
{
    //declare a node
    Node *head, *n1, *n2, *n3;

    //create a new node n
    n1 = create_node(10, NULL);

    //point n in head
    head = n1;

    //this function is for print the linked list data
    print_linked_list(head);

    //here use prepend function for add node in first
    head = prepend(head, 20);

    print_linked_list(head);

    //here use append function for add a node in last
    head = append(head, 30);

    print_linked_list(head);



    return 0;
}
