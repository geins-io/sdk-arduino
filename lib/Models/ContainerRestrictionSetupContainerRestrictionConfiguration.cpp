

#include "ContainerRestrictionSetup.ContainerRestrictionConfiguration.h"

using namespace Tiny;

ContainerRestrictionSetup.ContainerRestrictionConfiguration::ContainerRestrictionSetup.ContainerRestrictionConfiguration()
{
	allowedLayouts = std::list<int>();
	bannedWidgets = std::list<std::string>();
}

ContainerRestrictionSetup.ContainerRestrictionConfiguration::ContainerRestrictionSetup.ContainerRestrictionConfiguration(std::string jsonString)
{
	this->fromJson(jsonString);
}

ContainerRestrictionSetup.ContainerRestrictionConfiguration::~ContainerRestrictionSetup.ContainerRestrictionConfiguration()
{

}

void
ContainerRestrictionSetup.ContainerRestrictionConfiguration::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *allowedLayoutsKey = "AllowedLayouts";

    if(object.has_key(allowedLayoutsKey))
    {
        bourne::json value = object[allowedLayoutsKey];


        std::list<int> allowedLayouts_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            allowedLayouts_list.push_back(element);
        }
        allowedLayouts = allowedLayouts_list;


    }

    const char *bannedWidgetsKey = "BannedWidgets";

    if(object.has_key(bannedWidgetsKey))
    {
        bourne::json value = object[bannedWidgetsKey];


        std::list<std::string> bannedWidgets_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            bannedWidgets_list.push_back(element);
        }
        bannedWidgets = bannedWidgets_list;


    }


}

bourne::json
ContainerRestrictionSetup.ContainerRestrictionConfiguration::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<int> allowedLayouts_list = getAllowedLayouts();
    bourne::json allowedLayouts_arr = bourne::json::array();

    for(auto& var : allowedLayouts_list)
    {
        allowedLayouts_arr.append(var);
    }
    object["allowedLayouts"] = allowedLayouts_arr;








    std::list<std::string> bannedWidgets_list = getBannedWidgets();
    bourne::json bannedWidgets_arr = bourne::json::array();

    for(auto& var : bannedWidgets_list)
    {
        bannedWidgets_arr.append(var);
    }
    object["bannedWidgets"] = bannedWidgets_arr;






    return object;

}

std::list<int>
ContainerRestrictionSetup.ContainerRestrictionConfiguration::getAllowedLayouts()
{
	return allowedLayouts;
}

void
ContainerRestrictionSetup.ContainerRestrictionConfiguration::setAllowedLayouts(std::list <int> allowedLayouts)
{
	this->allowedLayouts = allowedLayouts;
}

std::list<std::string>
ContainerRestrictionSetup.ContainerRestrictionConfiguration::getBannedWidgets()
{
	return bannedWidgets;
}

void
ContainerRestrictionSetup.ContainerRestrictionConfiguration::setBannedWidgets(std::list <std::string> bannedWidgets)
{
	this->bannedWidgets = bannedWidgets;
}



