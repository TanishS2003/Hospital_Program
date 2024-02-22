#include <fstream>
#include <iostream>
using namespace std;

int choice;

class Hospital
{
protected:
    int age;
    char insurance;
    char name[30];
    string mob_no;

public:
    Hospital()
    {
        cout << "**********Welcome to Life Saving Hospital**********" << endl;
    }
    inline void personal_info() // Inline Function
    {                           // Basic information about the patient
        cout << "Kindly fill out the details below: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Mobile Number: ";
        cin >> mob_no;
        cout << "Insurance(Y/N): ";
        cin >> insurance;
    }
    friend void cafeteria(Hospital); // Friend function for cafeteria
    virtual void pharmacy()          // Virtual Function
    {
        cout << "Pharmacy";
    }
    ~Hospital() // Destructor
    {
        cout << endl
             << "Thanks for Visiting" << endl;
    };
};
class OPD : public Hospital // OPD
{
public:
    void personal_info() // personal info for OPD
    {
        Hospital::personal_info();
    }
    void doc_type() // Type of doctor
    {
        int amount;
        cout << "Kindly Select the type of doctor you want: " << endl;
        cout << "1. Surgeon" << endl
             << "2. Cardiologist" << endl
             << "3. General Physian" << endl
             << "4. Dermatologist" << endl
             << "5. ENT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            amount = 6000;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << name << endl
                 << "Age: " << age << endl
                 << "Mobile Number: " << mob_no << endl
                 << "Insurance Coverage: " << insurance << endl
                 << "Doctor's Name: "
                 << "Dr. K K Terhan" << endl
                 << "Amount Paid: " << amount;
        }
        if (choice == 2)
        {
            amount = 5000;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << name << endl
                 << "Age: " << age << endl
                 << "Mobile Number: " << mob_no << endl
                 << "Insurance Coverage: " << insurance << endl
                 << "Doctor's Name: "
                 << "Dr. Naveen Bhamri" << endl
                 << "Amount Paid: " << amount;
        }
        if (choice == 3)
        {
            amount = 1000;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << name << endl
                 << "Age: " << age << endl
                 << "Mobile Number: " << mob_no << endl
                 << "Insurance Coverage: " << insurance << endl
                 << "Doctor's Name: "
                 << "Dr. Amit Singhal" << endl
                 << "Amount Paid: " << amount;
        }
        if (choice == 4)
        {
            amount = 2000;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << name << endl
                 << "Age: " << age << endl
                 << "Mobile Number: " << mob_no << endl
                 << "Insurance Coverage: " << insurance << endl
                 << "Doctor's Name: "
                 << "Dr. Divya Aggarwal" << endl
                 << "Amount Paid: " << amount;
        }
        if (choice == 5)
        {
            amount = 4000;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << name << endl
                 << "Age: " << age << endl
                 << "Mobile Number: " << mob_no << endl
                 << "Insurance Coverage: " << insurance << endl
                 << "Doctor's Name: "
                 << "Dr. Ashok Singh" << endl
                 << "Amount Paid: " << amount;
        }
    }
    void pharmacy()
    {
        cout << "Pharmacy is under construction";
    }
};

