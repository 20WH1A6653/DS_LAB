
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * link;
};
struct node * head = NULL,*cur,*temp,*temp1;

struct node * create(){
   int n;
   printf("Enter the total number of nodes\n");
   scanf("%d",&n);
   while(n--){
      cur = (struct node*)malloc(sizeof(struct node));
      printf("enter the value to be inserted in the node\n");
      scanf("%d",&(cur->data));
      cur->link = NULL;

      if(head == NULL)
           head = cur;
      else{
         temp = head;
         while(temp -> link != NULL)
              temp = temp -> link;
         temp -> link = cur;
      }
   }
   return head;
}

struct node * insert_begin(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur -> data = ele;
    cur -> link = head;
    head = cur;
    return head;
}

struct node * insert_end(int ele){
    cur = (struct node *)malloc(sizeof(struct node));
    cur -> data = ele;
    cur -> link = NULL;
    temp = head;
    while(temp->link != NULL)
         temp = temp->link;
    temp->link = cur;
    return head;
}
struct node *insert_pos(int ele, int pos){
    int c=1;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data=ele;
    temp = head;
    while(c<pos-1){
       temp = temp->link;
       c++;
    }
    cur->link = temp->link;
    temp->link = cur;
    return head;
}
void display(struct node *head){
 temp = head;
 while(temp->link != NULL){
 printf("%d -> ",(temp->data));
 temp = temp->link;
 }
 printf("%d\n",(temp->data));
} 
struct node* delete_begin(struct node *head){
 temp = head;
 head = temp->link;
 printf("deleted element is:%d\n",temp->data);
 free(temp);
 return head;
}

struct node * delete_end(struct node*head){
 temp = head;
 while(temp->link != NULL){
 temp1 = temp;
 temp = temp->link;
 }
 temp1->link = NULL;
 printf("deleted element is:%d\n",temp->data);
 free(temp);
 return head;
}

struct node *delete_pos(struct node *head,int pos){
 temp = head;
 int c=1;
 while(c<pos){
 temp1 = temp;
 temp = temp->link;
 c++;
 }
 temp1->link = temp->link;
 printf("deleted element %d\n",temp->data);
 free(temp);

 return head;
}
void reversedisplay(struct node*head){
 if(head != NULL){
 reversedisplay(head->link);
 printf("%d ",head->data);
 }
}
int search(struct node *head,int key){
 int c =1;
 temp = head;
 while(temp != NULL){
 if(key == temp->data){
 return c;
 }
 temp =temp->link;
 c++;
 }
 return -1;
}

struct node* sorting(struct node *head){
 int x,i,s;
 temp = head;
 temp1 = NULL;
 while(s){
 s=0;
 temp = head;
 while(temp->link!=temp1){
 if((temp->data) > (temp->link->data)){
 x = temp->data;
 temp->data = temp->link->data;
 temp->link->data = x;
 s = 1;
 }
 temp = temp->link;
 }
 temp1 = temp;
 } 
return head;
 }
int main(){
 struct node * head; 
 int ele,ch,pos,key;
 while(1){
 printf("\n1-create()\n 2-insert at begin\n 3-insert at end\n 4- insert at pos\n 5-display \n 6-delete at begin \n 7-delete at end \n 8-delete at pos \n 9-reverse display\n 10-search\n 11-sort\n 12-exit \n");
 printf("enter your choice\n");
 scanf("%d",&ch);
 switch(ch){
 case 1: head = create();
         break;
 case 2: printf("enter the value to be inserted\n");
         scanf("%d",&ele);
         head = insert_begin(ele);
         break;
 case 3: printf("enter the value to be inserted\n");
        scanf("%d",&ele);
 head = insert_end(ele);
         break;
 case 4: printf("enter the value and position\n ");
 scanf("%d %d",&ele,&pos);
 head = insert_pos(ele,pos);
         break;
 case 5: display(head);
         break;
 case 6: head = delete_begin(head);
         break;
 case 7: head = delete_end(head);
         break;
 case 8: printf("enter the position\n");
         scanf("%d",&pos);
 head = delete_pos(head,pos);
         break; 
 case 9: reversedisplay(head);
         break;
 case 10:printf("enter the key value to be searched\n");
        scanf("%d",&key);
        pos = search(head,key);
        if(pos == -1)
           printf("element not found\n");
        else
           printf("element found at %d \n",pos);
          break;
 case 11: head = sorting(head);
         break;
 
 case 12: exit(0);
 
 }
 } 
} 

Output:
Case 1:1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
1
Enter the total number of nodes
4
enter the value to be inserted in the node
1
enter the value to be inserted in the node
2
enter the value to be inserted in the node
3
enter the value to be inserted in the node
4
Case 2.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
2
enter the value to be inserted
6
Case 3.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
3
enter the value to be inserted
7
Case 4.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
4
enter the value and position
 3
3
Case 5.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
5
6 -> 1 -> 3 -> 2 -> 3 -> 4 -> 7
Case 6.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
6
deleted element is:6
Case 7.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
7
deleted element is:7
Case 8.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
8
enter the position
3
deleted element 2
Case 9.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
9
4 3 3 1
Case 10.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
10
enter the key value to be searched
1
element found at 1
Case 11.1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
11
1-create()
 2-insert at begin
 3-insert at end
 4- insert at pos
 5-display
 6-delete at begin
 7-delete at end
 8-delete at pos
 9-reverse display
 10-search
 11-sort
 12-exit
enter your choice
5
1 -> 3 -> 3 -> 4

 
 
