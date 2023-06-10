#include "Weather.h"
#include "XmlService.h"
#include <iostream>

using namespace std;

int main()
{
XmlService xs;
Weather w = xs.getWeather("weather.xml");
cout << w;
}