class IPD : public Hospital // IPD
{
protected:
    char address[100], attendant_name[30];
    string attendant_mob_no;

public:
    void personal_info() // personal info for IPD
    {
        Hospital::personal_info();
        cout << "Address: ";
        cin >> address;
        cout << "Attendant's Name: ";
        cin >> attendant_name;
        cout << "Attendant's Mobile Number: ";
        cin >> attendant_mob_no;
    }
    void bed() // Bedding Type
    {
        int total_bed = 500;
        static int bed_count;
        int available_bed = total_bed - bed_count;
        int amount;
        cout << "Number of beds available: " << available_bed << endl;
        if (bed_count < total_bed)
        {
            cout << "Kindly select the type of bedding: " << endl
                 << "1. Private" << endl
                 << "2. Twin Sharing" << endl
                 << "3. Multibed" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 1)
            {
                amount = 5000;
                cout << "You have selected Private Bedding. Charges per night: " << amount << endl;
                cout << "**********Receipt**********" << endl;
                cout << "Name: " << name << endl
                     << "Age: " << age << endl
                     << "Mobile Number: " << mob_no << endl
                     << "Insurance Coverage: " << insurance << endl
                     << "Address: " << address << endl
                     << "Attendant's Name: " << attendant_name << endl
                     << "Attendant's Mobile Number: " << attendant_mob_no << endl
                     << "Amount Paid: " << amount;
            }
            if (choice == 2)
            {
                amount = 3000;
                cout << "You have selected Twin Sharing Bedding. Charges per night: " << amount << endl;
                cout << "**********Receipt**********" << endl;
                cout << "Name: " << name << endl
                     << "Age: " << age << endl
                     << "Mobile Number: " << mob_no << endl
                     << "Insurance Coverage: " << insurance << endl
                     << "Address: " << address << endl
                     << "Attendant's Name: " << attendant_name << endl
                     << "Attendant's Mobile Number: " << attendant_mob_no << endl
                     << "Amount Paid: " << amount;
            }
            if (choice == 3)
            {
                amount = 2000;
                cout << "You have selected Multibed Bedding. Charges per night: " << amount << endl;
                cout << "**********Receipt**********" << endl;
                cout << "Name: " << name << endl
                     << "Age: " << age << endl
                     << "Mobile Number: " << mob_no << endl
                     << "Insurance Coverage: " << insurance << endl
                     << "Address: " << address << endl
                     << "Attendant's Name: " << attendant_name << endl
                     << "Attendant's Mobile Number: " << attendant_mob_no << endl
                     << "Amount Paid: " << amount;
            }
            bed_count++;
        }
        else
        {
            cout << "Sorry, but we are out of beds!";
        }
    }
};

class Emergency : public Hospital // Emergency
{
protected:
    char description[500];

public:
    void personal_info()
    {
        Hospital::personal_info(); // Personal info for Emergency
    }
    void form() // Emergency Form
    {
        const int amount = 5000;
        cout << "Describe Injury or Illness: ";
        cin >> description;
        cout << "The concerned doctor will be with you shortly. Kindly wait in the waiting room." << endl;
        cout << "You have to pay Rs. " << amount << endl;
        cout << "**********Receipt**********" << endl;
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Mobile Number: " << mob_no << endl
             << "Insurance Coverage: " << insurance << endl
             << "Amount Paid: " << amount;
    }
};

void cafeteria(Hospital t) // Cafeteria
{
    int amount;
    cout << endl;
    cout << "**********Welcome to Cafeteria**********" << endl;
    cout << "Would you like something to eat or drink?" << endl;
    cout << "1. Yes" << endl
         << "2. No" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Name: ";
        cin >> t.name;
        cout << "Mobile No: ";
        cin >> t.mob_no;
        cout << "What would you like to have?" << endl
             << "1. Burger" << endl
             << "2. French Fries" << endl
             << "3. Pepsi" << endl
             << "4. Meal" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            amount = 60;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << t.name << endl
                 << "Mobile Number: " << t.mob_no << endl
                 << "Amount Paid: " << amount;
        }
        if (choice == 2)
        {
            amount = 30;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << t.name << endl
                 << "Mobile Number: " << t.mob_no << endl
                 << "Amount Paid: " << amount;
        }
        if (choice == 3)
        {
            amount = 40;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << t.name << endl
                 << "Mobile Number: " << t.mob_no << endl
                 << "Amount Paid: " << amount;
        }
        if (choice == 4)
        {
            amount = 120;
            cout << "You have to pay Rs. " << amount << endl;
            cout << "**********Receipt**********" << endl;
            cout << "Name: " << t.name << endl
                 << "Mobile Number: " << t.mob_no << endl
                 << "Amount Paid: " << amount;
        }
    }
    else
    {
        return;
    }
}

int main()
{
    Hospital h;
    choice = 1;
    ifstream infile;
    string line;
    while (choice != 0)
    {
        infile.open("Menu.txt");
        while (infile.eof() == 0)
        {
            getline(infile, line);
            cout << line << endl;
        }
        infile.close();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            OPD o;
            o.personal_info();
            o.doc_type();
        }
        else if (choice == 2)
        {
            IPD i;
            i.personal_info();
            i.bed();
            cafeteria(h);
        }
        else if (choice == 3)
        {
            Emergency e;
            e.personal_info();
            e.form();
        }
        else if (choice == 4)
        {
            Hospital *h;
            OPD o;
            h = &o;
            h->pharmacy();
        }
        else if (choice == 5)
        {
            break;
        }
    }
    return 0;
}