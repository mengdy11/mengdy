#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;
class Item {
protected:
    string name;
    float price;
    int quantity;

public:
    Item(const string& n, float p, int q) :
     name(n), price(p), quantity(q) {}

    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "Price (USD): $" << fixed << setprecision(2) << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total cost (USD): $" << fixed << setprecision(2) << calculateTotalCost() << endl;
    }

    float calculateTotalCost() const {
        return price * quantity;
    }

    void inputDetails() {
        cout << "Enter quantity: ";
        while (!(cin >> quantity) || quantity < 0) {
            cout << "Invalid quantity. Please enter a non-negative integer: ";
            cin.clear();
        }
    }
};

class Stationery : public Item {
public:
    Stationery(const string& n, float p, int q) : Item(n, p, q) {}

    void display() const override {
        Item::display();
    }
};

class SouvenirItem : public Item {
public:
    SouvenirItem(const string& n, float p, int q) : Item(n, p, q) {}

    void display() const override {
        Item::display();
    }
};

class SportsEquipment : public Item {
public:
    SportsEquipment(const string& n, float p, int q) : Item(n, p, q) {}

    void display() const override {
        Item::display();
    }
};
const string RESET = "\033[0m";
const string GREEN = "\033[32m";
const string RED = "\033[31m";
void login() {
    string username;
    int password;
       cout << GREEN << "\t======================[Login]===================" << RESET << endl;
    cout << "\tEnter username: ";
    cin >> username;

    cout << RED << "\tEnter password: " << RESET;
    cin >> password;

}

void IBC_Bookstore() {
    cout << "\t------------------------[IBC BOOK Store]------------------------\n";
    cout << "\t1. Stationery\n";
    cout << "\t2. Study Materials\n";
    cout << "\t3. Sports Equipment Store\n";
    cout << "\t4. Souvenirs\n";
    cout << "\t5. Books of All Kinds\n";
    cout << "\t6. Exit\n";
}

void Stationery_Store() {
  cout << "\t------------------------[Floor and Row]------------------------\n";
    cout << "\t1. Fis_Floor1_Ranga1\n";
    cout << "\t2. Fis_Floor1_Ranga2\n";
    cout << "\t3. Fis_Floor1_Ranga3\n";
    cout << "\t4. Enter \n";
    
}

