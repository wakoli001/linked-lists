#include <stdio.h>
#include <stdlib.h>
//define sa structure to hold the data and the pointer of the next node
typedef struct Node{
                  int data;
                struct Node* next;
}Node;
//create a new node to store the values in the list
Node* createNew(int data){
                Node* newNode = (Node*)malloc(sizeof(Node));
                  if(!newNode){
                       printf("Memory allocation error!\n");
                     exit(1);
                     }
        newNode->data = data;
      newNode->next =NULL;

      return newNode;
}
//create a function that is able to print individual nodes in the list
void printList(Node*  node){
while(node){
         printf(" %d ->", node->data);
        node =node->next;

}
printf(" null\n");
}
int main(){
//pass the values in the new created list
      Node* node1 = createNew(34);
      Node* node2 = createNew(35);
      Node* node3 = createNew(36);
      Node* node4 = createNew(37);
      Node* node5= createNew(38);
      Node* node6 = createNew(39);
//increment pointer to point the next created node
  node1->next =node2;
  node2->next =node3;
  node3->next =node4;
  node4->next =node5;
  node5->next =node6;
//call function to print the nodes in the list
 printList(node1);
//now you can free the cells
free(node1);
free(node2);
free(node3);
free(node4);
free(node5);
free(node6);

return 0;
}
