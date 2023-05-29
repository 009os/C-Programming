#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct company
{
    struct company *prev;
    int revenue;
    int pos;
    char name[50];
    struct company *next;
};
struct company *head=NULL;
struct company *find(int pos)
{
    struct company *temp;
    for(temp=head;temp!=NULL&&temp->pos!=pos;temp=temp->next);
    return temp;
}  
void insert(int pos)
{
    struct company *new=(struct company*)malloc(sizeof(struct company));
    struct company *search=(struct company*)malloc(sizeof(struct company));
    printf("please Enter name of company\n");
    scanf("%s",new->name);
    printf("please ENTER (%s) REVENUE : ",new->name);
    scanf("%d",&new->revenue);
    if(head==NULL)
    {
        if(pos==1)
        {
        new->pos=1;
        new->next=new->prev=NULL;
        head=new;
        }
        else
        printf("wrong position\n");
    }
    else
    {
        search=find(pos);
        if(search==NULL)
        {
            printf("wrong position\n");
            return;
        }
        else
        {
            if(search->prev==NULL)
            {
                new->prev=NULL;
                new->next=search;
                new->pos=pos;
                search->prev=new;
                head=new;
            }
            else
            {
                new->next=search;
                new->prev=search->prev;
                new->pos;
                search->prev->next=new;
                search->prev=new;
            }
            while(search!=NULL)
            {
                search->pos+=1;
                search=search->next;
            }
        }
    }
}
void print()
{
    struct company *temp=head;
    if(head==NULL)
    {
        printf("Empty list\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("Name %s\tRevenue %d\tPosition %d\t\n",temp->name,temp->revenue,temp->pos);
            temp=temp->next;
        }
    }
}
void delete(int pos)
{
    struct company *temp=head;
    if(head==NULL)
    printf("Empty list\n");
    else
    {
        struct company *search=find(pos);
        if(search==NULL)
        printf("wrong input\n");
        else
        {
            if(search->prev==NULL&&search->next==NULL)
            head=NULL;
            else if(search->prev==NULL)
            {
               search->next->prev=NULL;
                head=search->next;
            }
            else if(search->next==NULL)
            {
               search->prev->next=NULL;
            }
            else
            {
                search->prev->next=search->next;
                search->next->prev=search->prev;
            }
        }
        while(temp!=NULL)
        {
           if(temp->pos>pos)
           temp->pos-=1;
           temp=temp->next;
        }
        free(search);
    }
}
void main()
{
    int ch,pos,ch1;
    while(1)
    {
        printf("PLEASE Press 1 to insert----Press 2 to SHOW----Press 3 to delete\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("PLEASE Enter position\n");
        scanf("%d",&pos);
            insert(pos);
            break;
        case 2:
        print();
        break;
        case 3:
        printf("PLEASE Enter position of the company to be deleted\n");
        scanf("%d",&pos);
        delete(pos);
        break;
       
        printf("IF U WANT To continue press 1\n");
        scanf("%d",&ch1);
        if(!ch1)
        break;
    }
    }
}


