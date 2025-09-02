
#include <iostream>
using namespace std;

int main(){
    //Test Client
    Client c1(1, "Ahmed", "1234", 3000);
    Client c2(2, "Omar", "1234", 2000);

    cout << "---- Clients ----" << endl;
    c1.display();
    c2.display();

    c1.deposit(500);
    c1.withdraw(1000);
    c1.transferTo(500, c2);
    cout << "After transfer: " << endl;
    c1.checkBalance();
    c2.checkBalance();

    // Test Employee
    Employee e1(101, "Mona", "employee", 7000);
    cout << endl;
    cout << "---- Employee ----" << endl;
    e1.display();

    // Test Admin
    Admin a1(201, "Sara", "admin", 10000);
    cout << endl;
    cout << "---- Admin ----"<<endl;
    a1.display();

return 0;
{




