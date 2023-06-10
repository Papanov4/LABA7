#include "JsonService.h"
#include "Service.h"
#include "json.hpp"

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");	
}
