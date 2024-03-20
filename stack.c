#include<stdio.h>
#include<stdlib.h>
struct stack{
int top;
int array;
unsigned n;
};
struct stack* createstack(unsigned n)
{
	struct stack *stack;
	stack=(struct stack *)malloc(sizeof(struct stack));
	stack->n=n;
	stack->top=-1;
	stack->array=(int*)malloc(stack->n * sizeof(int));
	return(stack);
}
int isFull(struct stack *stack)
{
	return stack->top==stack->n-1;

	}
void push(struct stack *stack,int item)
{
	if(isFull(stack))
	return;
	stack->array[++stack->top] = item;
	printf("%d pushed to stack\n",item);

}
int main()
{
	struct stack* stack=createstack(200);
	push(stack,10);
	push(stack,20);
	push(stack,30);
	push(stack,40);
	return 0;
}













