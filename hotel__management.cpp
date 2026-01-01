#include <iostream>
#include <string>
// #include <vector>
using namespace std;



            //class make
class Hotel
{
private:
    string customerName;
    int roomType;
    int days;
    int bill;

public:
    void getData()
    {
        cout << "Customer Name:";
        cin >> customerName;

        cout << "\nRoom Type:";
        cout << "\n1. Normal Room($1000 per day)";
        cout << "\n2. Deluxe Room($2000 per day)";
        cout << "\n3. Luxury Room($3000 per day)"; 
        cout << "\n.Enter Your Choice";
        cin >> roomType;

        cout << "Which Day To Stay:";
        cin >> days;
    }

    void calculateBill()
    {
        if (roomType == 1)
        {
            bill = days * 1000;
        }
        else if (roomType == 2)
        {
            bill = days * 2000;
        }
        else if (roomType == 3)
        {
            bill = days * 3000;
        }
        else
            bill = 0;
    }

    void display()
    {
        cout << "\n------HOTEL MANAGEMENT SYSTEM------";
        cout << "\n Customer Name:" << customerName;
        cout << "\n Days Stayed:" << days;
        cout << "\n Total Bill:$" << bill;
    }
};

int main()
{
    Hotel h1;
    h1.getData();
    h1.calculateBill();
    h1.display();

    return 0;
}
