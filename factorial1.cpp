#include <iostream>
using namespace std;
class factorial
{
private:
	int n;
public:
	factorial() {

	}
    int calculo_fac(int n) {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }

};

int main() {
	return 0;
}