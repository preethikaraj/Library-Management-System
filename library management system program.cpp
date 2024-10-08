#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library {
    public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main() {
    Library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3) {
        cout << "Enter 1 to input details like id, name, author, student, price, pages" << endl;
        cout << "Enter 2 to display details" << endl;
        cout << "Enter 3 to quit" << endl;
        cin >> input;

        switch (input) {
            case 1:
                cout << "Enter Book Id" << endl;
                cin >> lib[count].id;
                cin.ignore(); // To clear the newline left in the buffer

                cout << "Enter Book Name (end input with $)" << endl;
                cin.getline(lib[count].name, 100, '$');
                cin.ignore(); // To clear the '$'

                cout << "Enter Book Author (end input with $)" << endl;
                cin.getline(lib[count].author, 100, '$');
                cin.ignore(); // To clear the '$'

                cout << "Enter Student Name (end input with $)" << endl;
                cin.getline(lib[count].student, 100, '$');
                cin.ignore(); // To clear the '$'

                cout << "Enter Book Price" << endl;
                cin >> lib[count].price;

                cout << "Enter Book Pages" << endl;
                cin >> lib[count].pages;

                count++;
                break;

            case 2:
                for (int i = 0; i < count; i++) {
                    cout << "Book Id: " << lib[i].id << endl;
                    cout << "Book Name: " << lib[i].name << endl;
                    cout << "Book Author: " << lib[i].author << endl;
                    cout << "Student Name: " << lib[i].student << endl;
                    cout << "Book Price: " << lib[i].price << endl;
                    cout << "Book Pages: " << lib[i].pages << endl;
                    cout << "-------------------------" << endl;
                }
                break;

            case 3:
                exit(0);

            default:
                cout << "You have entered the wrong value, please type again." << endl;
        }
    }

    return 0;
}
