

#include "Order.Models.OrderStatus.h"

using namespace Tiny;

Order.Models.OrderStatus::Order.Models.OrderStatus()
{
	name = std::string();
	displayName = std::string();
}

Order.Models.OrderStatus::Order.Models.OrderStatus(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.OrderStatus::~Order.Models.OrderStatus()
{

}

void
Order.Models.OrderStatus::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *displayNameKey = "DisplayName";

    if(object.has_key(displayNameKey))
    {
        bourne::json value = object[displayNameKey];



        jsonToValue(&displayName, value, "std::string");


    }


}

bourne::json
Order.Models.OrderStatus::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["displayName"] = getDisplayName();



    return object;

}

std::string
Order.Models.OrderStatus::getName()
{
	return name;
}

void
Order.Models.OrderStatus::setName(std::string  name)
{
	this->name = name;
}

std::string
Order.Models.OrderStatus::getDisplayName()
{
	return displayName;
}

void
Order.Models.OrderStatus::setDisplayName(std::string  displayName)
{
	this->displayName = displayName;
}



