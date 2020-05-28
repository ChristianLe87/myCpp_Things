

#include <iostream>


struct Node{
    public: int number;
    public: Node* nextNode;
};


class List{
    public: Node* firstNode = NULL;
    
    public: void Add(int number){
        
        if(firstNode == NULL){
            // create new node
            Node* newNode = new Node();
            newNode->number = number;
            newNode->nextNode = NULL;
            
            firstNode = newNode;
        }
        else
        {
            // create new node
            Node *newNode = new Node();
            newNode->number = number;
            newNode->nextNode = NULL;
            
            Node* node = firstNode;
            node->nextNode = newNode;
        }
    }
    
};




int main(int argc, const char * argv[]) {
    
    List list;
    list.Add(11);
    list.Add(22);
    //list.Add(33);
    //list.Add(44);
    
    
    Node n1 = *list.firstNode;
    int firstElement = n1.number;
    
    
    Node n2 = *n1.nextNode;
    int secondElement = n2.number;
    
    printf("\n-- end --\n");
    return 0;
}

