	#ifndef LIST_H
	#define LIST_H
	#include "Customer.h"
	
	//typedef int ListItemType;
	//typedef char ListItemType;
	
	typedef  Customer ListItemType2;
	
	class LinkedList2{
	
	public:
	   LinkedList2();                  
	   LinkedList2(const LinkedList2& aList); 
	   ~LinkedList2();  
	   
	   bool isEmpty() const;
	   int getLength() const;
	   bool retrieve(int index, ListItemType2& dataItem) const;
	   bool insert(int index, ListItemType2 newItem);
	   bool remove(int index);
	   
	private:
	
	   struct ListNode{      
	      ListItemType2 item; 
	      ListNode *next;    
	   };
	
	

	   int       size;  
	   ListNode* head;  
	
	
	   ListNode* find(int index) const	{
			
			if ( (index < 1) || (index > getLength()) )
				return NULL;
			
			else{ 
				ListNode *cur = head;
				for (int skip = 1; skip < index; ++skip)
					cur = cur->next;
				return cur;
			}

	   }
	   
	};

	 
	#endif
