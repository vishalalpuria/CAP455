#include <iostream>
#include <iomanip>

class ApproximatePopulation {
private:
    double approximatePopulation;

public:
    ApproximatePopulation(double population) : approximatePopulation(population) {}

    friend std::ostream& operator<<(std::ostream& os, const ApproximatePopulation& obj) {
        os << "Approximate population at time " << std::fixed << std::setprecision(4) << obj.approximatePopulation;
        return os;
    }
};

class TimeRange {
public:
    double t0;
    double t;

    TimeRange(double initialTime, double targetTime) : t0(initialTime), t(targetTime) {}
};

class PopulationApproximation {
public:
    static ApproximatePopulation calculate(double t0, double initialPopulation, double growthRate, double h, double targetTime) {
        double currentPopulation = initialPopulation;
        double currentTime = t0;

        while (currentTime < targetTime) {
            double growth = growthRate * currentPopulation;
            currentPopulation += h * growth;
            currentTime += h;
        }

        return ApproximatePopulation(currentPopulation);
    }
};

int main() {
    double t0, initialPopulation, growthRate, h, targetTime;

    // Input
    std::cin >> t0 >> initialPopulation >> growthRate >> h >> targetTime;

    // Calculate approximate population using Euler's method
    ApproximatePopulation approxPopulation = PopulationApproximation::calculate(t0, initialPopulation, growthRate, h, targetTime);

    // Output
    std::cout << approxPopulation << std::endl;

    return 0;
}
