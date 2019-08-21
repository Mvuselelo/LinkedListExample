#pragma once
// Gui edition
typedef  char* DataType;

struct node 
{ DataType data;
  node* next;
};

typedef  node*  List;
           
void Init  (List&);
bool IsEmpty (List );
void  Insert (DataType, List&);
void  Delete (DataType, List&); 
void  ShowData (List);
