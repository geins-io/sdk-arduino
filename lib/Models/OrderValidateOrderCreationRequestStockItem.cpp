

#include "Order.ValidateOrderCreationRequest.StockItem.h"

using namespace Tiny;

Order.ValidateOrderCreationRequest.StockItem::Order.ValidateOrderCreationRequest.StockItem()
{
	itemId = int(0);
	quantity = int(0);
}

Order.ValidateOrderCreationRequest.StockItem::Order.ValidateOrderCreationRequest.StockItem(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.ValidateOrderCreationRequest.StockItem::~Order.ValidateOrderCreationRequest.StockItem()
{

}

void
Order.ValidateOrderCreationRequest.StockItem::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *itemIdKey = "ItemId";

    if(object.has_key(itemIdKey))
    {
        bourne::json value = object[itemIdKey];



        jsonToValue(&itemId, value, "int");


    }

    const char *quantityKey = "Quantity";

    if(object.has_key(quantityKey))
    {
        bourne::json value = object[quantityKey];



        jsonToValue(&quantity, value, "int");


    }


}

bourne::json
Order.ValidateOrderCreationRequest.StockItem::toJson()
{
    bourne::json object = bourne::json::object();





    object["itemId"] = getItemId();






    object["quantity"] = getQuantity();



    return object;

}

int
Order.ValidateOrderCreationRequest.StockItem::getItemId()
{
	return itemId;
}

void
Order.ValidateOrderCreationRequest.StockItem::setItemId(int  itemId)
{
	this->itemId = itemId;
}

int
Order.ValidateOrderCreationRequest.StockItem::getQuantity()
{
	return quantity;
}

void
Order.ValidateOrderCreationRequest.StockItem::setQuantity(int  quantity)
{
	this->quantity = quantity;
}



