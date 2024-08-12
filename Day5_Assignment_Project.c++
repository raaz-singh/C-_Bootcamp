#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int id;
    string department;
    double salary;

public:
    Employee() : name(""), id(0), department(""), salary(0.0) {}

    Employee(string name, int id, string department, double salary)
        : name(name), id(id), department(department), salary(salary) {}

    virtual void getDetails() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void displayDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
    int getId() const {
        return id;
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager() : Employee(), bonus(0.0) {}

    Manager(string name, int id, string department, double salary, double bonus)
        : Employee(name, id, department, salary), bonus(bonus) {}

    void getDetails() override {
        Employee::getDetails();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Bonus: " << bonus << endl;
    }
};

// Main program
int main() {
    vector<Employee*> employees;

    int choice;

    do {
        cout << "\nEmployee Management System";
        cout << "\n1. Add Employee";
        cout << "\n2. Add Manager";
        cout << "\n3. Display Employee Details";
        cout << "\n4. Search Employee by ID";
        cout << "\n5. Update Employee Information";
        cout << "\n6. Delete Employee";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Employee *e = new Employee();
                e->getDetails();
                employees.push_back(e);
                break;
            }
            case 2: {
                Manager *m = new Manager();
                m->getDetails();
                employees.push_back(m);
                break;
            }
            case 3: {
                for (const auto &e : employees) {
                    e->displayDetails();
                    cout << "-------------------" << endl;
                }
                break;
            }
            case 4: {
                int searchId;
                cout << "Enter Employee ID to search: ";
                cin >> searchId;
                bool found = false;
                for (const auto &e : employees) {
                    if (e->getId() == searchId) {
                        e->displayDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found!" << endl;
                }
                break;
            }
            case 5: {
                int updateId;
                cout << "Enter Employee ID to update: ";
                cin >> updateId;
                bool found = false;
                for (auto &e : employees) {
                    if (e->getId() == updateId) {
                        e->getDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found!" << endl;
                }
                break;
            }
            case 6: {
                int deleteId;
                cout << "Enter Employee ID to delete: ";
                cin >> deleteId;
                bool found = false;
                for (auto it = employees.begin(); it != employees.end(); ++it) {
                    if ((*it)->getId() == deleteId) {
                        delete *it;
                        employees.erase(it);
                        found = true;
                        cout << "Employee deleted!" << endl;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found!" << endl;
                }
                break;
            }
            case 7: {
                cout << "Exiting program." << endl;
                break;
            }
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 7);

    for (auto &e : employees) {
        delete e;
    }

    return 0;
}
