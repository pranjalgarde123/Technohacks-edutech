# include <iostream>
using namespace std;

int main() 
{

  char op;
  float n1, n2;

  cout << "Enter the operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter the two operands on which the operation will perform: ";
  cin >> n1 >> n2;

  switch(op) {

    case '+':
      cout <<n1<<"+"<<n2 << " = " << n1+ n2;
      break;

    case '-':
      cout << n1 << " - " << n2 << " = " << n1 - n2;
      break;

    case '*':
      cout << n1 << " * " << n2 << " = " << n1 * n2;
      break;

    case '/':
      cout << n1 << " / " << n2 << " = " << n1 / n2;
      break;

    default:
      cout << "Error! operator is incorrect";
      break;
  }

  return 0;
}

