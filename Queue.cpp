/*Static Queue Implementation*/

/*
Operations
1.Enqueue
2.Dequeue
3.isEmpty
4.isFull
5.Count
6.Display
7.Clrscr

*/
#include<iostream>
using namespace std;

class Queue{
	private:
		int rear;
		int front;
		int arr[5];
	
	public:
		Queue(){
		
		front=-1;
		rear=-1;
		for(int i=0;i<5;i++){
			arr[i]=0;
		}
	}
	bool isEmpty(){
		if(rear==0 && front==0){
			return true;
		}
		else{
			return false;
		}
	}
	
	bool isFull(){
		if(rear==4){
			return true;
		}
		else{
			return false;
		}
	}
	
	void enqueue(int val){
		if(isFull()){
			cout<<"Queue is full"<<endl;
		}
		else if(isEmpty()){
			rear=0;
			front=0;
			arr[rear]=val;
		}
		else{
			rear++;
			arr[rear]=val;
		}
		}
	
	
	int dequeue(){
		int x;
		if(isEmpty()){
			cout<<"Queue is Empty"<<endl;
		}
		else if(front==rear){
			x=arr[front];
			arr[front]=0;
			rear=-1;
			front=-1;
			return x;
		}
		else{
			x=arr[front];
			arr[front]=0;
			front++;
			return x;
		}
	}
	
	int count(){
		return(rear-front+1);
	}
	
	int display(){
		cout<<"The Queue elements are: "<<endl;
		for(int i=0;i<5;i++){
			cout<<arr[i];
		}
	}
	
};

int main(){
	Queue q;
	int option, value;
	do{
		cout<<"Enter options for doing operations"<<endl;
		cout<<"1.enqueue"<<endl;
		cout<<"2.dequeue"<<endl;
		cout<<"3.isEmpty"<<endl;
		cout<<"4.isFull"<<endl;
		cout<<"5.Count"<<endl;
		cout<<"6.Display"<<endl;
		cout<<"7.ClrScr"<<endl;
		
		cin>>option;
		switch(option){
			case 0: 
				break;
			case 1:
				cout<<"Enter value to be Enqueued: "<<endl;
				cin>>value;
				q.enqueue(value);
				break;
				
			case 2:
				cout<<"Dequeue operation value: "<<q.dequeue()<<endl;
				break;
				
			case 3:
				if(q.isEmpty()){
					cout<<"Queue Empty";
				}
				else{
					cout<<"Queue Not Empty";
				}
				break;
				
			case 4:
				if(q.isFull()){
					cout<<"Queue Full";
				}
				else{
					cout<<"Queue Not Full";
				}
				break;
				
			case 5:
				cout<<"Count op is: "<<q.count()<<endl;
				break;
				
			case 6:
				cout<<"Display function called: "<<endl;
				q.display();
				break;
				
			case 7:
				system("cls");
				break;
				
			default:
				cout<<"Enter valid code"<<endl;
				break;
		}
	}while(option!=0);
	return 0;
}
