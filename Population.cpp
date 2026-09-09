#include <iostream>
#include <string>
using namespace std;

int main()
{
    double day, year, initial_population, babies, deaths, immigrants, popn_yearly;
    initial_population = 312032486;
    day = 86400;                        
    year = 365*day;                     
    babies = year / 7.0; 
    deaths = year / 13.0;
    immigrants = year / 45.0;
    popn_yearly = babies - deaths + immigrants;

    for (int i = 1; i <= 5; i++)
    {
        int final_population = initial_population + (popn_yearly * i);
        cout << "Population after " << i << " year(s) is: " << final_population << endl;
    }

    return 0;
}


