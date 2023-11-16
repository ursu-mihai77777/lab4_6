#include <iostream>
#include <string>


class Driver {
private:
    std::string name;
    std::string licenseNumber;
    std::string address;
public:
    Driver(const std::string& name, const std::string& licenseNumber,const std::string& address)
        : name(name), licenseNumber(licenseNumber),address(address) {}

    const std::string& getName() const {
        return name;
    }

    const std::string& getLicenseNumber() const {
        return licenseNumber;
    }
    const std::string& getAddress() const {
        return address;
    }

;
};


class Car {
private:
    std::string make;
    std::string model;
    
public:
    Car(const std::string& make, const std::string& model)
        : make(make), model(model) {}

    const std::string& getMake() const {
        return make;
    }

    const std::string& getModel() const {
        return model;
    }
};


class PoliceOfficer {
private:
    std::string name;
    std::string badgeNumber;
public:
    PoliceOfficer(const std::string& name, const std::string& badgeNumber)
        : name(name), badgeNumber(badgeNumber) {}

    const std::string& getName() const {
        return name;
    }

    const std::string& getBadgeNumber() const {
        return badgeNumber;
    }

    
    void checkDocuments(const Driver& driver, const Car& car) const {
        std::cout << "Police Officer " << name << " is checking documents:\n";
        std::cout << "Driver: " << driver.getName() << " - License Number: " << driver.getLicenseNumber() << "- Address: " << driver.getAddress()<< "\n";
        std::cout << "Car: " << car.getMake() << " " << car.getModel() << "\n";
        
    }


};

int main() {
    
    Driver driver("Alex Cioi", "DJ05JJJ","1 Mai");
    Car car("BMW", "Seria 3");
    PoliceOfficer officer("Ofiter Garcea", "1312");

    
    officer.checkDocuments(driver, car);

    return 0;
}
