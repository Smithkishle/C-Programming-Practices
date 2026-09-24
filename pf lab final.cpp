#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
const int LOW_STOCK_THRESHOLD = 10;

// ---------- Function Prototypes ----------
void addMedicine(int ids[], string names[], string categories[], int quantities[], float prices[],
                  int expiryDay[], int expiryMonth[], int expiryYear[], int *count);

void displayAll(int ids[], string names[], string categories[], int quantities[], float prices[],
                int expiryDay[], int expiryMonth[], int expiryYear[], int count);

int* searchByID(int ids[], int count, int targetID);

void updateMedicine(int ids[], string names[], string categories[], int quantities[], float prices[],
                     int count);

void deleteMedicine(int ids[], string names[], string categories[], int quantities[], float prices[],
                     int expiryDay[], int expiryMonth[], int expiryYear[], int *count);

void sellMedicine(int ids[], string names[], int quantities[], float prices[], int count);

void lowStockAlert(int ids[], string names[], int quantities[], int count);

void expiryCheck(int ids[], string names[], int expiryDay[], int expiryMonth[], int expiryYear[],
                  int count, int curDay, int curMonth, int curYear);

void sortInventory(int ids[], string names[], string categories[], int quantities[], float prices[],
                    int expiryDay[], int expiryMonth[], int expiryYear[], int count);

void swapInt(int *a, int *b);
void swapFloat(float *a, float *b);
void swapString(string *a, string *b);

void pointerTraversalDemo(string names[], int count);

// ---------- Main ----------
int main() {
    int ids[MAX];
    string names[MAX];
    string categories[MAX];
    int quantities[MAX];
    float prices[MAX];
    int expiryDay[MAX], expiryMonth[MAX], expiryYear[MAX];
    int count = 0;

    int curDay, curMonth, curYear;
    cout << "Enter current date (dd mm yyyy): ";
    cin >> curDay >> curMonth >> curYear;

    int choice;
    do {
        cout << "\n===== PHARMACY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Medicine\n";
        cout << "2. Display All Medicines\n";
        cout << "3. Search Medicine by ID\n";
        cout << "4. Update Medicine\n";
        cout << "5. Delete Medicine\n";
        cout << "6. Sell Medicine (Billing)\n";
        cout << "7. Low Stock Alert\n";
        cout << "8. Expiry Check\n";
        cout << "9. Sort Inventory (by Name)\n";
        cout << "10. Pointer Traversal Demo\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addMedicine(ids, names, categories, quantities, prices,
                            expiryDay, expiryMonth, expiryYear, &count);
                break;
            case 2:
                displayAll(ids, names, categories, quantities, prices,
                           expiryDay, expiryMonth, expiryYear, count);
                break;
            case 3: {
                int targetID;
                cout << "Enter ID to search: ";
                cin >> targetID;
                int *found = searchByID(ids, count, targetID);
                if (found == false) {
                    cout << "Medicine not found.\n";
                } else {
                    int index = found - ids;
                    cout << "Found -> Name: " << names[index]
                         << ", Qty: " << quantities[index]
                         << ", Price: " << prices[index] << endl;
                }
                break;
            }
            case 4:
                updateMedicine(ids, names, categories, quantities, prices, count);
                break;
            case 5:
                deleteMedicine(ids, names, categories, quantities, prices,
                                expiryDay, expiryMonth, expiryYear, &count);
                break;
            case 6:
                sellMedicine(ids, names, quantities, prices, count);
                break;
            case 7:
                lowStockAlert(ids, names, quantities, count);
                break;
            case 8:
                expiryCheck(ids, names, expiryDay, expiryMonth, expiryYear, count,
                            curDay, curMonth, curYear);
                break;
            case 9:
                sortInventory(ids, names, categories, quantities, prices,
                              expiryDay, expiryMonth, expiryYear, count);
                cout << "Sorted by name.\n";
                break;
            case 10:
                pointerTraversalDemo(names, count);
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}

// ---------- Function Definitions ----------

void addMedicine(int ids[], string names[], string categories[], int quantities[], float prices[],
                  int expiryDay[], int expiryMonth[], int expiryYear[], int *count) {
    if (*count == MAX) {
        cout << "Inventory full. Cannot add more medicine.\n";
        return;
    }

    int newID;
    cout << "Enter Medicine ID: ";
    cin >> newID;

    // check duplicate ID
    for (int i = 0; i < *count; i++) {
        if (ids[i] == newID) {
            cout << "Medicine with this ID already exists.\n";
            return;
        }
    }

    int idx = *count;
    ids[idx] = newID;

    cout << "Enter Name: ";
    cin >> names[idx];

    cout << "Enter Category: ";
    cin >> categories[idx];

    cout << "Enter Quantity: ";
    cin >> quantities[idx];

    cout << "Enter Price: ";
    cin >> prices[idx];

    cout << "Enter Expiry Date (dd mm yyyy): ";
    cin >> expiryDay[idx] >> expiryMonth[idx] >> expiryYear[idx];

    (*count)++;
    cout << "Medicine added successfully.\n";
}

