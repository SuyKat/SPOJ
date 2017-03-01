#include <iostream>
#include <stack>
#include <string>
using namespace std;
string InfixToPostfix(string expression);
bool IsOperand(char c);
bool IsOperator(char c);
int getOperatorWeight(char op);

int main ()
{
	string exp;
	int n_ip;
	cin >> n_ip;
	//cout<<"Enter the expression: "<< endl;
	for(int i=0; i<n_ip; i++){
		cin>>exp;
		cout<< InfixToPostfix(exp)<< endl;
	}
    return 0;
}
string InfixToPostfix(string expression){
	stack <char> S;
	string postfix = "";
	for(int i=0; i<expression.length(); i++){
		if(IsOperator(expression[i])){
			if(!S.empty() && S.top() != '(' && (getOperatorWeight(expression[i]) < getOperatorWeight(S.top()))){
				postfix += S.top();
				S.pop();
			}
			S.push(expression[i]);
		}
		else if(IsOperand(expression[i])){
			postfix += expression[i];
		}
		else if(expression[i] == '('){
			S.push(expression[i]);
		}
		else if(expression[i] == ')'){
			while(!S.empty() && S.top() !='('){
				postfix += S.top();
				S.pop();
			}
			S.pop();
		}
	}
	while(!S.empty()) {
		postfix += S.top();
		S.pop();
	}

	return postfix;

}
bool IsOperand(char c){
	if(c >= '0' && c <= '9') return true;
	if(c >= 'a' && c <= 'z') return true;
	if(c >= 'A' && c <= 'Z') return true;
	return false;
}
bool IsOperator(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
		return true;
	return false;
}
int getOperatorWeight(char op){
	int weight = -1;
	switch(op){
		case '+':
			break;
		case '-':	weight = 1;
				break;
		case '*':	weight = 2;
				break;
		case '/':	weight = 3;
				break;
		case '^':	weight = 4;
				break;
	}
	return weight;
}
