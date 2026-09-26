#include <iostream>
#include <fstream>
using namespace std;

void registerUser()
{
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");
    string u, p;

    while (file >> u >> p)
    {
        if (u == username)
        {
            cout << "Username already exists!\n";
            return;
        }
    }
    file.close();

    ofstream out("users.txt", ios::app);
    out << username << " " << password << endl;
    out.close();

    cout << "Registration successful!\n";
}

void loginUser()
{
    string username, password;
    string u, p;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");

    while (file >> u >> p)
    {
        if (u == username && p == password)
        {
            cout << "Login successful!\n";
            return;
        }
    }

    cout << "Invalid username or password!\n";
}

int main()
{
    int choice;

    while (cin >> choice)
    {
        if (choice == 1)
            registerUser();

        else if (choice == 2)
            loginUser();

        else
            cout << "Invalid choice!\n";
    }

    return 0;
}