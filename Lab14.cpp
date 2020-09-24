#include <iostream>
#include <string>
using namespace std;

class Movie
{
public:
    Movie(string name = " ", int min = 0) {
        setData(name, min);
    }

    void setData(string name, int min) {
        movieName = name;
        length = min;
    }

    void printData() const {
        cout << "Movie: " << movieName << ", Movie Duration: " << length << " minutes\n\n";
    }

    string getMovieName() const {
        return movieName;
    }

    int getMinutes() const {
        return length;
    }

private:
    string movieName;
    int length;
};

// TODO:  Overload the operators >, >=, <, and <= in the Flight class.
// Ensure support for comparing Flight objects to Flight objects,
// Flight objects to Movie objects, and Movie objects to Flight objects.
// 12 functions in total


class Flight {
    friend bool operator > (const Flight& f1, const Flight& f2) {
        return f1.getMinutes() > f2.getMinutes();
    }
    friend bool operator > (const Flight& f1, const Movie& m1) {
        return f1.getMinutes() > m1.getMinutes();
    }

    friend bool operator > (const Movie& m1, const Flight& f1) {
        return m1.getMinutes() > f1.getMinutes();
    }

    friend bool operator >= (const Flight& f1, const Flight& f2) {
        return f1.getMinutes() >= f2.getMinutes();
    }
    friend bool operator >= (const Flight& f1, const Movie& m1) {
        return f1.getMinutes() >= m1.getMinutes();
    }
    friend bool operator >= (const Movie& m1, const Flight& f1) {
        return m1.getMinutes() >= f1.getMinutes();
    }

    friend bool operator < (const Flight& f1, const Flight& f2) {
        return f1.getMinutes() < f2.getMinutes();
    }
    friend bool operator < (const Flight& f1, const Movie& m1) {
        return f1.getMinutes() < m1.getMinutes();
    }
    friend bool operator < (const Movie& m1, const Flight& f1) {
        return m1.getMinutes() < f1.getMinutes();
    }

    friend bool operator <= (const Flight& f1, const Flight& f2) {
        return f1.getMinutes() <= f2.getMinutes();
    }
    friend bool operator <= (const Flight& f1, const Movie& m1) {
        return f1.getMinutes() <= m1.getMinutes();
    }
    friend bool operator <= (const Movie& m1, const Flight& f1) {
        return m1.getMinutes() <= f1.getMinutes();
    }
public:
    Flight(int flightNum = 0, int min = 0) {
        setData(flightNum, min);
    }

    void setData(int flightNum, int min) {
        flightNumber = flightNum;
        length = min;
    }

    void printData() const {
        cout << "Flight Number: " << flightNumber << "\nFlight Duration: " << length << " minutes\n\n";
    }

    int getMinutes() const {
        return length;
    }

    int getFlightNumber() const {
        return flightNumber;
    }

private:
    int flightNumber;
    int length;
};

int main() {

    Flight f1(1298, 101);
    Flight f2(9821, 125);
    Movie m1("The Avengers", 101);

    f1.printData();
    f2.printData();
    m1.printData();

    if (m1 > f1)
        cout << m1.getMovieName() << " is longer than Flight "
        << f1.getFlightNumber() << endl;
    if (m1 < f1)
        cout << m1.getMovieName() << " is shorter than Flight "
        << f1.getFlightNumber() << endl;
    if (m1 < f2)
        cout << f2.getFlightNumber() << " is longer than "
        << m1.getMovieName() << endl;
    if (m1 > f2)
        cout << m1.getMovieName() << " is longer than Flight "
        << f2.getFlightNumber() << endl;
    if (f1 >= m1)
        cout << "Flight " << f1.getFlightNumber() << " is longer than or equal to "
        << m1.getMovieName() << endl;
    if (f1 <= m1)
        cout << "Flight " << f1.getFlightNumber() << " is shorter than or equal to  "
        << m1.getMovieName() << endl;
    if (f2 <= m1)
        cout << "Flight " << f2.getFlightNumber() << " is shorter than or equal to "
        << m1.getMovieName() << endl;
    if (f2 >= m1)
        cout << "Flight " << f2.getFlightNumber() << " is longer than or equal to  "
        << m1.getMovieName() << endl;
    if (f1 >= f2)
        cout << "Flight " << f1.getFlightNumber() << " is longer than or equal to Flight "
        << f2.getFlightNumber() << endl;

    return 0;
}
