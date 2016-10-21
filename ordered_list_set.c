/*
Daniel Kelly
150024764
*/

#include "ordered_list_set.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

OrderedListSet* createOLS(){
	OrderedListSet* ols = malloc(sizeof(OrderedListSet));
	ols->size = 0;
	return ols;
}

MyNode* getNode(int x){
	MyNode *newNode = malloc(sizeof(newNode));
	newNode->data = x;	
	newNode->next = NULL;
	newNode->prev = NULL;
	return *newNode;
}

bool containsOLS(OrderedListSet* ols, int v){
	myNode* current = ols->head;
	for(int i=0; i<(ols->size); i++){
		if(current->data == v){
			return true;
			break;
		}
		else{	
			current = current->next;
		}
	}
	return false;
}

void insertOLS(OrderedListSet* ols, int v){
	MyNode *newNode = getNode(v);
	if(ols->size == 0){
		ols->head = *newNode;
		ols->tail = *newNode;
		ols->size ++;
	}
	else{
		if(containsOLS(ols, v) == true){
			printf("ERROR: A Node already exists with this data value!");
		else{
			if((ols->head)->data > v){
				newNode->next = ols->head;
				(ols->head)->prev = newNode;
				ols->head = *newNode;
			}
			else{
			myNode* current = (ols->head)->next;
			bool inserted = false;
			while(inserted == false){
				if(v > current->data){
					current = current->next;
				}			
				else if(current->data > v){
					newNode->prev = current->prev;
					(current->prev)->next = *newNode;
					current->prev = *newNode;
					newNode->next = current;
					inserted = true;
				}
				else if(v > (ols->tail)->data){
					newNode->prev = ols->tail;
					(ols->tail)->next = *newNode;
					ols->tail = *newNode;
					inserted = true;
				}
					
			}
		}
	}		
		
}

int main()
{
}
