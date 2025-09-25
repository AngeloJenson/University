#include <iostream>
using namespace std;


class BasicPay {
protected:
    float hourlyRate;
    int hoursWorked;
public:
    void setWorkDetails(float rate, int hours) {
        hourlyRate = rate;
        hoursWorked = hours;
    }
    float getBasicPay() {
        return hourlyRate * hoursWorked;
    }
    void showBasic() {
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Basic Pay: " << getBasicPay() << endl;
    }
};


class Incentives : public BasicPay {
protected:
    float bonus;
public:
    void setBonus(float b) {
        bonus = b;
    }
    void showIncentive() {
        cout << "Bonus/Incentives: " << bonus << endl;
    }
    float getIncentives() {
        return bonus;
    }
};


class TotalPay : public Incentives {
public:
    void calculatePay() {
        float total = getBasicPay() + getIncentives();
        cout << "Total Pay: " << total << endl;
    }
};

int main() {
    TotalPay employee;

    employee.setWorkDetails(200, 40);
    employee.setBonus(1000);

    employee.showBasic();
    employee.showIncentive();
    employee.calculatePay();

    return 0;
}

