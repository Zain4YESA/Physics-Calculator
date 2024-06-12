#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#define PI 3.14
using namespace std;

class Pyc {
protected:
    int time;
    double acceleration;
    double speed;
    double distance;
    double velocity;
    double mass;
    double volume;
    double power;
    double height;
    double position;
    double spring_constant;
    double Potential_Energy;
    double Kinetic_energy;
    double Force;
    double Density;
    double Elastic_Potential_Energy;
    double Pressure_in_liquid;
    double Heat;
    double specific_heat;
    double Temperature;
    double Gravitational_Force;
    double Force_parallel;
    double Gravity = 6.67 * pow(10, -11);
    double En;
    double speed_of_light = 3.0 * pow(10, 8);
    double mass_of_sun = 1.99 * pow(10, 30);
    double radius_of_earth = 6.37 * pow(10, 6);
    double mass_of_earth = 5.97 * pow(10, 24);
    double Escape_Velocity;
    double linear_speed;
    double centripetal_acceleration;
    double centripetal_force;
    double velocity_of_wave;
    double radius;
    double frequency;
    double Amplitude;
    double torque;
    double magnetic_Field;
    double number_of_coils;
    double current;
    double area;
    double angle;
    double momentum;

public:
    Pyc() {}

    Pyc(int t, double a, double sp, double d, double v, double m, double vo, double p,
        double hi, double x, double pe, double ke, double f, double de, double epe, double pil,
        double h, double sh, double temp, double gf, double fp, double g, double e, double sol,
        double mos, double roe, double moe, double ls, double ca, double cf, double vow, double ev, 
        double r, double fq, double amp, double tq, double B, double I, double N, double A, double o, double mnt)
        : time(t), acceleration(a), speed(sp), distance(d), velocity(v),
          mass(m), volume(vo), power(p), height(hi), position(x), Potential_Energy(pe),
          Kinetic_energy(ke), Force(f), Density(de), Elastic_Potential_Energy(epe), Pressure_in_liquid(pil),
          Heat(h), specific_heat(sh), Temperature(temp), Gravitational_Force(gf), Force_parallel(fp),
          Gravity(g), En(e), speed_of_light(sol), mass_of_sun(mos), radius_of_earth(roe), mass_of_earth(moe),
          linear_speed(ls), centripetal_acceleration(ca), centripetal_force(cf), velocity_of_wave(vow),
          Escape_Velocity(ev), radius(r), frequency(fq), Amplitude(amp), torque(tq), magnetic_Field(B),
          current(I), number_of_coils(N), area(A), angle(o), momentum(mnt) {}

    void Acceleration_Calc() {
        cout << "Enter the velocity:";
        cin >> velocity;
        cout << "Velocity: " << velocity << "ms^-1" << endl;

        cout << "Enter the time:" << endl;
        cin >> time;
        cout << "Time: " << time << "sec" << endl;

        acceleration = velocity / time;
        cout << "Acceleration: " << acceleration << "ms^-2" << endl;
    }

    void Velocity_Calc() {
        cout << "Enter the speed:";
        cin >> speed;
        cout << "Speed: " << speed << "ms^-1" << endl;

        cout << "Enter the time:";
        cin >> time;
        cout << "Time: " << time << "sec" << endl;

        velocity = speed / time;
        cout << "Velocity: " << velocity << "ms^-1" << endl;
    }

    void calc_Speed(){
	
        cout << "Enter the distance:";
        cin >> distance;
        cout << "Distance: " << distance << "m" << endl;

        cout << "Enter the time:";
        cin >> time;
        cout << "Time: " << time << "sec" << endl;

        speed = distance / time;
        cout << "Speed: " << speed << "ms^-1" << endl;
    }

    void Density_Calc(){
	
        cout << "Enter the mass:";
        cin >> mass;
        cout << "Mass: " << mass << "kg" << endl;

        cout << "Enter the Volume: ";
        cin >> volume;
        cout << "Volume: " << volume << "m^3" << endl;

        Density = mass / volume;
        cout << "Density: " << Density << "kg/m^3" << endl;
    }

