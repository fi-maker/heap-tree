#include<iostream>
#include <graphics.h>
#include <string>
#include<conio.h>
#include <queue>
using namespace std;

struct Node {
 int data;
 Node* parent;
 Node* leftChild;
 Node* rightChild;
} *root = NULL;;

void Basic_concept();
void properties();
void example();
void operations();
void time_complexity();
void uses_of_Max_Heap();
void Advantage_disadvantage_of_Max_Heap();
void Limitations();
void quiz();
void swapValues(Node, Node);
void upHeapify(Node);
void downHeapify(Node);
void insertValue(int);
void levelOrderTraversal(Node);
void drawTree(Node*, int , int , int) ;
void drawCircle(int , int , int , int); 
void heaptree();
void tutorial();
void deleteRoot();
void menu();
void levelOrderTraversal(Node* root) {
    if (root == NULL)
     {
       cout<<"Heap not eixted !!!";
	   return;
	  }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        cout << node->data << " ";

        if (node->leftChild != NULL)
            q.push(node->leftChild);
        if (node->rightChild != NULL)
            q.push(node->rightChild);
    }
}

int main() {
    menu();
}

void quiz()
{
	string name;
	string rollno;
	
	cout<<"Enter your name: ";
     cin>>name;
	cout<<"Enter your rollno:";
	cin>>rollno;
	cout<<endl;
	
	int a, b=0;
	string l;
	cout<<"Press 1 to start the quiz."<<endl;
	cin>>a;
	if(a==1)
	{
        cout<<"Q#01: which is data stureture from the following."<<endl;
		cout<<"a.for loop\nb.if statement\nc.Max-heap\nd.arrays"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="c")
		b++;
		cout<<endl;
		
		cout<<"Q#02: In max heap every node should be greater than or equal to there:"<<endl;
		cout<<"a.Adjacent node\nb.Children node\nc.Last node\nd.Root node"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="b")
		b++;
		cout<<endl;
		
		cout<<"Q#03: What is the average time complexity of insertion in Max-Heap tree:"<<endl;
		cout<<"a.O(log n)\nb.O(1)\nc.O(n square)\nd.O(n)"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="a")
		b++;
		cout<<endl;
		
		cout<<"Q#04: What is average time complexity of deletion in Max-heap:"<<endl;
		cout<<"a.O(log n)\nb.O(1)\nc.O(n square)\nd.O(n)"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="b")
		b++;
		cout<<endl;
		
		cout<<"Q#05: Which one of the options are limitations of Max-heap:"<<endl;
		cout<<"a.Limited flexibility\nb.Suboptimal for non-maximum element retrieval\nc.Potential memory overhead\nd.All of these"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="d")
		b++;
		cout<<endl;
		
		cout<<"Q#06: Which one of the option is the property of Max-heap:"<<endl;
		cout<<"a.Maximum element at root\nb.Limited flexibility\nc.All of these\nd.none of above"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="c")
		b++;
		cout<<endl;
		
		cout<<"Q#07: Max-Heap is a ---------- tree."<<endl;
		cout<<"a.Binary search tree\nb.Complete binary tree\nc.binary tree\nd.none of these"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="b")
		b++;
		cout<<endl;
		
		cout<<"Q#08: Which one of the option is the application of Max-heap:"<<endl;
		cout<<"a.Priority queue\nb.Job scheduling\nc.both a and b\nd.none of above"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="c")
		b++;
		cout<<endl;
		
		cout<<"Q#09: Which one of the option is the advantages of max-heap:"<<endl;
		cout<<"a.Efficiently retrieve maximum element.\nb.Facilitates quick sorting (heap sort).\nc.Ideal for priority queue implementation.\nd.All of above"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="d")
		b++;
		cout<<endl;
		
		cout<<"Q#10: Which one of the option is the disadvantages of max-heap:"<<endl;
		cout<<"a.Inefficient for finding non-maximum Elements\nb.Additional memory overhead\nc.Facilitates quick sorting (heap sort).\nd.both a and b"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="d")
		b++;
		cout<<endl;
		
		cout<<"--------------------"<<endl;
		cout<<"Your Score"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"Name: ";
		cout<<name<<endl;
		cout<<"Roll no: ";
		cout<<rollno<<endl;
		cout<<"Score: ";
		cout<<b<<" out of 10";
		cout<<endl;
		cout<<"--------------------"<<endl;
}
}
void Basic_concept()
{
	initwindow(900,500,"Basic Concept");
	
	
	
	readimagefile("Capture01.jpg", 0, 0, 900, 500);
	system("pause");
	closegraph();
	
}

void properties()
{
	initwindow(900,500,"Properties");
	
	
	
	readimagefile("Capture02.jpg", 0, 0, 900, 500);
	system("pause");
	closegraph();
	
}

void time_complexity()
{
   initwindow(900,500,"Time Complexity");
	
	
	
	readimagefile("Capture08.jpg", 0, 0, 900, 500);
	system("pause");
	closegraph();
	
}	

void operations()
{
	initwindow(900,500,"Operations");
	
	
	
	readimagefile("Capture04.jpg", 0, 0, 900, 500);
	system("pause");
	closegraph();
	
}

void uses_of_Max_Heap()
{
	initwindow(900,500,"Applications");
	
	
	
	readimagefile("Capture07.jpg", 0, 0, 900, 500);
	system("pause");
	closegraph();
}

void Advantage_disadvantage_of_Max_Heap()
{
initwindow(900,500,"Advantages and Disadvantadges");
	
	
	
	readimagefile("Capture10.jpg", 0, 0, 900, 500);
	system("pause");
	closegraph();
}

