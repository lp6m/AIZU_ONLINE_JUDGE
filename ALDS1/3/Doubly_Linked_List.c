#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int key;
	struct node *next;
	struct node *prev;
};

typedef struct node * NodePointer;

NodePointer nil;

void init(){
	nil = (struct node*)malloc(sizeof(struct node));
	nil -> next = nil;
	nil -> prev = nil;
}

void printList(){
	struct node *p;
	for(p = nil -> next; p != nil;p = p -> next){
		if(p != nil -> prev){
			printf("%d ", p -> key);
		}else if(p == nil -> prev){
			printf("%d\n", p -> key);
		}
	}
}

void deleteNode(NodePointer t){
	if(t -> prev == nil){//deleteFirst
		nil -> next = t -> next;
		t -> next -> prev = nil;
		free(t);
	}else if(t -> next == nil){//deleteLast
		nil -> prev = t -> prev;
		t -> prev -> next = nil;
		free(t);
	}else{
		t -> prev -> next = t -> next;
		t -> next -> prev = t -> prev;
		free(t);
	}
}

void deleteFirst(){
	NodePointer t = nil -> next;
	if(t == nil) return;
	deleteNode(t);
}

void deleteLast(){
	NodePointer t = nil -> prev;
	if(t == nil) return;
	deleteNode(t);
}

void del(int key){
	struct node *p;

	if(nil -> key == key){
		deleteFirst();
		return;
	}
	for(p = nil -> next;p != nil;p = p -> next){
		if(p -> key == key){
			deleteNode(p);
			return;
		}
	}
}

void insert(int key){
	NodePointer x;
	x = (struct node*)malloc(sizeof(struct node));
	x -> key = key;

	//when data has nil only
	if(nil -> next == nil){
		nil -> prev = x;
	}

	//set pointer
	x -> next = nil -> next;
	x -> prev = nil;
	//change nil pointer
	nil -> next -> prev = x;
	nil -> next = x;
}

int main(void){
	int key,n,i;
	char com[200];
	scanf("%d", &n);

	init();

	for(i = 0;i < n;i++){
		scanf("%s", com);
		if(com[0] == 'i'){
			scanf("%d", &key);
			insert(key);
		}else if(com[0] == 'd'){
			if(strlen(com) > 6){
				if(com[6] == 'F') deleteFirst();
				else if(com[6] == 'L') deleteLast();
			}else{
				scanf("%d", &key);
				del(key);
			}
		}
	}

	printList();
	return 0;
}