    void Potential_Energy_Calc(){
	
        cout << "Enter the mass:";
        cin >> mass;
        cout << "Mass: " << mass << "kg" << endl;

        cout << "Gravity: " << Gravity << "N" << endl;

        cout << "Enter the height:";
        cin >> height;
        cout << "Height: " << height << "m" << endl;

        Potential_Energy = mass * Gravity * height;
        cout << "Potential Energy: " << Potential_Energy << "J" << endl;
    }

    void Kinetic_Energy_Calc() {
        cout << "Enter the mass:";
        cin >> mass;
        cout << "Mass: " << mass << "kg" << endl;

        cout << "Enter the velocity:";
        cin >> velocity;
        cout << "Velocity: " << velocity << "ms^-1" << endl;

        Kinetic_energy = 0.5 * mass * pow(velocity, 2);
        cout << "Kinetic Energy: " << Kinetic_energy << "J" << endl;
    }

    void Elastic_Potential_Energy_Calc(){
	
        cout << "Enter the Spring Constant: ";
        cin >> spring_constant;
        cout << "Spring Constant: " << spring_constant << " Nm^-1" << endl;

        cout << "Enter the position: ";
        cin >> position;
        cout << "Position: " << position << "m" << endl;

        Elastic_Potential_Energy = 0.5 * spring_constant * pow(position, 2);
        cout << "Elastic Potential Energy: " << Elastic_Potential_Energy << " J" << endl;
    }

    void Pressure_In_Liquid_Calc() {
        cout << "Enter the height:";
        cin >> height;
        cout << "Height: " << height << "m" << endl;

        cout << "Gravity: " << Gravity << "N" << endl;

        int select;
        cout << "Select 1, if you have density; select 2 if you don't have density.";
        cin >> select;
        if (select == 1) {
            cout << "You have density" << endl;
            cout << "Enter Density: ";
            cin >> Density;
            cout << "Density: " << Density << "kg/m^3" << endl;

            Pressure_in_liquid = height * Density * Gravity;
            cout << "Pressure in liquid: " << Pressure_in_liquid << "Pa" << endl;
        }
        if (select == 2) {
            cout << "You don't have density, so find it." << endl;
            cout << "Enter the mass:";
            cin >> mass;
            cout << "Mass: " << mass << "kg" << endl;

            cout << "Enter the Volume: ";
            cin >> volume;
            cout << "Volume: " << volume << "m^3" << endl;

            Density = mass / volume;
            cout << "Density: " << Density << "kg/m^3" << endl;

            Pressure_in_liquid = height * Density * Gravity;
            cout << "Pressure in liquid: " << Pressure_in_liquid << "Pa" << endl;
        }
    }

    void Heat_Calc() {
        cout << "Enter the mass:";
        cin >> mass;
        cout << "Mass: " << mass << "kg" << endl;

        cout << "Enter the Specific Heat: ";
        cin >> specific_heat;
        cout << "Specific Heat: " << specific_heat << "J/(kg °C)" << endl;

        cout << "Enter the Temperature: ";
        cin >> Temperature;
        cout << "Temperature: " << Temperature << "°C" << endl;

        Heat = mass * specific_heat * Temperature;
        cout << "Heat: " << Heat << "J" << endl;
    }

