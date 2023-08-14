#include <iostream>
#include <string>
using namespace std;

struct Admin {
    string username;
    string password;
};

// Function to validate admin login credentials
bool isValidAdmin(const Admin & admin, const string & inputUsername, const string & inputPassword) {
    return (admin.username == inputUsername && admin.password == inputPassword);
}

int main() {
    // Create an admin account
    Admin Admin ;
    Admin.username = "Admin";
    Admin.password = "12345";

    // User input variables
    string inputUsername;
    string inputPassword;

    // Prompt user for input
    cout << "Welcome admin to the  Login!" << endl;
    cout << "Username: ";
    cin >> inputUsername;
    cout << "Password: ";
    cin >> inputPassword;

    // Validate login credentials
    if (isValidAdmin(Admin, inputUsername, inputPassword)) {
        cout << "Login successful. Welcome, " << Admin.username << "!" << endl;
        // Add code for admin functionality here
    } else {
        cout << "Invalid username or password. Please try again." << endl;
    }

    return 0;
}
