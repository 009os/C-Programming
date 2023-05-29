#include <stdio.h>
#include <stdlib.h>

struct arr {
    int data;
    struct arr *next;
};
arr* top = NULL;

void insert(int value) {
    struct arr *newNode;
    newNode = (struct arr *)malloc(sizeof(struct arr));
    newNode->data = value; 
    if (top == NULL) {
        newNode->next = NULL;
    } else {
        newNode->next = top;
    }
    top = newNode;
}

int del() {
    if (top == NULL) {
        printf("\nStack Underflow\n");
    } else {
        struct arr *temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        return temp_data;
    }
}

void show() {
    if (top == NULL) {
        printf("\nStack Underflow\n");
    } else {
        printf("The stack is \n");
        struct arr *temp = top;
        while (temp->next != NULL) {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}

int main() {
    int choice, value;
    while (true) {
        printf("\n1. Push\n2. Pop\n3. Display\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            printf("Popped element is :%d\n", del());
            break;
        case 3:
            show();
            break;
        }
    }
}
