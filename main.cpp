#include "integrations.h"
#include <chrono>

using namespace integrations;

int main() {
    auto begin = std::chrono::steady_clock::now();
    cout << "Total area (Rect) = " << useRectangleMethod(sqrt, 0, 10000, 50000000) << endl;
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    cout << "Total time = " << elapsed_ms.count() << endl;
    begin = std::chrono::steady_clock::now();
    cout << "Total area (Trapezoid) = " << useTrapezoidMethod(sqrt, 0, 1000, 50000000) << endl;
    end = std::chrono::steady_clock::now();
    elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    cout << "Total time = " << elapsed_ms.count() << endl;
    return 0;
}
