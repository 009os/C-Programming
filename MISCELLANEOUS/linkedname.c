#include <stdio.h>
#include <malloc.h>
typedef struct node
{
    char s_name[20];
    struct node *next;
} s;
s *insert(s *);
s *del(s *);
void show(s *);
int main()
{
    s *top = NULL;
    int ch, x, c = 0;
    printf("Enter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for display\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = insert(top);
            break;
        case 2:
            top = del(top);
            break;
        case 3:
            show(top);
            break;
        }
        printf("\ndo you want to continue press 1: ");
        scanf("%d", &c);
    } while (c == 1);
}
s *insert(s *top)
{
    s *p;
    p = (s *)malloc(sizeof(s));
    if (p == NULL)
    {
        printf("no memory allocated");
    }
    else
    {
        printf("\nEnter the name: ");
        scanf("%s", &p->s_name);

        p->next = top;
        top = p;
    }
    return (top);
}
s *del(s *top)
{
    s *p;
    if (top == NULL)
    {
        printf("nothing to pop");
    }
    else
    {
        printf("\nThe name is: %s", top->s_name);
        top = top->next;
    }
    return (top);
}
void show(s *top)
{
    if (top == NULL)
    {
        printf("nothing to display");
    }
    else
    {
        while (top != NULL)
        {
            printf("\nThe name is: %s", top->s_name);
            top = top->next;
        }
    }
}