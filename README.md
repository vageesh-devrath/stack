# stacks
## Aim:-Implementation of stacks
### Theory:-
        Stack is an abstract data type with a bounded(predefined) capacity. It is a simple data structure that allows adding and removing elements in a particular order. Every time an element is added, it goes on the top of the stack and the only element that can be removed is the element that is at the top of the stack, just like a pile of objects
1)Stack is an ordered list of similar data type.
2)Stack is a LIFO(Last in First out) structure or we can say FILO(First in Last out).
3)push() function is used to insert new elements into the Stack and pop() function is used to remove an element from the stack. Both insertion and removal are allowed at only one end of Stack called Top.
4)Stack is said to be in Overflow state when it is completely full and is said to be in Underflow state if it is completely empty.
#### Algorithm:-
            1)Start
            2)int stack[size],top=-1;
            3)int push(int x){
                      if(top==size-1){printf("Stack Overflow");}
	                    else{top++;stack[top]=x;}}
            4)int pop(){
                      if(top==-1){printf("Stack Underflow");}
                      else{stack[top]=0;top--;}}
            5)void display(){"Statements"}
            6)int main(){int ch,v,flag=0;
                        while(flag==0){scanf("%d",&ch)};
                        switch(ch){"Statements"}
            7)End
##### Conclusion:-
		From this c program we learnt how to implement a stck in the form of c program.
