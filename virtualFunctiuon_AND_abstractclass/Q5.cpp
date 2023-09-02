/*

Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy.

*/
#include <iostream>
#include <cmath>
using namespace std;
class photon
{
protected:
    double wl;

public:
    photon(double wavelength)
    {
        this->wl = wl / pow(10, -10);
    }
};

class calculate_photonEnergy : public photon
{
private:
    double E;

public:
    calculate_photonEnergy(double value_in_angstrom) : photon(value_in_angstrom)
    {
    }
    void calphotonEnergy()
    {
        E = (6.626 * (pow(10, -34)) * 3 * (pow(10, 8))) / wl;
        cout << "Value of photons energy is :" << E << endl;
    }
};

int main()
{
    calculate_photonEnergy P(0.5);
    P.calphotonEnergy();


    return 0;
}