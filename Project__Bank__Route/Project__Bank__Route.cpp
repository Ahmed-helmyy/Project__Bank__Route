
#include <iostream>
#include "Admin.h"
using namespace std;

int main() {

    Admin admin1(1, "Ahmed", "1234", 1000);

    cout << "--- Admin Info ---" << endl;
    admin1.display_information();

    //Admin Like Employee
    admin1.NewClient(101, "Ali", "12345", 5000);
    admin1.NewClient(102, "Omar", "12345", 7000);
    admin1.NewClient(103, "Sara", "12345", 9000);
    cout<<endl;
    cout << "--- All Clients ---" << endl;
    admin1.listAllClients();

    cout << "Searching for client with ID = 102" << endl;
    admin1.search(102);

    cout << "Editing client with ID = 103" << endl;
    admin1.editClient(103, "Sara", "12345", 12000);

    cout << "--- All Clients after edit ---" << endl;
    admin1.listAllClients();


    cout << "Testing login:" << endl;
    admin1.login(1, "admin1234");
    admin1.login(1, "wrongpass");

    return 0;
}
