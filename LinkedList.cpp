#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

void ShowList(struct Node* p);

int main()
{
    struct Node* head = NULL;
    struct Node* temp = NULL;


    // Create first node
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->next = head;
    temp->num = 10;
    head = temp;

    // Create second node
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->next = head;
    temp->num = 20;
    head = temp;

    // Create third node
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->next = head;
    temp->num = 30;
    head = temp;

    ShowList(head);
}

void ShowList(struct Node* p) {
    if (p == NULL) return;
    printf("%d ", p->num);
    ShowList(p->next);
}