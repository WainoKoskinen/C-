#include <iostream>
#include <vector>

class SignalSmoother {
private:
    std::vector<double> buffer;
    int maxSize;

public:
    SignalSmoother(int size) {
        maxSize = size;
    }

    void addMeasurement(double value) {
        buffer.push_back(value);

        if (buffer.size() > maxSize) {
            // TASK: Remove the oldest element (index 0)
            buffer.erase(buffer.begin());
            
        }
    }

    double getAverage() {
        if (buffer.empty()) return 0.0;

        double sum = 0.0;

        // TASK: Calculate sum of all elements in buffer
        for (double val : buffer) {
            sum += val;
        }

        return sum / buffer.size();
    }
};

// --- TEST BENCH ---
int main() {
    SignalSmoother s(3); 

    s.addMeasurement(10.0); 
    std::cout << "Avg (10): " << s.getAverage() << std::endl;

    s.addMeasurement(20.0);
    std::cout << "Avg (15): " << s.getAverage() << std::endl;

    s.addMeasurement(30.0);
    std::cout << "Avg (20): " << s.getAverage() << std::endl;

    s.addMeasurement(300.0); // 10 should be removed
    std::cout << "Avg (116.6): " << s.getAverage() << std::endl;

    return 0;
}