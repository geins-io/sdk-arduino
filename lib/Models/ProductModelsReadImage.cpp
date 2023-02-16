

#include "Product.Models.Read.Image.h"

using namespace Tiny;

Product.Models.Read.Image::Product.Models.Read.Image()
{
	productId = int(0);
	url = std::string();
	order = int(0);
}

Product.Models.Read.Image::Product.Models.Read.Image(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.Image::~Product.Models.Read.Image()
{

}

void
Product.Models.Read.Image::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


    }

    const char *urlKey = "Url";

    if(object.has_key(urlKey))
    {
        bourne::json value = object[urlKey];



        jsonToValue(&url, value, "std::string");


    }

    const char *orderKey = "Order";

    if(object.has_key(orderKey))
    {
        bourne::json value = object[orderKey];



        jsonToValue(&order, value, "int");


    }


}

bourne::json
Product.Models.Read.Image::toJson()
{
    bourne::json object = bourne::json::object();





    object["productId"] = getProductId();






    object["url"] = getUrl();






    object["order"] = getOrder();



    return object;

}

int
Product.Models.Read.Image::getProductId()
{
	return productId;
}

void
Product.Models.Read.Image::setProductId(int  productId)
{
	this->productId = productId;
}

std::string
Product.Models.Read.Image::getUrl()
{
	return url;
}

void
Product.Models.Read.Image::setUrl(std::string  url)
{
	this->url = url;
}

int
Product.Models.Read.Image::getOrder()
{
	return order;
}

void
Product.Models.Read.Image::setOrder(int  order)
{
	this->order = order;
}



