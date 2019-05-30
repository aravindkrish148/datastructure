#include<stdio.h>
#include<stdlib.h>

struct list                                   //contains single data
{
   int data;
   struct list* link;
};

struct list2                                 //contains multiple data
{
   int data1, data2;
   struct list2* link;
};

int main()
{
   //intialisation of nodes
   struct list node1;
   node1.data = 10;
   node1.link = NULL;

   struct list node2;
   node2.data = 20;
   node2.link = NULL;

   struct list2 n1;
   n1.data1 = 30;
   n1.data2 = 40;
   n1.link = NULL; 

   struct list2 n2;
   n2.data1 = 50;
   n2.data2 = 60;
   n2.link = NULL; 

   //linking of nodes
   node1.link = &node2;
   n1.link = &n2;

   //printing to check
   printf("%d---%d\n", node1.data, node1.link->data);
   printf("%d,%d---%d,%d\n", n1.data1, n1.data2, n1.link->data1, n1.link->data2);

   return 0;
}
