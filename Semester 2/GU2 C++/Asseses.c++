#include <iostream>
using namespace std;

class Booking {
private:
    string customerName, movieName;
    int tickets;
    float price, total;

public:
    static int totalBookings;
    static int totalSeatsBooked;

    Booking() {
        customerName = "";
        movieName = "";
        tickets = 0;
        price = 0;
        total = 0;
    }

    void inputDetails() {
        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Select Movie:\n1. Avengers\n2. Leo\n3. Jawan\nEnter Choice: ";
        int choice;
        cin >> choice;

        if(choice==1){ movieName="Avengers"; price=200; }
        else if(choice==2){ movieName="Leo"; price=180; }
        else { movieName="Jawan"; price=150; }

        cout << "Enter Number of Tickets: ";
        cin >> tickets;

        totalBookings++;
        totalSeatsBooked += tickets;
    }

    void calculateTotal() {
        total = tickets * price;
        if(tickets >= 5) total *= 0.9;
    }

    void displayBooking() {
        calculateTotal();
        cout << "\n------ Booking Summary ------\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Movie: " << movieName << endl;
        cout << "Tickets: " << tickets << endl;
        if(tickets >= 5) cout << "Discount Applied: 10%\n";
        cout << "Total Amount: " << total << endl;
        cout << "-----------------------------\n";
    }

    static void showStatistics() {
        cout << "\n===== Booking Statistics =====\n";
        cout << "Total Bookings: " << totalBookings << endl;
        cout << "Total Seats Booked: " << totalSeatsBooked << endl;
        cout << "==============================\n";
    }
};

int Booking::totalBookings = 0;
int Booking::totalSeatsBooked = 0;

int main() {
    Booking b1, b2;

    b1.inputDetails();
    b2.inputDetails();

    b1.displayBooking();
    b2.displayBooking();

    Booking::showStatistics();
    return 0;
}
