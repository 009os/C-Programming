#include<stdio.h>
#include<stdlib.h>

struct operation{
    int op_no;
    struct operation* next;
};
struct operation* front=NULL;
struct operation* rear=NULL;
struct operation* operations=NULL;


void Start_task(int ops_no){
    struct operation* op, *a;
    op=(struct operation*) malloc(sizeof(struct operation));
    op->op_no=ops_no;
    
    if(operations==NULL){
        operations=op;
        front=op;
        printf("%d\n",operations->op_no);
    }
    else
    {
        a=operations;
        while(a->next!=NULL){
            a=a->next;
        }
        a->next=op;  
        rear=op;
        printf("%d\n",op->op_no);
    }
}

void End_task(){
    struct operation* temp=operations;
    operations=operations->next;
    free(temp);
    
}
void display(){
    struct operation* a;
    a=operations;
    while(a->next!=NULL){
        printf("%d ",a->op_no);
        a=a->next;
    }
    printf("%d ",a->op_no);
    printf("\n");
}



int main()
{
    int ch;
    int op_no;
    
    while(ch!=0){
        printf("1 to start task/input an operation: \n");
        printf("2 to end task/to delete a operation: \n");
        printf("3 to display queue: \n");
        printf("0 to exit the: \n");
        scanf("%d",&ch);
        
   
        
        switch(ch){
            case 1: printf("Enter operation: ");
                    scanf("%d",&op_no);
                    Start_task(op_no);
                    break;
            case 2: End_task();
                    break;
            case 3: display();
                    break;
            case 0: break;
            
            default: printf("invalid input\n");
        }
        
    }
}
