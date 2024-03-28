	   #include "LinkedList2.h"
	   #include <cstddef>     

	   LinkedList2::LinkedList2()	{
			head = NULL;
			size = 0;
	   }                 
	   
	   LinkedList2::LinkedList2(const LinkedList2& aList):size(aList.size){
			if (aList.head == NULL)
				head = NULL;  // original list is empty
			else {
				// copy first node
				head = new ListNode;
				head->item = aList.head->item;
				// copy rest of list
				ListNode *newPtr = head;  // new list ptr

				for (ListNode *origPtr = aList.head->next;
								origPtr != NULL;
								origPtr = origPtr->next){
					newPtr->next = new ListNode;
					newPtr = newPtr->next;
					newPtr->item = origPtr->item;
				}
				newPtr->next = NULL;
			}
		}  
	   
	   
	   LinkedList2::~LinkedList2()	{
			ListNode* current;
			while(size > 0){
				current = head;
				head = head->next;
				delete current;
				size = size - 1;
			}
	   }
	   
	   bool LinkedList2::isEmpty() const	{
	   		return size == 0;	
	   }
	   
	   int LinkedList2::getLength() const	{
			return size;
	   }
	   
	   bool LinkedList2::retrieve(int index, ListItemType2& dataItem) const	{
			if ((index < 1) || (index > getLength()))
				return false;
			ListNode *cur = find(index);
			dataItem = cur->item;

			return true;
	   }
	   
	   bool LinkedList2::insert(int index, ListItemType2 newItem)	{
				
			int newLength = getLength() + 1;

			if ((index < 1) || (index > newLength))
				return false;

			ListNode *newPtr = new ListNode;
			size = newLength;
			newPtr->item = newItem;

			if (index == 1){
				newPtr->next = head;
				head = newPtr;
			}
			else{
				ListNode *prev = find(index-1);
				newPtr->next = prev->next;
				prev->next = newPtr;
			}
			return true;

	   }
	   
	   bool LinkedList2::remove(int index)	{
			ListNode *cur;

			if ((index < 1) || (index > getLength()))
				return false;

			--size;
			if (index == 1){
				cur = head;  
				head = head->next;
			}
			else{
				ListNode *prev = find(index-1);
				cur = prev->next;
				prev->next = cur->next;
			}
			cur->next = NULL;
			delete cur;
			cur = NULL;
			
			return true;

	   }
	   
	
		

	   

               
