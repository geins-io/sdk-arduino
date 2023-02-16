

#include "WidgetRestrictionSetup.WidgetRestrictionConfiguration.h"

using namespace Tiny;

WidgetRestrictionSetup.WidgetRestrictionConfiguration::WidgetRestrictionSetup.WidgetRestrictionConfiguration()
{
	forcedResponsiveMode = int(0);
	allowedSizes = std::list<int>();
}

WidgetRestrictionSetup.WidgetRestrictionConfiguration::WidgetRestrictionSetup.WidgetRestrictionConfiguration(std::string jsonString)
{
	this->fromJson(jsonString);
}

WidgetRestrictionSetup.WidgetRestrictionConfiguration::~WidgetRestrictionSetup.WidgetRestrictionConfiguration()
{

}

void
WidgetRestrictionSetup.WidgetRestrictionConfiguration::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *forcedResponsiveModeKey = "ForcedResponsiveMode";

    if(object.has_key(forcedResponsiveModeKey))
    {
        bourne::json value = object[forcedResponsiveModeKey];



        jsonToValue(&forcedResponsiveMode, value, "int");


    }

    const char *allowedSizesKey = "AllowedSizes";

    if(object.has_key(allowedSizesKey))
    {
        bourne::json value = object[allowedSizesKey];


        std::list<int> allowedSizes_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            allowedSizes_list.push_back(element);
        }
        allowedSizes = allowedSizes_list;


    }


}

bourne::json
WidgetRestrictionSetup.WidgetRestrictionConfiguration::toJson()
{
    bourne::json object = bourne::json::object();





    object["forcedResponsiveMode"] = getForcedResponsiveMode();





    std::list<int> allowedSizes_list = getAllowedSizes();
    bourne::json allowedSizes_arr = bourne::json::array();

    for(auto& var : allowedSizes_list)
    {
        allowedSizes_arr.append(var);
    }
    object["allowedSizes"] = allowedSizes_arr;






    return object;

}

int
WidgetRestrictionSetup.WidgetRestrictionConfiguration::getForcedResponsiveMode()
{
	return forcedResponsiveMode;
}

void
WidgetRestrictionSetup.WidgetRestrictionConfiguration::setForcedResponsiveMode(int  forcedResponsiveMode)
{
	this->forcedResponsiveMode = forcedResponsiveMode;
}

std::list<int>
WidgetRestrictionSetup.WidgetRestrictionConfiguration::getAllowedSizes()
{
	return allowedSizes;
}

void
WidgetRestrictionSetup.WidgetRestrictionConfiguration::setAllowedSizes(std::list <int> allowedSizes)
{
	this->allowedSizes = allowedSizes;
}



