#include <stdio.h>
#define SIZE 50           
char s[SIZE];
int top = -1; 

char push(char elem) { 
 s[++top] = elem;
}

char pop() { 
 return (s[top--]);
}

int pr(char elem) { 
 switch (elem) {
 
 case '(':
  return 1;
 case '+':
 case '-':
  return 2;
 case '*':
 case '/':
  return 3;
 }
}

main() { 
 char infx[50], pofx[50], ch, elem;
 int i = 0, k = 0;
 printf("\n\nRead the Infix Expression : ");
 scanf("%s", infx);
 push('#');
 while ((ch = infx[i++]) != '\0') 
{
  if (ch == '(')
   push(ch);
  else if (isalnum(ch))
   	pofx[k++] = ch;
  	else if (ch == ')') 
		{
   		while (s[top] != '(')
    			pofx[k++] = pop();
   		elem = pop(); 
 		 } 
		else { 
  			 while (pr(s[top]) >= pr(ch))
    				pofx[k++] = pop();
   			push(ch);
  			}
}
 while (s[top] != '#') 
 pofx[k++] = pop();
 pofx[k] = '\0'; 
 printf("\n\nGiven Infix Expn: %s  Postfix Expn: %s\n", infx, pofx);
 
}


