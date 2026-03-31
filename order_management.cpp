#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> orders;
    int choice;
    string order;

    do {
        cout << "\n--- Order Management System ---\n";
        cout << "1. Add Order\n";
        cout << "2. Remove Order\n";
        cout << "3. View Orders\n";
        cout << "4. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter order: ";
                cin >> order;
                orders.push(order);
                cout << "Order added successfully!\n";
                break;

            case 2:
                if (!orders.empty()) {
                    cout << "Removed order: " << orders.top() << endl;
                    orders.pop();
                } else {
                    cout << "No orders to remove!\n";
                }
                break;

            case 3:
                if (orders.empty()) {
                    cout << "No orders available!\n";
                } else {
                    stack<string> temp = orders;
                    cout << "Orders list:\n";
                    while (!temp.empty()) {
                        cout << temp.top() << endl;
                        temp.pop();
                    }
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
