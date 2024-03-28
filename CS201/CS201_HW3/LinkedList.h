	#ifndef LINKEDLIST_H
	#define LINKEDLIST_H
	#include "Account.h"
	
	typedef Account ListItemType;


	class LinkedList{
	
	public:
	   LinkedList();                  
	   LinkedList(const LinkedList& aList); 
	   ~LinkedList();  
	   
	   bool isEmpty() const;
	   int getLength() const;
	   bool retrieve(int index, ListItemType& dataItem) const;
	   bool insert(int index, ListItemType newItem);
	   bool remove(int index);
	   
	private:
	
	   struct ListNode{      
	      ListItemType item; 
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
