// Dice class - declaration

#pragma once

class Dice
{
    private:
        int die0; // Value on first die
        int die1; // Value on second die

    public:
        Dice();
        int get_die0() const;
        int get_die1() const;
        int get_total() const; // Get the total value of both dice
        void roll(); // Roll the dice
};