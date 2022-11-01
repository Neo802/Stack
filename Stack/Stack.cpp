#include "Header.h"

class Stack {
private:
	stack<int> stack;
public:
	Stack() {
		cout << "Constructor initialized";
	}
	~Stack() {
		cout << "Destructor initialized";
		while (!stack.empty()) {
			stack.pop();
		}
	}

	void Delete() {
		stack.pop();
	}

	void Add(int nr) {
		stack.push(nr);
	}

	void ShowTop() {
		cout << "The top most element is: " << stack.top();
	}

	void ShowAll() {
		while (!stack.empty()) {
			cout << stack.top() << endl;
			stack.pop();
		}
	}

    void Reset() {
        while (!stack.empty()) {
            stack.pop();
        }
    }
};

int init() {
    int i;
    int n;
    Stack* stack = new Stack;

    do {
        printf("\n1.Add a number to the stack");
        printf("\n2.Remove the top most number");
        printf("\n3.Show the top most number");
        printf("\n4.Show the whole stack and reset");
        printf("\n5.Reset the whole stack");
        printf("\n7.Exit");
        printf("\n\nYour option: ");
        scanf_s("%d", &i);
        switch (i)
        {
        case 1:
            scanf_s("%d", &n);
            stack->Add(n);
            break;
        case 2:
            stack->Delete();
            break;
        case 3:
            stack->ShowTop();
            break;
        case 4:
            stack->ShowAll();
            break;
        case 5:
            stack->Reset();
            break;
        case 7:
            delete stack;
            return 0;
        }
    } while (i);
	return 0;
}