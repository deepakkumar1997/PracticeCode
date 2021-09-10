// program for inserting data into singly linked list and displayig them on stdout
#include<iostream>
#include<stdlib.h>
using namespace std;
/*
// Structure of a student
struct student{
    int roll;
    string name;
    string stream;
    struct student *next;
};

// Creating a new student node
struct student* createStudent(){
    return (struct student*)malloc(sizeof(struct student));
}

// Creating function for inserting element at start, end & at a pos
struct student* insertAtEnd(struct student *head){
    struct student *node, *temp;
    node = createStudent();
    cout<<"Enter roll number : ";
    cin>>node->roll;
    cout<<"Enter name : ";
    cin>>node->name;
    cout<<"Enter stream : ";
    cin>>node->stream;
    node->next = NULL;
    if(head==NULL){
        head = node;
    }
    else{
        temp = head;
        while(temp!=NULL){
            temp = temp->next;
        }
        temp = node;
    }
    return head;
}

//Display all elements of list
void display(struct student *head){
    struct student *temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->roll;
        cout<<"  "<<temp->name;
        cout<<"  "<<temp->stream<<endl;
        temp = temp->next;
    }
}

int menu(){
    int ch;
    cout<<"1. Insert \n";
    cout<<"2. Display \n";
    cout<<"3. exit \n";
    //cout<<"4. Insert \n";
    cout<<"Enter your choice : ";
    cin>>ch;
    return ch;
}
*/
int main(int argc, char const *argv[])
{
    //struct student *head = NULL;
    cout<<"What's happening";
    /*while(1){
        switch (menu())
        {
        case 1:
            head = insertAtEnd(head);
            cout<<"New Student is created and linked to list\n";
            break;
        case 2:
            display(head);
            break;
        case 3:
            exit(1);
        default:
            cout<<"Invalid choice! Please enter a valid choice!";
            break;
        }        
        getchar();
        getchar();
    }*/
    return 0;
}