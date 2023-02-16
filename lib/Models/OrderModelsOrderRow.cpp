

#include "Order.Models.OrderRow.h"

using namespace Tiny;

Order.Models.OrderRow::Order.Models.OrderRow()
{
	id = int(0);
}

Order.Models.OrderRow::Order.Models.OrderRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.OrderRow::~Order.Models.OrderRow()
{

}

void
Order.Models.OrderRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }


}

bourne::json
Order.Models.OrderRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();



    return object;

}

int
Order.Models.OrderRow::getId()
{
	return id;
}

void
Order.Models.OrderRow::setId(int  id)
{
	this->id = id;
}



