#include "main.h"
/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
//pros::lcd::register_btn0_cb(on_center_button);
void competition_initialize() {
    pros::lcd::set_text(1, "Competition Initialization");
}
