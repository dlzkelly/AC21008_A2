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
	return *newNode;
}

void insertOLS(OrderedListSet* ols, int v){
	MyNode *newNode = getNode(v);
	if(ols->size == 0){
		ols->head = newNode;
		ols->tail = newNode;
		ols->size ++;
	}
	else{
		if(containsOLS(ols, v) == true){
			printf("ERROR: A Node already exists with this data value!");
		else{
			if((ols->head)->data > v){
				head = head->next;
				head->data = v;


		
}

/* Report true/false whether 'ols' contains value 'v'. */
bool containsOLS(OrderedListSet* ols, int v){
	myNode* current = ols->head;
	for(i=0; i<(ols->size); i++){
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

int main()
{
}

