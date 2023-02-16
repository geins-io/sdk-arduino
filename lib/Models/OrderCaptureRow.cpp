

#include "Order.CaptureRow.h"

using namespace Tiny;

Order.CaptureRow::Order.CaptureRow()
{
	orderRowId = int(0);
	itemId = int(0);
	productId = int(0);
	price = float(0);
	priceExVat = float(0);
	name = std::string();
	productName = std::string();
	variant = std::string();
	brand = std::string();
}

Order.CaptureRow::Order.CaptureRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.CaptureRow::~Order.CaptureRow()
{

}

void
Order.CaptureRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *orderRowIdKey = "OrderRowId";

    if(object.has_key(orderRowIdKey))
    {
        bourne::json value = object[orderRowIdKey];



        jsonToValue(&orderRowId, value, "int");


    }

    const char *itemIdKey = "ItemId";

    if(object.has_key(itemIdKey))
    {
        bourne::json value = object[itemIdKey];



        jsonToValue(&itemId, value, "int");


    }

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


    }

    const char *priceKey = "Price";

    if(object.has_key(priceKey))
    {
        bourne::json value = object[priceKey];



        jsonToValue(&price, value, "double");


    }

    const char *priceExVatKey = "PriceExVat";

    if(object.has_key(priceExVatKey))
    {
        bourne::json value = object[priceExVatKey];



        jsonToValue(&priceExVat, value, "double");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *productNameKey = "ProductName";

    if(object.has_key(productNameKey))
    {
        bourne::json value = object[productNameKey];



        jsonToValue(&productName, value, "std::string");


    }

    const char *variantKey = "Variant";

    if(object.has_key(variantKey))
    {
        bourne::json value = object[variantKey];



        jsonToValue(&variant, value, "std::string");


    }

    const char *brandKey = "Brand";

    if(object.has_key(brandKey))
    {
        bourne::json value = object[brandKey];



        jsonToValue(&brand, value, "std::string");


    }


}

bourne::json
Order.CaptureRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["orderRowId"] = getOrderRowId();






    object["itemId"] = getItemId();






    object["productId"] = getProductId();






    object["price"] = getPrice();






    object["priceExVat"] = getPriceExVat();






    object["name"] = getName();






    object["productName"] = getProductName();






    object["variant"] = getVariant();






    object["brand"] = getBrand();



    return object;

}

int
Order.CaptureRow::getOrderRowId()
{
	return orderRowId;
}

void
Order.CaptureRow::setOrderRowId(int  orderRowId)
{
	this->orderRowId = orderRowId;
}

int
Order.CaptureRow::getItemId()
{
	return itemId;
}

void
Order.CaptureRow::setItemId(int  itemId)
{
	this->itemId = itemId;
}

int
Order.CaptureRow::getProductId()
{
	return productId;
}

void
Order.CaptureRow::setProductId(int  productId)
{
	this->productId = productId;
}

double
Order.CaptureRow::getPrice()
{
	return price;
}

void
Order.CaptureRow::setPrice(double  price)
{
	this->price = price;
}

double
Order.CaptureRow::getPriceExVat()
{
	return priceExVat;
}

void
Order.CaptureRow::setPriceExVat(double  priceExVat)
{
	this->priceExVat = priceExVat;
}

std::string
Order.CaptureRow::getName()
{
	return name;
}

void
Order.CaptureRow::setName(std::string  name)
{
	this->name = name;
}

std::string
Order.CaptureRow::getProductName()
{
	return productName;
}

void
Order.CaptureRow::setProductName(std::string  productName)
{
	this->productName = productName;
}

std::string
Order.CaptureRow::getVariant()
{
	return variant;
}

void
Order.CaptureRow::setVariant(std::string  variant)
{
	this->variant = variant;
}

std::string
Order.CaptureRow::getBrand()
{
	return brand;
}

void
Order.CaptureRow::setBrand(std::string  brand)
{
	this->brand = brand;
}



