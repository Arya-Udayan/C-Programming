
#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
struct node*head = NULL;
void insert(int e) {
 struct node *t;
 if(head == NULL) {                      //insertion when list is empty.....//
      head = (struct node *)malloc(sizeof(struct node));
      head->data = e;
      head->next = head;
    }
 else {                           //insertion at end...........//
    t = head;
    while(t->next != head) {
    t = t->next;
    }
   t->next = (struct node *)malloc(sizeof(struct node));
   t->next->data = e;
   t->next->next = head;
 }
}
void deleteNode(int e) {
   struct node*t;
    if(head == NULL) {
         printf("List is empty..");
      }
    else if(head->data == e && head->next == head)    //delete from beg when there is only one element.......//
	 { 
           head = NULL;
      }
    else if (head->data == e){               // delete from beg when there is more than one  element.......//
         t = head;
         while(t->next != head) 
		 {
             t = t->next;
         }
       t->next = head->next; //last node next should point to the next of head
       head = head->next; //head is moved to the next of head
     }
 else { // deletion of intermediate or last node
        t = head;
     while(t->next != head && t->next->data != e) 
		  {
             t= t->next; 
         } 
     if(t->next==head){
          printf("Not found..");
       }
     else
       {
       	t->next=t->next->next;
	   } 
   }
}
void disp() {
     struct node*t;
      printf("\n");
      if(head == NULL) {
           printf("List is empty");
      }
     else {
         t = head;
    do {
          printf("%d\t",t->data);
          t = t->next;
    }while(t != head);
  }
}
int main()
{
 insert(10);
 insert(20);
 insert(30);
 insert(5);
 disp();
 deleteNode(10);
 disp();
 deleteNode(30);
 disp();
 deleteNode(5);
 disp();
 deleteNode(20);
 disp();
 return 0;
}
