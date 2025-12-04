#include "car.hpp"

int main(void)
{
	Car car;

	car.start();

	car.shift_gears_up();
	car.shift_gears_down();
	car.reverse();
	car.shift_gears_up();
	car.shift_gears_up();

	car.accelerate(100);

	car.apply_force_on_brakes(10);

	car.turn_wheel(15);

	car.straighten_wheels();

	car.apply_emergency_brakes();

	car.accelerate(200);

	car.stop();

	car.accelerate(150);
}