void displayAll(int ids[], string names[], string categories[], int quantities[], float prices[],
                int expiryDay[], int expiryMonth[], int expiryYear[], int count) {
    if (count == 0) {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << "\n--- Inventory ---\n";
    for (int i = 0; i < count; i++) {
        cout << "ID: " << ids[i]
             << " | Name: " << names[i]
             << " | Category: " << categories[i]
             << " | Qty: " << quantities[i]
             << " | Price: " << prices[i]
             << " | Expiry: " << expiryDay[i] << "/" << expiryMonth[i] << "/" << expiryYear[i]
             << endl;
    }
}

int* searchByID(int ids[], int count, int targetID) {
    for (int i = 0; i < count; i++) {
        if (ids[i] == targetID) {
            return &ids[i];   // pointer to the matching slot
        }
    }
    return nullptr;
}

void updateMedicine(int ids[], string names[], string categories[], int quantities[], float prices[],
                     int count) {
    int targetID;
    cout << "Enter ID of medicine to update: ";
    cin >> targetID;

    int *found = searchByID(ids, count, targetID);
    if (found == nullptr) {
        cout << "Medicine not found.\n";
        return;
    }

    int index = found - ids;   // recover index from pointer

    cout << "1. Update Quantity\n2. Update Price\n3. Update Category\nChoice: ";
    int ch;
    cin >> ch;

    if (ch == 1) {
        cout << "Enter new quantity: ";
        cin >> quantities[index];
    } else if (ch == 2) {
        cout << "Enter new price: ";
        cin >> prices[index];
    } else if (ch == 3) {
        cout << "Enter new category: ";
        cin >> categories[index];
    } else {
        cout << "Invalid choice.\n";
        return;
    }

    cout << "Medicine updated successfully.\n";
}

void deleteMedicine(int ids[], string names[], string categories[], int quantities[], float prices[],
                     int expiryDay[], int expiryMonth[], int expiryYear[], int *count) {
    int targetID;
    cout << "Enter ID of medicine to delete: ";
    cin >> targetID;

    int *found = searchByID(ids, *count, targetID);
    if (found == nullptr) {
        cout << "Medicine not found.\n";
        return;
    }

    int index = found - ids;

    // shift every parallel array left by one, starting from index
    for (int *p = ids + index; p < ids + *count - 1; p++) {
        *p = *(p + 1);
    }
    for (int i = index; i < *count - 1; i++) {
        names[i] = names[i + 1];
        categories[i] = categories[i + 1];
        quantities[i] = quantities[i + 1];
        prices[i] = prices[i + 1];
        expiryDay[i] = expiryDay[i + 1];
        expiryMonth[i] = expiryMonth[i + 1];
        expiryYear[i] = expiryYear[i + 1];
    }

    (*count)--;
    cout << "Medicine deleted successfully.\n";
}

void sellMedicine(int ids[], string names[], int quantities[], float prices[], int count) {
    int cartIndex[MAX];
    int cartQty[MAX];
    int cartCount = 0;
    char more;

    do {
        int targetID, qty;
        cout << "Enter Medicine ID to sell: ";
        cin >> targetID;

        int *found = searchByID(ids, count, targetID);
        if (found == nullptr) {
            cout << "Medicine not found.\n";
            continue;
        }

        int index = found - ids;

        cout << "Enter quantity to sell: ";
        cin >> qty;

        if (qty > quantities[index]) {
            cout << "Insufficient stock. Available: " << quantities[index] << endl;
            continue;
        }

        cartIndex[cartCount] = index;
        cartQty[cartCount] = qty;
        cartCount++;

        cout << "Add another item? (y/n): ";
        cin >> more;
    } while (more == 'y' || more == 'Y');

    float total = 0;
    cout << "\n--- Receipt ---\n";
    for (int i = 0; i < cartCount; i++) {
        int idx = cartIndex[i];
        int qty = cartQty[i];

        quantities[idx] -= qty;
        float lineTotal = qty * prices[idx];
        total += lineTotal;

        cout << names[idx] << " x " << qty << " = " << lineTotal << endl;
    }
    cout << "Total: " << total << endl;
}

void lowStockAlert(int ids[], string names[], int quantities[], int count) {
    cout << "\n--- Low Stock Alerts ---\n";
    bool any = false;
    for (int i = 0; i < count; i++) {
        if (quantities[i] < LOW_STOCK_THRESHOLD) {
            cout << "ID: " << ids[i] << " | Name: " << names[i]
                 << " | Qty: " << quantities[i] << endl;
            any = true;
        }
    }
    if (!any) cout << "No low stock items.\n";
}

void expiryCheck(int ids[], string names[], int expiryDay[], int expiryMonth[], int expiryYear[],
                  int count, int curDay, int curMonth, int curYear) {
    cout << "\n--- Expiry Report ---\n";
    for (int i = 0; i < count; i++) {
        bool expired = false;

        if (expiryYear[i] < curYear) {
            expired = true;
        } else if (expiryYear[i] == curYear && expiryMonth[i] < curMonth) {
            expired = true;
        } else if (expiryYear[i] == curYear && expiryMonth[i] == curMonth && expiryDay[i] < curDay) {
            expired = true;
        }

        if (expired) {
            cout << names[i] << " (ID: " << ids[i] << ") -> EXPIRED\n";
        }
    }
}

void swapInt(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapFloat(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swapString(string *a, string *b) {
    string temp = *a;
    *a = *b;
    *b = temp;
}

void sortInventory(int ids[], string names[], string categories[], int quantities[], float prices[],
                    int expiryDay[], int expiryMonth[], int expiryYear[], int count) {
    // bubble sort by name, keeping all parallel arrays in sync
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                swapString(&names[j], &names[j + 1]);
                swapInt(&ids[j], &ids[j + 1]);
                swapString(&categories[j], &categories[j + 1]);
                swapInt(&quantities[j], &quantities[j + 1]);
                swapFloat(&prices[j], &prices[j + 1]);
                swapInt(&expiryDay[j], &expiryDay[j + 1]);
                swapInt(&expiryMonth[j], &expiryMonth[j + 1]);
                swapInt(&expiryYear[j], &expiryYear[j + 1]);
            }
        }
    }
}

void pointerTraversalDemo(string names[], int count) {
    cout << "\n--- Names via Pointer Traversal ---\n";
    for (string *p = names; p < names + count; p++) {
        cout << *p << endl;
    }
}
