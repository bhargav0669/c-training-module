#include <stdio.h>
#include <stdlib.h>

double calculate_cooling_range_from_thermal_equation(int temperature)
{
    double a = 0, b = 0, c = 0;
    if (temperature == 0)
        return 0;
    else if (temperature <= 25)
        a = 0.020, b = -0.034, c = 15.363;
    else if (temperature <= 50)
    {
        return 80;
    }
    else if (temperature <= 75)
        a = 0.020, b = -0.034, c = 45.363;
    else
        return 100;
    double cooling_range = a * temperature * temperature + b * temperature + c;
    return cooling_range;
}

int main()
{
    int mode;
    printf("HII! WELCOME TO AC CONTROL UNIT PLEASE SELECT MODE FROM BELOW GIVEN CHOICE");
    printf("\n 0 FOR MANUAL MODE");
    printf("\n 1 FOR OPEN LOOP MODE");
    printf("\n 2 FOR CLOSED LOOP MODE");
    printf("\n ENTER MODE: \n");
    scanf("%d", &mode);
    double temperature, cooling_range;

    switch (mode)
    {
    case 0:
        printf("Enter Cooling Range\n");
        scanf("%lf", &cooling_range);
        break;
    case 1:
        printf("Enter Temperature\n");
        scanf("%lf", &temperature);
        cooling_range = calculate_cooling_range_from_thermal_equation(temperature);
        break;
    case 2:
        printf("Enter Cooling Range\n");
        scanf("%lf", &cooling_range);
        printf("Enter Temperature\n");
        scanf("%lf", &temperature);
        if (cooling_range < temperature)
            cooling_range = temperature;
        break;
    default:
        printf("Invalid range\n");
    }

    if (cooling_range < 20 || cooling_range > 100)
        printf("Invalid cooling range\n");
    else
        printf("Cooling range: %lf \n", cooling_range);
    return 0;
}
