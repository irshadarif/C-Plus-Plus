/* arithmatic operation by switch */
# include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "Enter two operands: \n";
    cin >> num1 >> num2;
    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
        	if (num2 == 0)
        		cout<<"Division by zero"<<endl;
            cout << num1/num2;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }
}
