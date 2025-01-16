#include <stdio.h>
#define MAX 10

struct stack{
    int arr[MAX];
    int top;
};

void initStack(struct stack* s){
    s->top = -1;
}

int isFull(struct stack* s){
    return s->top == MAX - 1;
}

int isEmpty(struct stack* s){
    return s->top == -1;
}

void push(struct stack* s, int item){
    if (isFull(s)){
        printf("Stack overflow, %d cannot be pushed onto the stack.\n", item);
        return;
    } else {
        s->arr[++(s -> top)] = item;
        printf("%d was pushed onto the stack.\n", item);
    }
}

int pop(struct stack* s){
    if (isEmpty(s)){
        printf("Stack is Empty.\n");
        return -1;
    } else {
        return s->arr[(s->top)--];
    }
}

void display(struct stack *s){
    if (isEmpty(s)){
        printf("Stack is Empty.\n");
    } else {
        printf("Stack Elements.\n");
        for (int i = 0; i < s->top; i++){
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    struct stack s;
    initStack(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    push(&s,40);
    push(&s,40);
    push(&s,40);
    push(&s,40);
    push(&s,40);
    push(&s,40);
    push(&s,40);
    push(&s,40);

    display(&s);

    return 0;
}