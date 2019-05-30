#include<stdio.h>
#include<stdlib.h>

struct list                                 //have link to previous and next nodes
{
   int data;
   struct list* prev;
   struct list* next;
};

int main()
{
   //intialisation of nodes
   struct list n1,n2,n3;
   n1.data = 10;
   n2.data = 20;
   n3.data = 30;
   n1.prev = NULL;
   n3.next = NULL;


   //Linking of nodes
   n1.next = &n2;
   n2.prev = &n1;
   n2.next = &n3;
   n3.prev = &n2;
   
   //printing to check the links
   printf("%d,next-%d\n",n1.data,n1.next->data);
   printf("%d,prev-%d,next-%d\n",n2.data,n2.prev->data,n2.next->data);
   printf("%d,prev-%d\n",n3.data,n3.prev->data);
}

