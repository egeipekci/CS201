#include<string>
using std::string;

typedef string StackItemType;

class Stack{

public:
   Stack();
   Stack(const Stack& aStack);
   ~Stack();

   bool isEmpty() const;
   bool push(StackItemType newItem);
   bool pop();
   bool pop(StackItemType& stackTop);
   bool getTop(StackItemType& stackTop) const;
   string getTop();
   string pop2();
private:
   struct StackNode {            
      StackItemType item;        
      StackNode    *next;       
      
   };

   StackNode *topPtr;     
   
};

