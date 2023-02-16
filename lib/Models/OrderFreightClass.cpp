

#include "Order.FreightClass.h"

using namespace Tiny;

Order.FreightClass::Order.FreightClass()
{
	id = int(0);
	type = int(0);
	name = std::string();
	typeAsEnum = int(0);
}

Order.FreightClass::Order.FreightClass(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.FreightClass::~Order.FreightClass()
{

}

void
Order.FreightClass::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *typeKey = "Type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *typeAsEnumKey = "TypeAsEnum";

    if(object.has_key(typeAsEnumKey))
    {
        bourne::json value = object[typeAsEnumKey];



        jsonToValue(&typeAsEnum, value, "int");


    }


}

bourne::json
Order.FreightClass::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["type"] = getType();






    object["name"] = getName();






    object["typeAsEnum"] = getTypeAsEnum();



    return object;

}

int
Order.FreightClass::getId()
{
	return id;
}

void
Order.FreightClass::setId(int  id)
{
	this->id = id;
}

int
Order.FreightClass::getType()
{
	return type;
}

void
Order.FreightClass::setType(int  type)
{
	this->type = type;
}

std::string
Order.FreightClass::getName()
{
	return name;
}

void
Order.FreightClass::setName(std::string  name)
{
	this->name = name;
}

int
Order.FreightClass::getTypeAsEnum()
{
	return typeAsEnum;
}

void
Order.FreightClass::setTypeAsEnum(int  typeAsEnum)
{
	this->typeAsEnum = typeAsEnum;
}



