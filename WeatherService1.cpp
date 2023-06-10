#include "JsonService.h"
#include "XmlService.h"
#include <iostream>

using namespace std;

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
	cout << w;
	XmlService xs;
	Weather s = xs.getWeather("weather.xml");
	cout << s;
}
