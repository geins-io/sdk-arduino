

#include "API.Order.TransactionData.h"

using namespace Tiny;

API.Order.TransactionData::API.Order.TransactionData()
{
	orderId = int(0);
	transactionId = std::string();
}

API.Order.TransactionData::API.Order.TransactionData(std::string jsonString)
{
	this->fromJson(jsonString);
}

API.Order.TransactionData::~API.Order.TransactionData()
{

}

void
API.Order.TransactionData::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *orderIdKey = "OrderId";

    if(object.has_key(orderIdKey))
    {
        bourne::json value = object[orderIdKey];



        jsonToValue(&orderId, value, "int");


    }

    const char *transactionIdKey = "TransactionId";

    if(object.has_key(transactionIdKey))
    {
        bourne::json value = object[transactionIdKey];



        jsonToValue(&transactionId, value, "std::string");


    }


}

bourne::json
API.Order.TransactionData::toJson()
{
    bourne::json object = bourne::json::object();





    object["orderId"] = getOrderId();






    object["transactionId"] = getTransactionId();



    return object;

}

int
API.Order.TransactionData::getOrderId()
{
	return orderId;
}

void
API.Order.TransactionData::setOrderId(int  orderId)
{
	this->orderId = orderId;
}

std::string
API.Order.TransactionData::getTransactionId()
{
	return transactionId;
}

void
API.Order.TransactionData::setTransactionId(std::string  transactionId)
{
	this->transactionId = transactionId;
}



