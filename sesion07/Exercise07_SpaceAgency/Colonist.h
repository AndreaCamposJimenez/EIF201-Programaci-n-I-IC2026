#ifndef COLONIST_H
#define COLONIST_H

#include <string>
using namespace std;

enum Specialty {
    ENGINEER,
    BIOLOGIST,
    DOCTOR,
    GEOLOGIST,
    PILOT
};

class Colonist {
private:
    string id;
    string name;
    Specialty specialty;
    double oxygenConsumptionPerHour;
    int productivityIndex;

public:
    Colonist();
    Colonist(string id, string name, Specialty specialty,
        double oxygenConsumptionPerHour, int productivityIndex);

    string getId();
    void setId(string id);

    string getName();
    void setName(string name);

    Specialty getSpecialty();
    void setSpecialty(Specialty specialty);

    double getOxygenConsumptionPerHour();
    void setOxygenConsumptionPerHour(double value);

    int getProductivityIndex();
    void setProductivityIndex(int value);
};

#endif