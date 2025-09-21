#include <bits/stdc++.h>
using namespace std;

class TaskNode{
public:
    string taskName;
    TaskNode* next;

    TaskNode(const string &taskName){
        this->taskName = taskName;
        this->next = NULL;
    }
};

void addTask(TaskNode* &head, TaskNode* &tail, const string &task){
    TaskNode* newNode = new TaskNode(task);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteTask(TaskNode* &head, TaskNode* &tail){
    if (head == NULL) {
        cout << "Task is Empty" << endl;
        return;
    }
    TaskNode* temp = head;
    head = head->next;
    if (head == NULL) {
        tail = NULL;
    }
    cout<<"Successfully Deleted"<<endl;
    delete temp;
}

void addTaskAtPosition(TaskNode* &head, TaskNode* &tail, const string &task, int pos){
    if (pos <= 0) {
        cout << "Invalid Position" << endl;
        return;
    }
    if (pos == 1) {
        TaskNode* newNode = new TaskNode(task);
        newNode->next = head;
        head = newNode;
        if (tail == NULL) {
            tail = newNode;
        }
        return;
    }
    TaskNode* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; ++i) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Out of Range"<< endl;
        return;
    }
    TaskNode* newNode = new TaskNode(task);
    newNode->next = temp->next;
    temp->next = newNode;
    if (newNode->next == NULL) {
        tail = newNode;
    }
}

void displayTasks(TaskNode* head){
    int index = 1;
    TaskNode* temp = head;
    while (temp != NULL){
        cout <<"Task " << index <<" is "<< temp->taskName <<endl;
        temp = temp->next;
        index++;
    }
}

int main() {
    TaskNode* head = NULL;
    TaskNode* tail = NULL;
    
    while (true)
    {
        cout<<"Task Manager"<<endl;
        cout<<"1. Add a new task"<<endl;
        cout<<"2. Delete First task"<<endl;
        cout<<"3. Add task at specific position"<<endl;
        cout<<"4. Display "<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Choice: ";
        int choice;
        cin>>choice;

        if (choice == 1){
            cout << "Enter task name: ";
            cin.ignore(); 
            string task;
            getline(cin, task);
            addTask(head, tail, task);
        
        }
        else if (choice == 2){
            deleteTask(head, tail);
        
        }
        else if (choice == 3){
            cout << "Enter position: ";
            int pos;
            cin >> pos;
            cout << "Enter task name: ";
            cin.ignore();
            string task;
            getline(cin, task);
            addTaskAtPosition(head, tail, task, pos);
     
        }
        else if (choice == 4){
            displayTasks(head);
        }
        else if (choice == 5){
            break;
        }

    }
    
    return 0;
}
