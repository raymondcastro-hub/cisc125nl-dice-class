// Dice class - declaration

#pragma once

class Dice
{
    public:
        int get_die0();
        int get_die1();
        int get_total(); // Get the total value of both dice
        void roll(); // Roll the dice

    private:
        int die0; // Value on first die
        int die1; // Value on second die
};