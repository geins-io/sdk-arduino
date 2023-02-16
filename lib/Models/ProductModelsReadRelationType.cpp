

#include "Product.Models.Read.RelationType.h"

using namespace Tiny;

Product.Models.Read.RelationType::Product.Models.Read.RelationType()
{
	id = int(0);
	name = std::string();
	order = int(0);
}

Product.Models.Read.RelationType::Product.Models.Read.RelationType(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.RelationType::~Product.Models.Read.RelationType()
{

}

void
Product.Models.Read.RelationType::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *orderKey = "Order";

    if(object.has_key(orderKey))
    {
        bourne::json value = object[orderKey];



        jsonToValue(&order, value, "int");


    }


}

bourne::json
Product.Models.Read.RelationType::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();






    object["order"] = getOrder();



    return object;

}

int
Product.Models.Read.RelationType::getId()
{
	return id;
}

void
Product.Models.Read.RelationType::setId(int  id)
{
	this->id = id;
}

std::string
Product.Models.Read.RelationType::getName()
{
	return name;
}

void
Product.Models.Read.RelationType::setName(std::string  name)
{
	this->name = name;
}

int
Product.Models.Read.RelationType::getOrder()
{
	return order;
}

void
Product.Models.Read.RelationType::setOrder(int  order)
{
	this->order = order;
}



