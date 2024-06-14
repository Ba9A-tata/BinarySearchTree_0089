#include <iostream>
#include <string>
using namespace std;

class Node
 {
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    // contructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node* ROOT;
    
    BinaryTree()
    {
        ROOT = NULL; // Initializing  ROOT to null
    }

    void insert(string element) // insert a node in the binary search tree
    {
        Node* newNode = new Node(element, NULL, NULL); // Allocate memory for the new node
        newNode-> info = element; // Assign value to the data field fo the new node
        newNode-> leftchild = NULL; // Make the left child of the new node point to NULL
        newNode-> rightchild = NULL; // Make the right child of the new node point to NULL

        Node* parrent = NULL;
        Node* currentNode = NULL;
        search(element, parrent, currentNode); // Locate the node wich will be the  parrent of the node to be inserted 

        if (parrent == NULL) // if the parrent is NULL (Tree is empty)
        {
            ROOT = newNode; // Mark the new node as ROOT
            return; // Exit
        }
        if (element < parrent ->info) // if hte value in the data field of the new node is less than that of the parrent
        {
            parrent->leftchild = newNode; // Make the left child of the parrent point to the new node
        }
        else if (element > parrent->info) // if the value in the data field of the new node is greater than that of the parrent
        {
            parrent->rightchild = newNode; // Make the right child of the parrent point to the new node
        }    
    }

    void search(string element, Node*& parrent, Node*& currentNode)
    {
        // This function searches the currentNode of the specified Node as well as the currentNode of its parrent
        currentNode = ROOT;
        parrent = NULL;
        while ((currentNode != NULL) && (currentNode-> info != element))
        {
            parrent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else 
                currentNode = currentNode->rightchild;
        }
    }

    void inorder(Node* ptr)
    {
        if(ROOT = NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }
    void preorder(Node* ptr)
    {
        if(ROOT = NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if ( ptr != NULL)
        {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }
    void postoerder(Node* ptr)
    {
        // Perfoms the postorder traversal of the tree
        {
        if(ROOT = NULL)

            cout << "Tree is empty" << endl;
            return;
        }
        if(ptr != NULL)
        {
            postoerder(ptr->leftchild);
            postoerder(ptr->rightchild);
            cout << ptr->info << " ";
        }
    }
};
int main()
{
    
}