bool additionalOptions() {
    int choice;
    cout << "\n\t1. Choose more options\n";
    cout << "\t2. Proceed to checkout\n";
    cout << "\tChoose your option: ";
    cin >> choice;

    switch (choice) {
        case 1:
            Stationery_Store();
            return true; 
        case 2:
            cout << "\tProceeding to checkout...\n";
            return false;
        default:
            cout << "\tInvalid choice! Returning to menu.\n";
            return true; 
    }
}
void handleFis_Floor1_Ranga1() {
cout << "\t------------------------[Row 1_Telegraph 101]------------------------\n";
    cout << "\t1. Rubber Stamp      = $5\n";
    cout << "\t2. Stapler           = $10\n";
    cout << "\t3. Eraser            = $5\n";
    cout << "\t4. Push-pin          = $2\n";
    cout << "\t5. Drawing Pin (U.K.)= $2\n";
    cout << "\t6. Paper Clips       = $3\n";
    cout << "\t7. Highlighters      = $4\n";
    cout << "\t8. Fountain Pen      = $15\n";
    cout << "\t9. Pencil            = $0.5\n";
    cout << "\t10. Marker           = $3\n";
    
    int choice;
    cout << "Enter your choice (1-10): ";
    while (!(cin >> choice) || choice < 1 || choice > 10) {
        cout << "Invalid choice. Please enter a number between 1 and 10: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
    
    string name;
    double price;
    switch (choice) {
        case 1: name = "Rubber Stamp"; price = 5.0; break;
        case 2: name = "Stapler"; price = 10.0; break;
        case 3: name = "Eraser"; price = 5.0; break;
        case 4: name = "Push-pin"; price = 2.0; break;
        case 5: name = "Drawing Pin"; price = 2.0; break;
        case 6: name = "Paper Clips"; price = 3.0; break;
        case 7: name = "Highlighters"; price = 4.0; break;
        case 8: name = "Fountain Pen"; price = 15.0; break;
        case 9: name = "Pencil"; price = 0.5; break;
        case 10: name = "Marker"; price = 3.0; break;
    }

    Stationery item(name, price, 0);
    item.inputDetails();
    item.display();

    additionalOptions();
}
void handleFis_Floor1_Ranga2() {
   cout << "\t------------------------[Row 2, Telegraph 201]------------------------\n";
    cout << "\t1. Artwork            =3$\n";
    cout << "\t2. Jewelry            =4$\n";
    cout << "\t3. Ceramics          =6$\n";
    cout << "\t4. Music             =4$\n";
    cout << "\t5. Books            =3$\n";
    cout << "\t6. Miniature Landmarks        =10$\n";
    cout << "\t7. Glue              =2$\n";
    cout << "\t8.Local Beverages          =3$\n";
    cout << "\t9. Calendars      =3$\n";
    cout << "\t10. Papers           =5$\n";
     int choice;
    cout << "Enter your choice (1-10): ";
    cin >> choice;

    string name;
    double price;
         switch (choice) {
    
        case 1: name = "Artwork "; price = 3.0; break;
        case 2: name = "Jewelry "; price = 4.0; break;
        case 3: name = "Ceramics"; price = 6.0; break;
        case 4: name = "Music"; price = 4.0; break;
        case 5: name = "Label"; price = 3.0; break;
        case 6: name = "Miniature Landmarks"; price = 10.0; break;
        case 7: name = "Textiles"; price = 2.0; break;
        case 8: name = "Local Beverages"; price = 3.0; break;
        case 9: name = "Calendars"; price = 3.0; break;
        case 10: name = "Local Spices or Teas"; price = 5.0; break;
        
          cout << "Exiting...\n";
            return;
        default: 
            cout << "\tInvalid choice!\n";
            return;
    }
    Stationery item(name, price, 0);
    item.inputDetails();
    item.display();
    
    additionalOptions();
    
}
void handleFis_Floor1_Ranga3() {
     int footballChoice;
    float price = 0.0;
cout << "\t------------------------[Row 3, Telegraph 301]------------------------\n";
    cout << "\t1. Notebook          =6$\n";
    cout << "\t2. Envelope          =1$\n";
    cout << "\t3. Clipboard         =5$\n";
    cout << "\t4. Fax               =3$\n";
    cout << "\t5. Filing Cabinet    =5$\n";
    cout << "\t6. Telephone         =20$\n";
    cout << "\t7. Swivel Chair      =70$\n";
    cout << "\t8. Desk              =69$\n";
    cout << "\t9. Wastebasket       =2$\n";
    cout << "\t10. Enter    \n";

    int choice;
    cout << "Enter your choice (1-10): ";
    cin >> choice;

    string name;
switch (choice) {
        case 1: name = "Notebook"; price = 6.0; break;
        case 2: name = "Envelope"; price = 1.0; break;
        case 3: name = "Clipboard"; price = 5.0; break;
        case 4: name = "Fax"; price = 30.0; break;
        case 5: name = "Filing Cabinet"; price = 50.0; break;
        case 6: name = "Telephone"; price = 20.0; break;
        case 7: name = "Swivel Chair"; price = 70.0; break;
        case 8: name = "Desk"; price = 69.0; break;
        case 9: name = "Wastebasket"; price = 2.0; break;
        case 10: 
            cout << "Exiting...\n";
            return;
        default: 
            cout << "\tInvalid choice!\n";
            return;
    }

       Stationery item(name, price, 0);
    item.inputDetails();
    item.display();
    
    additionalOptions();
}
void displayMenu() {
    cout << "\t------------------------[Main Menu]------------------------\n";
    cout << "\t1. Floor1 Range1\n";
    cout << "\t2. Floor1 Range2\n";
    cout << "\t3. Floor1 Range3\n";
    cout << "\t4. Exit\n";
}

void study_Materuala() {
    cout << "\t------------------------[Floor and Row]------------------------\n";
    cout << "\t1. Fis_Floor2_Ranga1\n";
    cout << "\t2. Fis_Floor2_Ranga2\n";
    cout << "\t3. Fis_Floor2_Ranga3\n";
    cout << "\t4. Exit\n";
}
void again2() {
    int choice;
    cout << "\n\t1. Choose more options\n";
    cout << "\t2. Proceed to checkout\n";
    cout << "\tChoose your option: ";
    while (!(cin >> choice) || (choice != 1 && choice != 2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice! Please choose 1 or 2: ";
    }

    switch (choice) {
        case 1:
            Stationery_Store();
            break;
        case 2:
            cout << "\tProceeding to checkout...\n";
            exit(0);
    }
}
void handleFis_Floor2_Ranga1() {
    cout << "\t------------------------[Row 3_Telegraph 301]------------------------\n";
    cout << "\t1. Maps                          = $1\n";
    cout << "\t2. Handmade Dolls or Figurines    = $10\n";
    cout << "\t3. Posters                        = $3\n";
    cout << "\t4. Hats or Caps                   = $4\n";
    cout << "\t5. Wood Carvings                  = $5\n";
    cout << "\t6. Beach Towels                   = $7\n";
    cout << "\t7. Key Holders                    = $6\n";
    cout << "\t8. Local Skincare Products        = $8\n";
    cout << "\t9. Craft Beers                    = $5\n";
    cout << "\t10. Souvenir Coins or Medals      = $17\n";

    int choice;
    cout << "Enter your choice (1-10): ";
    while (!(cin >> choice) || choice < 1 || choice > 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice! Enter a number between 1 and 10: ";
    }

    string name;
    float price;
    switch (choice) {
        case 1: name = "Maps"; price = 1.0; break;
        case 2: name = "Handmade Dolls or Figurines"; price = 10.0; break;
        case 3: name = "Posters"; price = 3.0; break;
        case 4: name = "Hats or Caps"; price = 4.0; break;
        case 5: name = "Wood Carvings"; price = 5.0; break;
        case 6: name = "Beach Towels"; price = 7.0; break;
        case 7: name = "Key Holders"; price = 6.0; break;
        case 8: name = "Local Skincare Products"; price = 8.0; break;
        case 9: name = "Craft Beers"; price = 5.0; break;
        case 10: name = "Souvenir Coins or Medals"; price = 17.0; break;
    }

    SouvenirItem item(name, price, 0);
    item.inputDetails();
    item.display();
    
    additionalOptions();
}
void handleFis_Floor2_Ranga2() {
    cout << "\t------------------------[Row 2, Telegraph302]------------------------\n";
    cout << "\t1. Ballpoint              = $2\n";
    cout << "\t2. Bulldog Clip           = $1.5\n";
    cout << "\t3. Tape Dispenser         = $6\n";
    cout << "\t4. Pencil Sharpener       = $2.5\n";
    cout << "\t5. Books                  = $1\n";
    cout << "\t6. Calculator             = $9\n";
    cout << "\t7. Textiles               = $2\n";
    cout << "\t8. Scissors               = $4\n";
    cout << "\t9. Sticky Notes           = $3\n";
    cout << "\t10. Local Spices or Teas  = $6\n";

    int choice;
    cout << "Enter your choice (1-10): ";
    while (!(cin >> choice) || choice < 1 || choice > 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice! Enter a number between 1 and 10: ";
    }

    string name;
    float price;
    switch (choice) {
        case 1: name = "Ballpoint"; price = 2.0; break;
        case 2: name = "Bulldog Clip"; price = 1.5; break;
        case 3: name = "Tape Dispenser"; price = 6.0; break;
        case 4: name = "Pencil Sharpener"; price = 2.5; break;
        case 5: name = "Books"; price = 1.0; break;
        case 6: name = "Calculator"; price = 9.0; break;
        case 7: name = "Textiles"; price = 2.0; break;
        case 8: name = "Scissors"; price = 4.0; break;
        case 9: name = "Sticky Notes"; price = 3.0; break;
        case 10: name = "Local Spices or Teas"; price = 6.0; break;
    }

    SouvenirItem item(name, price, 0);
    item.inputDetails();
    item.display();
    
    additionalOptions();
}
void handleFis_Floor2_Ranga3() {
    cout << "\t------------------------[Row 3, Telegraph 303]------------------------\n";
    cout << "\t1. Notebook          = $6\n";
    cout << "\t2. Envelope          = $1\n";
    cout << "\t3. Clipboard         = $5\n";
    cout << "\t4. Fax               = $30\n";
    cout << "\t5. Filing Cabinet    = $50\n";
    cout << "\t6. Telephone         = $20\n";
    cout << "\t7. Swivel Chair      = $70\n";
    cout << "\t8. Desk              = $69\n";
    cout << "\t9. Wastebasket       = $2\n";
    cout << "\t10. Exit\n";

    int choice;
    cout << "Enter your choice (1-10): ";
    while (!(cin >> choice) || choice < 1 || choice > 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice! Enter a number between 1 and 10: ";
    }

    string name;
    float price;
    switch (choice) {
        case 1: name = "Notebook"; price = 6.0; break;
        case 2: name = "Envelope"; price = 1.0; break;
        case 3: name = "Clipboard"; price = 5.0; break;
        case 4: name = "Fax"; price = 30.0; break;
        case 5: name = "Filing Cabinet"; price = 50.0; break;
        case 6: name = "Telephone"; price = 20.0; break;
        case 7: name = "Swivel Chair"; price = 70.0; break;
        case 8: name = "Desk"; price = 69.0; break;
        case 9: name = "Wastebasket"; price = 2.0; break;
        case 10: cout << "Exiting...\n"; return;
    }

    SouvenirItem item(name, price, 0);
    item.inputDetails();
    item.display();
    
    additionalOptions();
}
void hvmk() {
    cout << "\t------------------------[Main Menu]------------------------\n";
    cout << "\t1. Floor3 Range301\n";
    cout << "\t2. Floor3 Range302\n";
    cout << "\t3. Floor3 Range303\n";
    cout << "\t4. Exit\n";
}

void Sports_Equipment_Store() {
    cout << "\t------------------------[Sports Equipment Store]------------------------\n";
    cout << "\t1. Football\n";
    cout << "\t2. Basketball\n";
    cout << "\t3. Badminton Racket\n";
    cout << "\t4. Return to Main Menu\n";
}
void again() {
    int choice;
    cout << "\n\t1. Choose more options\n";
    cout << "\t2. Proceed to checkout\n";
    cout << "\tChoose your option: ";
    cin >> choice;
    switch (choice) {
        case 1:
            break;
        case 2:
            cout << "\tProceeding to checkout...\n";
            exit(0);
        default:
            cout << "\tInvalid choice! Returning to menu.\n";
    }
}
void buyFootball() {
    int footballChoice;
    float price = 0.0;
    cout << "\t------------------------[Football Row 1_Telegraph 103]-----------------------\n";
    cout << "\t1. Football - $10\n";
    cout << "\t2. Basketball - $20\n";
    cout << "\t3. Touchball - $30\n";
    cout << "\tChoose your option: ";
    cin >> footballChoice;

    string footballName;
    switch (footballChoice) {
        case 1:
            footballName = "Football";price = 10.0;
            break;
        case 2:
            footballName = "Basketball";price = 20.0;
            break;
        case 3:
            footballName = "Touchball";price = 30.0;
            break;
        default:
            cout << "\tInvalid choice!\n";
            return;
    }

    SportsEquipment football(footballName, price, 0);
    football.inputDetails();
    football.display();

    additionalOptions();
}
void buyBasketball() {
    int basketballChoice;
    float price = 0.0;
    cout << "\t------------------------[Basketball Row 2_Telegraph 203]-----------------------\n";
    cout << "\t1. Racket - $10\n";
    cout << "\t2. Nuts - $20\n";
    cout << "\t3. Bag - $30\n";
    cout << "\tChoose your option: ";
    cin >> basketballChoice;

    string basketballName;
    switch (basketballChoice) {
        case 1:
            basketballName = "Racket";
            price = 10.0;
            break;
        case 2:
            basketballName = "Nuts";
            price = 20.0;
            break;
        case 3:
            basketballName = "Bag";
            price = 30.0;
            break;
        default:
            cout << "\tInvalid choice!\n";
            return;
    }

    SportsEquipment basketball(basketballName, price, 0);
    basketball.inputDetails();
    basketball.display();

    additionalOptions();
}
void buyBadmintonRacket() {
    int badmintonChoice;
    float price = 0.0;
    cout << "\t------------------------[Badminton Racket Row 3 _Telegraph 303]-----------------------\n";
    cout << "\t1. Shoes - $10\n";
    cout << "\t2. Ski Helmet - $20\n";
    cout << "\t3. Protective Skiing - $30\n";
    cout << "\tChoose your option: ";
    cin >> badmintonChoice;

    string badmintonName;
    switch (badmintonChoice) {
        case 1:
            badmintonName = "Shoes";
            price = 10.0;
            break;
        case 2:
            badmintonName = "Ski Helmet";
            price = 20.0;
            break;
        case 3:
            badmintonName = "Protective Skiing";
            price = 30.0;
            break;
        default:
            cout << "\tInvalid choice!\n";
            return;
    }

    SportsEquipment badminton(badmintonName, price, 0);
    badminton.inputDetails();
    badminton.display();

    additionalOptions();
}

void souvenirs() {
    cout << "\t------------------------[Floor and Row]------------------------\n";
    cout << "\t1. Fis_Floor3_Ranga301\n";
    cout << "\t2. Fis_Floor3_Ranga302\n";
    cout << "\t3. Fis_Floor3_Ranga303\n";
    cout << "\t4. Exit\n";
}
void Onemoue() {
    int choice;
    cout << "\n\t1. Choose more options\n";
    cout << "\t2. Proceed to checkout\n";
    cout << "\tChoose your option: ";
    while (!(cin >> choice) || (choice != 1 && choice != 2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice! Please choose 1 or 2: ";
    }

    switch (choice) {
        case 1:
            Stationery_Store();
            break;
        case 2:
            cout << "\tProceeding to checkout...\n";
            exit(0);
    }
}
void handleFis_Floor3_Ranga301() {
    cout << "\t------------------------[Row 3_Telegraph 301]------------------------\n";
    cout << "\t1. Maps                          = $1\n";
    cout << "\t2. Handmade Dolls or Figurines    = $10\n";
    cout << "\t3. Posters                        = $3\n";
    cout << "\t4. Hats or Caps                   = $4\n";
    cout << "\t5. Wood Carvings                  = $5\n";
    cout << "\t6. Beach Towels                   = $7\n";
    cout << "\t7. Key Holders                    = $6\n";
    cout << "\t8. Local Skincare Products        = $8\n";
    cout << "\t9. Craft Beers                    = $5\n";
    cout << "\t10. Souvenir Coins or Medals      = $17\n";

    int choice;
    cout << "Enter your choice (1-10): ";
    while (!(cin >> choice) || choice < 1 || choice > 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice! Enter a number between 1 and 10: ";
    }

    string name;
    double price;
    switch (choice) {
        case 1: name = "Maps"; price = 1.0; break;
        case 2: name = "Handmade Dolls or Figurines"; price = 10.0; break;
        case 3: name = "Posters"; price = 3.0; break;
        case 4: name = "Hats or Caps"; price = 4.0; break;
        case 5: name = "Wood Carvings"; price = 5.0; break;
        case 6: name = "Beach Towels"; price = 7.0; break;
        case 7: name = "Key Holders"; price = 6.0; break;
        case 8: name = "Local Skincare Products"; price = 8.0; break;
        case 9: name = "Craft Beers"; price = 5.0; break;
        case 10: name = "Souvenir Coins or Medals"; price = 17.0; break;
    }

   Stationery item(name, price, 0);
    item.inputDetails();
    item.display();
    
    additionalOptions();
}
void handleFis_Floor3_Ranga302() {
    cout << "\t------------------------[Row 2, Telegraph302]------------------------\n";
    cout << "\t1. Ballpoint              = $2\n";
    cout << "\t2. Bulldog Clip           = $1.5\n";
    cout << "\t3. Tape Dispenser         = $6\n";
    cout << "\t4. Pencil Sharpener       = $2.5\n";
    cout << "\t5. Books                  = $1\n";
    cout << "\t6. Calculator             = $9\n";
    cout << "\t7. Textiles               = $2\n";
    cout << "\t8. Scissors               = $4\n";
    cout << "\t9. Sticky Notes           = $3\n";
    cout << "\t10. Local Spices or Teas  = $6\n";

    int choice;
    cout << "Enter your choice (1-10): ";
    while (!(cin >> choice) || choice < 1 || choice > 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice! Enter a number between 1 and 10: ";
    }

    string name;
    double price;
    switch (choice) {
        case 1: name = "Ballpoint"; price = 2.0; break;
        case 2: name = "Bulldog Clip"; price = 1.5; break;
        case 3: name = "Tape Dispenser"; price = 6.0; break;
        case 4: name = "Pencil Sharpener"; price = 2.5; break;
        case 5: name = "Books"; price = 1.0; break;
        case 6: name = "Calculator"; price = 9.0; break;
        case 7: name = "Textiles"; price = 2.0; break;
        case 8: name = "Scissors"; price = 4.0; break;
        case 9: name = "Sticky Notes"; price = 3.0; break;
        case 10: name = "Local Spices or Teas"; price = 6.0; break;
    }

    Stationery item(name, price, 0);
    item.inputDetails();
    item.display();
    
    additionalOptions();
}
void handleFis_Floor3_Ranga303() {
    cout << "\t------------------------[Row 3, Telegraph 303]------------------------\n";
    cout << "\t1. Notebook          = $6\n";
    cout << "\t2. Envelope          = $1\n";
    cout << "\t3. Clipboard         = $5\n";
    cout << "\t4. Fax               = $30\n";
    cout << "\t5. Filing Cabinet    = $50\n";
    cout << "\t6. Telephone         = $20\n";
    cout << "\t7. Swivel Chair      = $70\n";
    cout << "\t8. Desk              = $69\n";
    cout << "\t9. Wastebasket       = $2\n";
    cout << "\t10. Exit\n";

    int choice;
    cout << "Enter your choice (1-10): ";
    while (!(cin >> choice) || choice < 1 || choice > 10) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice! Enter a number between 1 and 10: ";
    }

    string name;
    double price;
    switch (choice) {
        case 1: name = "Notebook"; price = 6.0; break;
        case 2: name = "Envelope"; price = 1.0; break;
        case 3: name = "Clipboard"; price = 5.0; break;
        case 4: name = "Fax"; price = 30.0; break;
        case 5: name = "Filing Cabinet"; price = 50.0; break;
        case 6: name = "Telephone"; price = 20.0; break;
        case 7: name = "Swivel Chair"; price = 70.0; break;
        case 8: name = "Desk"; price = 69.0; break;
        case 9: name = "Wastebasket"; price = 2.0; break;
        case 10: cout << "Exiting...\n"; return;
    }

    Stationery item(name, price, 0);
    item.inputDetails();
    item.display();
    
    additionalOptions();
}
void Soiteam() {
    cout << "\t------------------------[Main Menu]------------------------\n";
    cout << "\t1. Floor3 Range301\n";
    cout << "\t2. Floor3 Range302\n";
    cout << "\t3. Floor3 Range303\n";
    cout << "\t4. Exit\n";
}

void Book_of_allkinds() {
    class Book {
    protected:
        string title;
        string author;
        int year;
    public:
        Book() {}
        virtual ~ Book() {}
        virtual void inputDetails() {
            cout << "Enter title: ";
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);
            cout << "Enter year of publication: ";
            while (!(cin >> year) || year < 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid year: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        virtual void displayDetails() const {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Year: " << year << endl;
        }
    };
    class Novel : public Book {
        float price;
        int quantity;const float exchangeRateToRiel;
    public:
        void inputDetails() override {
            Book::inputDetails();
            while (true) {
                cout << "Enter price (in USD): ";
                cin >> price;
                if (cin.fail() || price < 1.0 || price > 10.0) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid price. Please enter a value between 1$ and 10$." << endl;
                } else {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
            }
            cout << "Enter quantity: ";
            while (!(cin >> quantity) || quantity < 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid quantity: ";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        void displayDetails() const override {
            Book::displayDetails();
            cout << "Price (USD): $" << price << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Total cost (USD): $" << calculateTotalCost() << endl;
            cout << "Total cost (KHR): " << convertDollarToRiel(calculateTotalCost()) << " KHR" << endl;
        }

        float calculateTotalCost() const {
            return price * quantity;
        }

        float convertDollarToRiel(float dollarAmount) const {
            return dollarAmount * exchangeRateToRiel;
        }
    };
    class KhmerProverbsBook : public Book {};
    class FairyTaleBook : public Book {};
    class TextBook : public Book {};
    class HistoryBook : public Book {};
    class SmartStudentBook : public Book {};
    class LeadershipBook : public Book {};
    class ScholarsViewsBook : public Book {};
    class HistoryLeaderBook : public Book {};
    class CountryDiaryBook : public Book {};

    int choice;
    cout << "Select the type of book you want to input: " << endl;
    cout << "1. Novel" << endl;
    cout << "2. Khmer Proverbs Book" << endl;
    cout << "3. Fairy Tale Book" << endl;
    cout << "4. Text Book" << endl;
    cout << "5. History Book" << endl;
    cout << "6. How to Learn to Be a Smart Student Book" << endl;
    cout << "7. How to Become a Leader Book" << endl;
    cout << "8. Scholars' Views Book" << endl;
    cout << "9. History Leader Book" << endl;
    cout << "10. Diary of Each Country Around the World Book" << endl;
    cout << "11. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Book* book = nullptr;
    switch (choice) {
        case 1:
            break;
        case 2:
            book = new KhmerProverbsBook();
            break;
        case 3:
            book = new FairyTaleBook();
            break;
        case 4:
            book = new TextBook();
            break;
        case 5:
            book = new HistoryBook();
            break;
        case 6:
            book = new SmartStudentBook();
            break;
        case 7:
            book = new LeadershipBook();
            break;
        case 8:
            book = new ScholarsViewsBook();
            break;
        case 9:
            book = new HistoryLeaderBook();
            break;
        case 10:
            book = new CountryDiaryBook();
            break;
        case 11:
            cout << "Exiting program." << endl;
        default:
            cout << "Invalid choice." << endl;
    }

    if (book) {
        book->inputDetails();
        book->displayDetails();
        delete book;
    }
}

int main() {
    
     login(); 
     
    Stationery_Store();

    int choice;
    do {
        system("cls"); 
        IBC_Bookstore();
        cout << "\tChoose your option: ";
        cin >> choice;
        switch (choice) {
            case 1:
                Stationery_Store();
                break;
            case 2: 
                study_Materuala();
                break;
            case 3:
                Sports_Equipment_Store();
                {
                    int equipmentChoice;
                    cin >> equipmentChoice;
                    switch (equipmentChoice) {
                        case 1:
                            buyFootball();
                            break;
                        case 2:
                            buyBasketball();
                            break;
                        case 3:
                            buyBadmintonRacket();
                            break;
                        case 4:
                            break;
                        default:
                            cout << "\tInvalid choice!\n";
                    }
                }
                break;
            case 4:
                souvenirs();
                break;
            case 5:
                Book_of_allkinds();
                break;
            case 6:
                cout << "\tExiting program.\n";
                break;
            default:
                cout << "\tWrong Option!\n";
        }



                int mainChoice;
    cout << "Enter your choice (1-3): ";
    cin >> mainChoice;
        switch (mainChoice) {
        case 1: handleFis_Floor1_Ranga1(); break;
        case 2: handleFis_Floor1_Ranga2(); break;
        case 3: handleFis_Floor1_Ranga3(); break;
        case 4: cout << "Souvenirs section is not yet implemented.\n"; break;
        case 5: cout << "Books section is not yet implemented.\n"; break;
        case 6: cout << "Exiting the program.\n"; return 0;
        default: cout << "Invalid choice. Returning to main menu.\n"; break;
    }
    additionalOptions();
        system("pause"); 
    } while (choice != 6);

    return 0;
}