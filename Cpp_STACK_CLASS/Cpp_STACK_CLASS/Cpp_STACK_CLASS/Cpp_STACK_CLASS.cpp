

#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> name;

public:
    
    void push(int number) {
        name.push_back(number);
        cout << "Pushed"<<endl;
    }
    int pop() {
        if (name.size() > 0) {
            int poppedValue = name.back();
            name.pop_back();
            cout << "Popped " << poppedValue << endl;
            return poppedValue;
        }
        else {
            cout << "Stack is empty. Cannot pop." << endl;
            return 0; 
        }
        }
    void display() const {
        for (int num : name) {
            cout << num << " ";
        }
        cout << endl;
    }

};


int main()
{
    Stack stack;
    
    int command;
    int push_number;

    while (true) {

        cout << "0: Exit" << endl;
        cout << "1: Push" << endl;
        cout << "2: Pop" << endl;
        cout << "3: Display" << endl;
        cout << "Press command" << endl;
        cout << "      " << endl;
        cin >> command;
        cout << "      " << endl;
        switch (command) {

        case 1:
            cout << "Push a number" << endl;
            cin >> push_number;
            stack.push(push_number);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            cout << "Stack contents: ";
            stack.display();
         
            cout << endl;
            break;
        case 0:
            return 0;

        }
        cout << endl;
    }
}

