/* Stack Implementation
	
	push
	pull
	isEmpty
	isFull
	Peek
	Count
	Change
	Display
	Clear

*/
#include<iostream>
#include<string>
using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
	
	public:
		Stack()
		{
			top=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		
	bool isEmpty(){
		if(top==-1) 
			return true;
		else 
			return false;
	}
	
	bool isFull(){
		if(top==4) return true;
		else 
			return false;
	}
	
	void push(int val){
		if(isFull()){
			cout<<"Stack is Full. Cannot push values anymore without popping"<<endl;
		}
		else{
			top++;
			arr[top]=val;
		}
	}
	
	int pop(){
		if(isEmpty()){
			cout<<"Stack is empty. No values to be popped"<<endl;
		}
		else{
			int x=arr[top];
			arr[top]=0;
			top--;
			return x;
			}
		}
		
	int peek(int pos){
		if(isEmpty()){
			cout<<"Stack is empty. No elements to point"<<endl;
		}
		else{
			return arr[pos];
		}
	}
	int count(){
		return (top+1);
	}
	
	int change(int pos, int val){
		arr[pos]=val;
		cout<<"the value changed at pos "<<pos<<endl;
	}
	
	void display(){
		cout<<"Values in Stack are: "<<endl;
		for(int i=0;i<5;i++){
			cout<<arr[i]<<endl;
		}
	}
};





int main(){
//Stack main;	
	Stack s;
	int option, position, value;
	
	do{
		cout<<"Choose operation to be performed"<<endl;
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. isEmpty"<<endl;
		cout<<"4. isFull"<<endl;
		cout<<"5. change"<<endl;
		cout<<"6. peek"<<endl;
		cout<<"7. count"<<endl;
		cout<<"8. display"<<endl;
		cout<<"9. clrScr"<<endl;
		
		
		
		
		cin>>option;
		switch(option){
			case 1: 
					cout<<"Enter item for push";
					cin>>value;
					s.push(value);
					break;
					
				
			case 2:
					cout<<"Pop function retrieves "<<s.pop()<<endl;
					break;
			
			case 3:
					if(s.isEmpty()){
						cout<<"Stack is empty"<<endl;
					}
					else{
						cout<<"Stack is not empty"<<endl;
					}
					break;
			
			case 4:
					if(s.isFull()){
						cout<<"Stack is Full"<<endl;
					}
					else{
						cout<<"Stack is not Full"<<endl;
					}
					break;
			
			case 5:
					cout<<"Enter pos to be changed"<<endl;
					cin>>position;
					cout<<"Enter value to be changed"<<endl;
					cin>>value;
					s.change(position, value);
					break;
			
			case 6:
					cout<<"Enter position you want to retrieve"<<endl;
					cin>>position;
					cout<<"The value is "<<s.peek(position)<<endl;
					break;
					
			case 7:
					cout<<"The count of Stack elements: "<<s.count()<<endl;
					break;
			
			case 8: 
					cout<<"Display"<<endl;
					s.display();
					break;
					
			case 9: 
					system("cls");
					break;
					
			default: 
					system("cls");
		}
		
	}while(option!=0);
	return 0;
}
