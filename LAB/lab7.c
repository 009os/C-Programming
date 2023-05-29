#include <stdio.h>

int MAXSIZE = 5;       
int stack[5];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}



int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } 
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } 
}

int main() {
  
 int i,num,a;
 
 printf("PLEASE TYPE YOUR DATA \n");
 
 while(!isfull())
 {
     scanf("%d",&num);
     push(num);
     printf("DO YOU WANT TO UNDO , TYPE 1 FOR YES ELSE 2 FOR NO :  ");
     scanf("%d",&a);
     if(a==1)
     pop(num);
     
     else
     continue;
     
 }
 
 printf("YOUR REQUIRED ARRAY IS : ");
 
    while(!isempty()) {
      int data = pop();
      printf("%d\t",data);
   }


   return 0;
}