    void Force_Calc() {
        cout << "Enter the mass:";
        cin >> mass;
        cout << "Mass: " << mass << "kg" << endl;

        int select;
        cout << "Select 1, if you have acceleration; Select 2 if you don't have acceleration.";
        cin >> select;
        if (select == 1) {
            cout << "You have acceleration" << endl;
            cout << "Enter Acceleration: ";
            cin >> acceleration;
            cout << "Acceleration: " << acceleration << "ms^-2" << endl;

            Force = mass * acceleration;
            cout << "Force: " << Force << "N" << endl;
        }
        if (select == 2) {
            cout << "You don't have acceleration, so find it." << endl;
            cout << "Enter the velocity:";
            cin >> velocity;
            cout << "Velocity: " << velocity << "ms^-1" << endl;

            cout << "Enter the time:" << endl;
            cin >> time;
            cout << "Time: " << time << "sec" << endl;

            acceleration = velocity / time;
            cout << "Acceleration: " << acceleration << "ms^-2" << endl;
            Force = mass * acceleration;
            cout << "Force: " << Force << "N" << endl;
        }
    }

    void Einstein() {
        cout << "Enter the mass:";
        cin >> mass;
        cout << "Mass: " << mass << "kg" << endl;

        cout << "Speed of Light: " << speed_of_light << "ms^-1" << endl;

        En = mass * pow(speed_of_light, 2);
        cout << "Relativity: " << En << "J" << endl;
    }

    void Escape_Velocity_Calc() {
        cout << "Gravity: " << Gravity << "N" << endl;
        cout << "Radius of Earth: " << radius_of_earth << "m" << endl;
        cout << "Mass of Earth: " << mass_of_earth << "kg" << endl;

        Escape_Velocity = sqrt(2 * Gravity * mass_of_earth / radius_of_earth);
        cout << "Escape Velocity: " << Escape_Velocity << "ms^-1" << endl;
    }

    void Centripetal_Force_Calc() {
        cout << "Enter the mass:";
        cin >> mass;
        cout << "Mass: " << mass << "kg" << endl;

        int select;
        cout << "Select 1, if you have velocity; select 2 if you don't have velocity.";
        cin >> select;
        if (select == 1) {
            cout << "You have velocity" << endl;
            cout << "Enter the velocity:";
            cin >> velocity;
            cout << "Velocity: " << velocity << "ms^-1" << endl;

            cout << "Enter the Radius: ";
            cin >> radius;
            cout << "Radius: " << radius << "m" << endl;

            centripetal_force = mass * pow(velocity, 2) / radius;
            cout << "Centripetal Force: " << centripetal_force << "N" << endl;
        }
        if (select == 2) {
            cout << "You don't have velocity, so find it." << endl;
            cout << "Enter the speed:";
            cin >> speed;
            cout << "Speed: " << speed << "ms^-1" << endl;

            cout << "Enter the time:";
            cin >> time;
            cout << "Time: " << time << "sec" << endl;

            velocity = speed / time;
            cout << "Velocity: " << velocity << "ms^-1" << endl;

            cout << "Enter the Radius: ";
            cin >> radius;
            cout << "Radius: " << radius << "m" << endl;

            centripetal_force = mass * pow(velocity, 2) / radius;
            cout << "Centripetal Force: " << centripetal_force << "N" << endl;
        }
    }

    void Wave_Velocity_Calc() {
        cout << "Enter Frequency: ";
        cin >> frequency;
        cout << "Frequency: " << frequency << "Hz" << endl;

        cout << "Enter Amplitude: ";
        cin >> Amplitude;
        cout << "Amplitude: " << Amplitude << "m" << endl;

        velocity_of_wave = frequency * Amplitude;
        cout << "Wave Velocity: " << velocity_of_wave << "ms^-1" << endl;
    }

    void Area_Calc() {
        cout << "Enter the Radius: ";
        cin >> radius;
        cout << "Radius: " << radius << "m" << endl;

        area = 4 * PI * pow(radius, 2);
        cout << "Area: " << area << "m^2" << endl;
    }

