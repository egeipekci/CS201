#include"AlgebraicExpression.h"


int precedence(string operato){
    if(operato == "*" || operato == "/"){
        return 2;
    }
    else if(operato ==  "+" || operato == "-"){
        return 1;
    }
    return 0;
}

// It converts an infix expression exp to its equivalent postfix form .
string infix2postfix ( const string exp )   {
   Stack stk;
    int i = 0;
    int k = 0;
    int positionOfspaceBefore= 0;
    string postFix = "";
    while(i < exp.length()){
        string next;
        string current;
        if(exp[i] == ' '  || i == (exp.size() - 1)){
            if(k == 0){
                next = exp.substr(positionOfspaceBefore,i);
                positionOfspaceBefore = i;
                k = k + 1;
            }
            else if( i == exp.size() - 1){
                next = exp.substr(positionOfspaceBefore + 1,i - positionOfspaceBefore);
            }
            else{
                next = exp.substr(positionOfspaceBefore + 1,i - positionOfspaceBefore - 1);
                positionOfspaceBefore = i;
            }
           

            if(next == "("){
                stk.push(next);
            }
            else if(next == ")"){
                if(!stk.isEmpty()){
                    while(stk.getTop() != "("){
                      
                        postFix = postFix + " " + stk.pop2();
                    }
                stk.pop();
                }
            }
            else if(next =="*" || next == "/" || next == "+" || next == "-"){
                while(!stk.isEmpty() && stk.getTop() != "(" && precedence(next) <= precedence(stk.getTop())){
                    postFix = postFix + " " + stk.pop2();
                }
                stk.push(next);
            }
            else{
                if( postFix == ""){
                    postFix = postFix + next;
                }
                else{
                    postFix = postFix + " " + next;
                }
            }
        }
        i = i + 1;
    }
    while(!stk.isEmpty()){
        postFix = postFix + " " + stk.pop2();
    }
    return postFix;
}



// It evaluates a postfix expression .
double evaluatePostfix ( const string exp ) {
   Stack stk;
    int i = 0;
    int k = 0;
    int positionOfspaceBefore= 0;
    string postFix = "";
    while(i < exp.length()){
        string next;
        string current;
        string operand1 ="";
        string operand2 = "";
        //double result;
        if(exp[i] == ' '  || i == (exp.size() - 1)){
            if(k == 0){
                next = exp.substr(positionOfspaceBefore,i);
                positionOfspaceBefore = i;
                k = k + 1;
            }
            else if( i == exp.size() - 1){
                next = exp.substr(positionOfspaceBefore + 1,i - positionOfspaceBefore);
            }
            else{
                next = exp.substr(positionOfspaceBefore + 1,i - positionOfspaceBefore - 1);
                positionOfspaceBefore = i;
            }
            if(next =="*" || next == "/" || next == "+" || next == "-"){
                if((!stk.isEmpty()))
                    operand1 = stk.pop2();
                if(!stk.isEmpty())
                    operand2 = stk.pop2();
                double num1 = strtod(operand1.c_str(), NULL);
                double num2 = strtod(operand2.c_str(), NULL);
                double result;
                if(next == "+"){
                    result = num1 + num2;
                }
                else if(next == "/")
                    result = ( num2 ) / ( num1 );
                else if(next == "-")
                    result = num2 - num1;
                else
                    result = num1 * num2;
        
            string strRes;          
            ostringstream temp;  
            temp << result;
            strRes = temp.str();
            stk.push(strRes);
            }
            else{
                stk.push(next);
            }
        }
        i = i + 1;
    }
   
    double result = strtod(stk.getTop().c_str(), NULL);
    return result;

}
