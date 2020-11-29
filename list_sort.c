 #include<stdio.h>
#include<stdlib.h>
struct node_t{
 int data;
 struct node_t * next;
};
typedef struct node_t node;
void free_memory(node*head)
{
 node * temp;
 temp=head;
printf("Freeing up allocated space.....\n");
printf("...........\n");
while(head!=NULL)
    {
 temp=head;
 head = head->next;
 free(temp);
     }
if(head==NULL)
  {
printf("Now list is empty");
  }
}


void swap(node*t1,node*t2)
{
 int t;
  t=t1->data;
  t1->data=t2->data;
  t2->data=t;
}

void sort(node*h)
{
 node*t1;
 node*t2;
 t1=h;
while(t1!=NULL)
{
 t2=t1->next;
 while(t2!=NULL)
 {
   if(t1->data > t2->data)
   swap(t1,t2);
   t2=t2->next;
 }
 t1=t1->next;
}
}

int main()
{
node * head =(node *) malloc(sizeof(node));
node * temp;
temp=head;
int i;
for(i=0;i<5;i++)
{
 int d;
printf("enter data of node %d : ",i+1);
scanf("%d",&d);
temp->data = d;
if(i==4)
  {
   temp->next=NULL;
  }
else
   {
   temp->next = (node *) malloc(sizeof(node));
   temp=temp->next;
    }
}
sort(head);
temp=head;
printf("\nAfter sorting :\n");
printf("\n");
i=1;
while(temp!=NULL)
{
printf("Data of node %d : %d\n",i,temp->data);
temp=temp->next;
i++;
}
printf("\n");
free_memory(head);
return 0;
}