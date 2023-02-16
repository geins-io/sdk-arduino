

#include "API.Order.OrderComment.h"

using namespace Tiny;

API.Order.OrderComment::API.Order.OrderComment()
{
	orderId = int(0);
	comment = std::string();
	system = bool(false);
}

API.Order.OrderComment::API.Order.OrderComment(std::string jsonString)
{
	this->fromJson(jsonString);
}

API.Order.OrderComment::~API.Order.OrderComment()
{

}

void
API.Order.OrderComment::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *orderIdKey = "OrderId";

    if(object.has_key(orderIdKey))
    {
        bourne::json value = object[orderIdKey];



        jsonToValue(&orderId, value, "int");


    }

    const char *commentKey = "Comment";

    if(object.has_key(commentKey))
    {
        bourne::json value = object[commentKey];



        jsonToValue(&comment, value, "std::string");


    }

    const char *systemKey = "System";

    if(object.has_key(systemKey))
    {
        bourne::json value = object[systemKey];



        jsonToValue(&system, value, "bool");


    }


}

bourne::json
API.Order.OrderComment::toJson()
{
    bourne::json object = bourne::json::object();





    object["orderId"] = getOrderId();






    object["comment"] = getComment();






    object["system"] = isSystem();



    return object;

}

int
API.Order.OrderComment::getOrderId()
{
	return orderId;
}

void
API.Order.OrderComment::setOrderId(int  orderId)
{
	this->orderId = orderId;
}

std::string
API.Order.OrderComment::getComment()
{
	return comment;
}

void
API.Order.OrderComment::setComment(std::string  comment)
{
	this->comment = comment;
}

bool
API.Order.OrderComment::isSystem()
{
	return system;
}

void
API.Order.OrderComment::setSystem(bool  system)
{
	this->system = system;
}



