
#include <iostream>
#include "Admin.h"
using namespace std;

int main() {
    Admin admin1(1, "Ahmed", "admin1234", 6000);

    admin1.display_information();

    admin1.newClient(101, "Ali", "clientpass1", 5000);
    admin1.newClient(102, "Omar", "clientpass2", 7000);
    admin1.newClient(103, "Sara", "clientpass3", 9000);

    cout << endl << "--- All Clients ---" << endl;
    admin1.listAllClients();

    cout << endl << "Searching for client with ID = 102" << endl;
    admin1.searchClient(102);

    cout << endl << "Editing client with ID = 103" << endl;
    admin1.editClient(103, "Sara", "newpass123", 12000);

    cout << endl << "--- All Clients after edit ---" << endl;
    admin1.listAllClients();

    cout << endl << "Testing login:" << endl;
    admin1.login(1, "admin1234");
    admin1.login(1, "wrongpass");

    return 0;
}
