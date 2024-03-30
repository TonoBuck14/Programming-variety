`
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2!=NULL){
            return list2;
        }
        if(list1 != NULL && list2==NULL){
            return list1;
        }
        if(list1 == NULL && list2==NULL){
            return list1;
        }

        struct ListNode* res = new ListNode();
        struct ListNode *act1 = list1;
        struct ListNode *act2 = list2;
        struct ListNode* temp0 = new ListNode();
        res->next = temp0;
        while(act1 && act2){

            
            if(act1->val == act2->val){
                    
                    temp0->next = act1;
                  
                    act1 = act1->next;
                    
            }
            else if(act1->val < act2->val){
                temp0->next = act1;
                
                act1 = act1->next;
                
                }
            else{
                temp0->next = act2;
               
                act2 = act2->next;
                }
            temp0 = temp0->next;
            }
        
        if(act1){
                temp0->next = act1;
                
            }
        else{
                temp0->next = act2;
                
            } 
        
        return res->next->next;
        }
   
    
};
`
