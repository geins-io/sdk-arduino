

#include "Shipping.Models.ParcelGroupOptions.h"

using namespace Tiny;

Shipping.Models.ParcelGroupOptions::Shipping.Models.ParcelGroupOptions()
{
	orderIds = std::list<int>();
	markAsDelivered = bool(false);
	signalCapturesCreated = bool(false);
}

Shipping.Models.ParcelGroupOptions::Shipping.Models.ParcelGroupOptions(std::string jsonString)
{
	this->fromJson(jsonString);
}

Shipping.Models.ParcelGroupOptions::~Shipping.Models.ParcelGroupOptions()
{

}

void
Shipping.Models.ParcelGroupOptions::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *orderIdsKey = "OrderIds";

    if(object.has_key(orderIdsKey))
    {
        bourne::json value = object[orderIdsKey];


        std::list<int> orderIds_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            orderIds_list.push_back(element);
        }
        orderIds = orderIds_list;


    }

    const char *markAsDeliveredKey = "MarkAsDelivered";

    if(object.has_key(markAsDeliveredKey))
    {
        bourne::json value = object[markAsDeliveredKey];



        jsonToValue(&markAsDelivered, value, "bool");


    }

    const char *signalCapturesCreatedKey = "SignalCapturesCreated";

    if(object.has_key(signalCapturesCreatedKey))
    {
        bourne::json value = object[signalCapturesCreatedKey];



        jsonToValue(&signalCapturesCreated, value, "bool");


    }


}

bourne::json
Shipping.Models.ParcelGroupOptions::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<int> orderIds_list = getOrderIds();
    bourne::json orderIds_arr = bourne::json::array();

    for(auto& var : orderIds_list)
    {
        orderIds_arr.append(var);
    }
    object["orderIds"] = orderIds_arr;









    object["markAsDelivered"] = isMarkAsDelivered();






    object["signalCapturesCreated"] = isSignalCapturesCreated();



    return object;

}

std::list<int>
Shipping.Models.ParcelGroupOptions::getOrderIds()
{
	return orderIds;
}

void
Shipping.Models.ParcelGroupOptions::setOrderIds(std::list <int> orderIds)
{
	this->orderIds = orderIds;
}

bool
Shipping.Models.ParcelGroupOptions::isMarkAsDelivered()
{
	return markAsDelivered;
}

void
Shipping.Models.ParcelGroupOptions::setMarkAsDelivered(bool  markAsDelivered)
{
	this->markAsDelivered = markAsDelivered;
}

bool
Shipping.Models.ParcelGroupOptions::isSignalCapturesCreated()
{
	return signalCapturesCreated;
}

void
Shipping.Models.ParcelGroupOptions::setSignalCapturesCreated(bool  signalCapturesCreated)
{
	this->signalCapturesCreated = signalCapturesCreated;
}



