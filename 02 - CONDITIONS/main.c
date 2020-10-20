/*
    02 - CONDITIONS
    I learned how to do a condition in C
*/
#include <stdio.h>

int main()
{


    /*
        Conditions are made like this
        if (condition)
        {
            do stuff...
        }
        else if (other condition)
        {
            do stuff if another case
        }
        else
        {
            do stuff if every condition is false
        }

        or like this

        switch (variable)
        {
            case case:
                do stuff
                break;
            case other_case:
                do stuff
                break;
            default:
                do stuff if no case is true
                break;
        }
    */

    // IF STATEMENTS

    // variable for age
    int age = 19;

    // if the user have 18 yo we say "Congratulations ! You have 18 years old !"
    if (age == 18)
    {
        printf("Congratulations ! You have 18 years old !\n");
    }
    // if age is more or equal than 122 yo we say "You're Jeanne Calment or the new oldest person in the world"
    else if (age >= 122)
    {
        printf("You're Jeanne Calment or the new oldest person in the world !\n");
    }
    // if age is under or equal 0 we say "You're not born or you're born recently"
    else if (age <= 0)
    {
        printf("You're not born or you're born recently !\n");
    }
    // if age is strictly under 13 we say "You're a children !"
    else if (age < 13)
    {
        printf("You're a children !\n");
    }
    // if age is strictly over 12 AND strictly under 18 we say "You're a teenager !"
    else if (age > 12 && age < 18)
    {
        printf("You're a teenager !\n");
    }
    else
    {
        printf("You're adult\n");
    }

    // SWITCH STATEMENTS

    // variable for the switch statement
    int percentage = 25;

    switch (percentage)
    {
        case 25: // if percentage == 25
            printf("75 % remains\n");
            break;
        case 50: // if percentage == 50
            printf("50 % remains\n");
            break;
        case 75: // if percentage == 75
            printf("25 % remains\n");
            break;
        case 100: // if percentage == 100
            printf("Wow ! 100 %\n");
            break;
        default: // other cases
            printf("I don't know what to say\n");
            break;
    }

    return 0;
}