void Limitations()
{
	initwindow(900,500,"Limitation");
	
	
	
	readimagefile("Capture11.jpg", 0, 0, 900, 500);
	system("pause");
	closegraph();
}

void example()
{
	initwindow(900,500,"Example");
	
	
	
	readimagefile("Capture03.jpg", 0, 0, 900, 500);
  	system("pause");
	closegraph();
	
}

void swapValues(Node* node1, Node* node2) {
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}

void upHeapify(Node* node) {
    if (node->parent != NULL) {
            if (node->data > node->parent->data) {
                swapValues(node, node->parent);
                upHeapify(node->parent);
            }
        }
}

void downHeapify(Node* node) {
    Node* target = node;
    if (node->leftChild != NULL) {
        if (node->leftChild->data > target->data) {
            target = node->leftChild;
        }    
    }
    if (node->rightChild != NULL) {
        if (node->rightChild->data > target->data) {
            target = node->rightChild;
        }
    }
    if (target != node) {
        swapValues(node, target);
        downHeapify(target);
    }
}

void insertValue(int value) {
    
	Node* temp = new Node;
	temp->data = value;
    temp->parent = NULL;
    temp->leftChild = NULL;
    temp->rightChild = NULL;
	
	if (root == NULL) {
		root =temp ;
    } else {
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* node = q.front();
            q.pop();

            if (node->leftChild == NULL) {
                node->leftChild = temp;
                node->leftChild->parent = node;
                upHeapify(node->leftChild);
                return;
            } else if (node->rightChild == NULL) {
                node->rightChild = temp;
                node->rightChild->parent = node;
                upHeapify(node->rightChild);
                return;
            } else {
                q.push(node->leftChild);
                q.push(node->rightChild);
              }
        }
    }
}

void deleteRoot(){
    if (root == NULL)
    {
       cout<<"heap eixted !!!";	
	  return;
	}

    Node* lastNode = NULL;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        lastNode = q.front();
        q.pop();

        if (lastNode->leftChild != NULL)
            q.push(lastNode->leftChild);
        if (lastNode->rightChild != NULL)
            q.push(lastNode->rightChild);
    }

    if (lastNode != NULL) {
        swapValues(root, lastNode);

        Node* parent = lastNode->parent;
        if (parent != NULL) {
            if (parent->leftChild == lastNode)
                parent->leftChild = NULL;
            else
                parent->rightChild = NULL;

            downHeapify(root);
        }

        delete lastNode;
    }
}


void heaptree()
{
	int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    
    drawTree(root, getmaxx() / 2, 50, getmaxx() / 4);
    system("pause");
    closegraph();
   
}

void drawTree(Node* ptr, int x, int y, int offsetX) {
    if (ptr != NULL) {
        drawCircle(x, y, 15, ptr->data); 
        delay(500);
        if (ptr->leftChild != NULL) {
            line(x, y + 15, x - offsetX, y + 80);
            drawTree(ptr->leftChild, x - offsetX, y + 80, offsetX / 2);
        }
        if (ptr->rightChild != NULL) {
            line(x, y + 15, x + offsetX, y + 80);
            drawTree(ptr->rightChild, x + offsetX, y + 80, offsetX / 2);
        }
    }
}

void drawCircle(int x, int y, int radius, int value) {
    circle(x, y, radius);
	char buffer[10];
    itoa(value, buffer, 10);
    outtextxy(x - 5, y - 5, buffer);
    delay(500); 
}

void menu()
{
	while(1)
    {
    	int a;
    	cout<<"--------------------------"<<endl;
    	cout<<"WELCOME TO MAX-HEAP TUTORIAL"<<endl;
    	cout<<"--------------------------"<<endl;
		cout<<"1. Basic Concept"<<endl;
		cout<<"2. Properties of Max-Heap"<<endl;
		cout<<"3. User Representation"<<endl;
		cout<<"4. Operations on Max-Heap"<<endl;
		cout<<"5. Time Complexity"<<endl;
        cout<<"6. Applications of Max-Heap"<<endl;
		cout<<"7. Advantages and disadvantages of Max-Heap"<<endl;
		cout<<"8. Limitations"<<endl;
		cout<<"9. Representation in Memory"<<endl;
		cout<<"10. How it works?:insertion"<<endl;
		cout<<"11. See your inserted Tree"<<endl;
		cout<<"12. Quiz"<<endl;
		cout<<"13. How it works?:delete root"<<endl;
		cout<<"14. exit"<<endl;
		cout<<"---------------------------"<<endl;
    	cout<<"Enter your choice:";
    	cin>>a;
    	switch(a)
    	{
    		case 1:
    			Basic_concept();
    			
    			break;
    		case 2:
				properties();
				break;
			case 3:
				example();
				break;
			case 4:
				operations();
				break;
			case 5:
				time_complexity();
                break;
			case 6:
			   uses_of_Max_Heap();
                break;
            case 7:
            	Advantage_disadvantage_of_Max_Heap();
			    break; 
            case 8:
            	Limitations();
			 
			 break;   
			case 9:
			    cout << "Memory Representation: ";
                levelOrderTraversal(root);
                cout << endl;
                break;
			case 10:
				int value,no;
				cout<<"Enter no of nodes:";
				cin>>no;
				for(int i=1;i<=no;i++)
				{
			    cout << "Enter "<<i<<" value to insert: ";
                cin >> value;
                insertValue(value); 
                }
				break;
			case 11:
				heaptree();
				break;
				
			case 12:
				 quiz();
				break;
				
			case 13:
			 	deleteRoot();
                cout << "Root deleted.\n";
                break; 
                
			case 14:
				exit(1);
				break;
					   
			default:
				cout<<"Please enter right choice.";
				break;
			
		}
	}
}
