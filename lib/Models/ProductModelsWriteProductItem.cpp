

#include "Product.Models.Write.ProductItem.h"

using namespace Tiny;

Product.Models.Write.ProductItem::Product.Models.Write.ProductItem()
{
	itemId = int(0);
	articleNumber = std::string();
	name = std::string();
	shelf = std::string();
	weight = int(0);
	length = int(0);
	width = int(0);
	height = int(0);
	gtin = std::string();
	active = bool(false);
	externalId = std::string();
}

Product.Models.Write.ProductItem::Product.Models.Write.ProductItem(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Write.ProductItem::~Product.Models.Write.ProductItem()
{

}

void
Product.Models.Write.ProductItem::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *itemIdKey = "ItemId";

    if(object.has_key(itemIdKey))
    {
        bourne::json value = object[itemIdKey];



        jsonToValue(&itemId, value, "int");


    }

    const char *articleNumberKey = "ArticleNumber";

    if(object.has_key(articleNumberKey))
    {
        bourne::json value = object[articleNumberKey];



        jsonToValue(&articleNumber, value, "std::string");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *shelfKey = "Shelf";

    if(object.has_key(shelfKey))
    {
        bourne::json value = object[shelfKey];



        jsonToValue(&shelf, value, "std::string");


    }

    const char *weightKey = "Weight";

    if(object.has_key(weightKey))
    {
        bourne::json value = object[weightKey];



        jsonToValue(&weight, value, "int");


    }

    const char *lengthKey = "Length";

    if(object.has_key(lengthKey))
    {
        bourne::json value = object[lengthKey];



        jsonToValue(&length, value, "int");


    }

    const char *widthKey = "Width";

    if(object.has_key(widthKey))
    {
        bourne::json value = object[widthKey];



        jsonToValue(&width, value, "int");


    }

    const char *heightKey = "Height";

    if(object.has_key(heightKey))
    {
        bourne::json value = object[heightKey];



        jsonToValue(&height, value, "int");


    }

    const char *gtinKey = "Gtin";

    if(object.has_key(gtinKey))
    {
        bourne::json value = object[gtinKey];



        jsonToValue(&gtin, value, "std::string");


    }

    const char *activeKey = "Active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "bool");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }


}

bourne::json
Product.Models.Write.ProductItem::toJson()
{
    bourne::json object = bourne::json::object();





    object["itemId"] = getItemId();






    object["articleNumber"] = getArticleNumber();






    object["name"] = getName();






    object["shelf"] = getShelf();






    object["weight"] = getWeight();






    object["length"] = getLength();






    object["width"] = getWidth();






    object["height"] = getHeight();






    object["gtin"] = getGtin();






    object["active"] = isActive();






    object["externalId"] = getExternalId();



    return object;

}

int
Product.Models.Write.ProductItem::getItemId()
{
	return itemId;
}

void
Product.Models.Write.ProductItem::setItemId(int  itemId)
{
	this->itemId = itemId;
}

std::string
Product.Models.Write.ProductItem::getArticleNumber()
{
	return articleNumber;
}

void
Product.Models.Write.ProductItem::setArticleNumber(std::string  articleNumber)
{
	this->articleNumber = articleNumber;
}

std::string
Product.Models.Write.ProductItem::getName()
{
	return name;
}

void
Product.Models.Write.ProductItem::setName(std::string  name)
{
	this->name = name;
}

std::string
Product.Models.Write.ProductItem::getShelf()
{
	return shelf;
}

void
Product.Models.Write.ProductItem::setShelf(std::string  shelf)
{
	this->shelf = shelf;
}

int
Product.Models.Write.ProductItem::getWeight()
{
	return weight;
}

void
Product.Models.Write.ProductItem::setWeight(int  weight)
{
	this->weight = weight;
}

int
Product.Models.Write.ProductItem::getLength()
{
	return length;
}

void
Product.Models.Write.ProductItem::setLength(int  length)
{
	this->length = length;
}

int
Product.Models.Write.ProductItem::getWidth()
{
	return width;
}

void
Product.Models.Write.ProductItem::setWidth(int  width)
{
	this->width = width;
}

int
Product.Models.Write.ProductItem::getHeight()
{
	return height;
}

void
Product.Models.Write.ProductItem::setHeight(int  height)
{
	this->height = height;
}

std::string
Product.Models.Write.ProductItem::getGtin()
{
	return gtin;
}

void
Product.Models.Write.ProductItem::setGtin(std::string  gtin)
{
	this->gtin = gtin;
}

bool
Product.Models.Write.ProductItem::isActive()
{
	return active;
}

void
Product.Models.Write.ProductItem::setActive(bool  active)
{
	this->active = active;
}

std::string
Product.Models.Write.ProductItem::getExternalId()
{
	return externalId;
}

void
Product.Models.Write.ProductItem::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}



