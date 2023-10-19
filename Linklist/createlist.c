#include<stdio.h>

struct node{
    int data;
    struct node *next;
}*head;

void createList(int n);
void traverseList();
int main(){
    int n;
    printf("How many node you want:");
    scanf("%d",&n);
    createList(n);
    printf("\n\n");
    printf("Data in list:");
    traverseList();
    return 0;
}

void createList(int n){
    struct node *nextNode,*temp;
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("Unable to allocate memory:");
        exit(0);
    }
    printf("Enter the data for node 1:");
    scanf("%d",&data);

    head->data=data;
    head->next=NULL;

    temp=head;
    for(i=2;i<=n;i++){
        nextNode=(struct node*)malloc(sizeof(struct node));
        if(nextNode==NULL){
        printf("Unable to allocate memory:");
        break;
        }
        printf("Enter the data for node %d:",i);
        scanf("%d",&data);
        nextNode->data=data;
        nextNode->next=NULL;

        temp->next=nextNode;
        temp=temp->next;
    }
}

void traverseList(){
    struct node *temp;

    if(head==NULL){
        printf("list is empty");
        return;
    }
    temp=head;
    while(temp!=NULL){
        printf("Data:%d Address of next node:%x\n",temp->data,temp->next);
        temp=temp->next;
    }
    
    
}