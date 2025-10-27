#include "car.hpp"

int main(void)
{
	Car car;

	car.start();
	// car.stop();

	car.shift_gears_up();
	car.shift_gears_down();
	car.reverse();

	car.accelerate(100);

	car.apply_emergency_brakes();


	car.stop();

}