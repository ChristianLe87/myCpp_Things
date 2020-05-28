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
            Node* node = firstNode;
            
            while (true) {
                if(node->nextNode == NULL){
                    // create new node
                    Node *newNode = new Node();
                    newNode->number = number;
                    newNode->nextNode = NULL;
                    
                    node->nextNode = newNode;
                    break;
                }else{
                    node = node->nextNode;
                }
            }
        }
    }
};




int main(int argc, const char * argv[]) {
    
    List list;
    list.Add(11);
    list.Add(22);
    list.Add(33);
    list.Add(44);
    
    
    Node n1 = *list.firstNode;
    int firstElement = n1.number;
    std::cout<< firstElement << "\n";

    
    Node n2 = *n1.nextNode;
    int secondElement = n2.number;
    std::cout<< secondElement << "\n";
    
    Node n3 = *n2.nextNode;
    int thirdElement = n3.number;
    std::cout<< thirdElement << "\n";
    
    Node n4 = *n3.nextNode;
    int fourthElement = n4.number;
    std::cout<< fourthElement << "\n";
    
    printf("\n-- end --\n");
    return 0;
}

