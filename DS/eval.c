#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100 


char stack[MAX];
int top = -1;  
int evalStack[MAX];
int evalTop = -1;  
void push(char item) { stack[++top] = item; }  
char pop() { return stack[top--]; } 
int isOperator(char ch) { return ch == '+' || ch == '-' || ch == '*' || ch == '/'; }


int precedence(char ch) {
    if (ch == '+' || ch == '-') return 1; 
    if (ch == '*' || ch == '/') return 2;  
    return 0;  
}


void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;  
    while (infix[i] != '\0') {  
        if (isalnum(infix[i])) { 
            postfix[j++] = infix[i]; 
        }
        else if (infix[i] == '(') {  
            push(infix[i]);  
        }
        else if (infix[i] == ')') {  
           
            while (stack[top] != '(') postfix[j++] = pop();
            pop();  
        }
        else if (isOperator(infix[i])) { 
            
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);  
        }
        i++;  
    }
  
    while (top != -1) postfix[j++] = pop();
    postfix[j] = '\0'; 
}


void evalPush(int item) { evalStack[++evalTop] = item; }  

int evalPop() { return evalStack[evalTop--]; }  


int evaluatePostfix(char postfix[], int values[]) {
    for (int i = 0; postfix[i] != '\0'; i++) {  
        if (isalpha(postfix[i])) {  
            evalPush(values[postfix[i] - 'a']); 
        }
        else {  
            int b = evalPop(), a = evalPop();  
            switch (postfix[i]) {
            case '+': evalPush(a + b); break;  
            case '-': evalPush(a - b); break;  
            case '*': evalPush(a * b); break; 
            case '/': evalPush(a / b); break;  
            }
        }
    }
    return evalPop();  
}


int main() {
    char infix[MAX], postfix[MAX]; 
    int values[26], choice;  

    while (1) {  
        printf("\n1. Infix to Postfix\n2. Evaluate Postfix\n3. Exit\nChoice: ");
        scanf("%d", &choice);  

        switch (choice) {
        case 1:
            
            printf("Enter infix expression: ");
            scanf("%s", infix);  
            infixToPostfix(infix, postfix); 
            printf("Postfix: %s\n", postfix); 
            break;

        case 2:
            
            if (postfix[0] == '\0') {  
                printf("No postfix available. Convert infix first.\n");
                break;
            }
          
            for (int i = 0; postfix[i] != '\0'; i++) {
                if (isalpha(postfix[i])) {  
                    printf("Value of %c: ", postfix[i]);
                    scanf("%d", &values[postfix[i] - 'a']); 
                }
            }
        
            printf("Result: %d\n", evaluatePostfix(postfix, values));
            break;

        case 3:
            return 0;  

        default:
            printf("Invalid choice.\n");  
        }
    }
}

