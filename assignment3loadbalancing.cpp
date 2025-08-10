#include <iostream>
using namespace std;

void hash_request() {
    int server, server_index, ID;
    cout << "Enter the total number of servers: ";
    cin >> server;
    cout << "Enter your request ID: ";
    cin >> ID;
    server_index = ID % server;
    cout << "Your request is accepted by Server: " << server_index << endl;
}

int main() {
   
    char q;

    while (1) {
        hash_request();
       
       
        cout << "Do you want to continue? Enter option:" << endl;
        cout << "1) Enter 'Y' for Yes." << endl;
        cout << "2) Enter 'n' or 'N' for Exit" << endl;
        cin >> q;
        if(q=='n'||q=='N'){
break;
}

    }

   
    return 0;
}