    void Torque_Of_Coils_Calc() {
        cout << "Enter the Magnetic Field: ";
        cin >> magnetic_Field;
        cout << "Magnetic Field: " << magnetic_Field << "T" << endl;

        cout << "Enter the current: ";
        cin >> current;
        cout << "Current: " << current << "A" << endl;

        cout << "Enter the number of coils: ";
        cin >> number_of_coils;
        cout << "Number of coils: " << number_of_coils << endl;

        int select;
        cout << "Select 1, if you have Area; select 2 if you don't have Area.";
        cin >> select;
        if (select == 1) {
            cout << "You have Area" << endl;
            cout << "Enter the Area: ";
            cin >> area;
            cout << "Area: " << area << "m^2" << endl;

            cout << "Enter the Angle: ";
            cin >> angle;
            cout << "Angle: " << angle << "°" << endl;

            torque = magnetic_Field * current * number_of_coils * area * sin(angle * PI / 180);
            cout << "Torque: " << torque << "Nm" << endl;
        }
        if (select == 2) {
            cout << "You don't have area, so find it." << endl;
            cout << "Enter the Radius: ";
            cin >> radius;
            cout << "Radius: " << radius << "m" << endl;

            area = 4 * PI * pow(radius, 2);
            cout << "Area: " << area << "m^2" << endl;
            cout << "Enter the Angle: ";
            cin >> angle;
            cout << "Angle: " << angle << "°" << endl;

            torque = magnetic_Field * current * number_of_coils * area * sin(angle * PI / 180);
            cout << "Torque: " << torque << "Nm" << endl;
        }
    }

    void Momentum_Calc() {
        cout << "Enter the mass:";
        cin >> mass;
        cout << "Mass: " << mass << "kg" << endl;

        int select;
        cout << "Select 1, if you have velocity; select 2 if you don't have velocity.";
        cin >> select;
        if (select == 1) {
            cout << "You have velocity" << endl;
            cout << "Enter the velocity:";
            cin >> velocity;
            cout << "Velocity: " << velocity << "ms^-1" << endl;

            momentum = mass * velocity;
            cout << "Momentum: " << momentum << "kg·m/s" << endl;
        }
        if (select == 2) {
            cout << "You don't have velocity, so find it." << endl;
            cout << "Enter the speed:";
            cin >> speed;
            cout << "Speed: " << speed << "ms^-1" << endl;

            cout << "Enter the time:";
            cin >> time;
            cout << "Time: " << time << "sec" << endl;

            velocity = speed / time;
            cout << "Velocity: " << velocity << "ms^-1" << endl;

            momentum = mass * velocity;
            cout << "Momentum: " << momentum << "kg·m/s" << endl;
        }
    }
};

int main() {
    Pyc pc;
    int choice;
    cout << "Enter your choice: 1. Speed, 2. Velocity, 3. Acceleration, 4. Density, 5. Force, 6. Kinetic Energy, 7. Potential Energy, 8. Elastic Potential Energy, 9. Pressure in liquid, 10. Heat, 11. Einstein, 12. Centripetal force, 13. Velocity of wave, 14. Area, 15. Torque, 16. Momentum: ";
    cin >> choice;

    switch (choice) {
        case 1:
            pc.calc_Speed();
            break;
        case 2:
            pc.Velocity_Calc();
            break;
        case 3:
            pc.Acceleration_Calc();
            break;
        case 4:
            pc.Density_Calc();
            break;
        case 5:
            pc.Force_Calc();
            break;
        case 6:
            pc.Kinetic_Energy_Calc();
            break;
        case 7:
            pc.Potential_Energy_Calc();
            break;
        case 8:
            pc.Elastic_Potential_Energy_Calc();
            break;
        case 9:
            pc.Pressure_In_Liquid_Calc();
            break;
        case 10:
            pc.Heat_Calc();
            break;
        case 11:
            pc.Einstein();
            break;
        case 12:
            pc.Centripetal_Force_Calc();
            break;
        case 13:
            pc.Wave_Velocity_Calc();
            break;
        case 14:
            pc.Area_Calc();
            break;
        case 15:
            pc.Torque_Of_Coils_Calc();
            break;
        case 16:
            pc.Momentum_Calc();
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    return 0;
}
