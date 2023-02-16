

#include "Product.Models.Read.ProductItem.h"

using namespace Tiny;

Product.Models.Read.ProductItem::Product.Models.Read.ProductItem()
{
	itemId = int(0);
	articleNumber = std::string();
	productId = int(0);
	name = std::string();
	shelf = std::string();
	weight = int(0);
	length = int(0);
	width = int(0);
	height = int(0);
	gtin = std::string();
	dateCreated = std::string();
	dateUpdated = std::string();
	active = bool(false);
	externalId = std::string();
	stock = Product.Models.Read.ProductItemStock();
	shippingFees = std::list<Product.Models.Read.ShippingFee>();
}

Product.Models.Read.ProductItem::Product.Models.Read.ProductItem(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Read.ProductItem::~Product.Models.Read.ProductItem()
{

}

void
Product.Models.Read.ProductItem::fromJson(std::string jsonObj)
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

    const char *productIdKey = "ProductId";

    if(object.has_key(productIdKey))
    {
        bourne::json value = object[productIdKey];



        jsonToValue(&productId, value, "int");


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

    const char *dateCreatedKey = "DateCreated";

    if(object.has_key(dateCreatedKey))
    {
        bourne::json value = object[dateCreatedKey];



        jsonToValue(&dateCreated, value, "std::string");


    }

    const char *dateUpdatedKey = "DateUpdated";

    if(object.has_key(dateUpdatedKey))
    {
        bourne::json value = object[dateUpdatedKey];



        jsonToValue(&dateUpdated, value, "std::string");


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

    const char *stockKey = "Stock";

    if(object.has_key(stockKey))
    {
        bourne::json value = object[stockKey];




        Product.Models.Read.ProductItemStock* obj = &stock;
		obj->fromJson(value.dump());

    }

    const char *shippingFeesKey = "ShippingFees";

    if(object.has_key(shippingFeesKey))
    {
        bourne::json value = object[shippingFeesKey];


        std::list<Product.Models.Read.ShippingFee> shippingFees_list;
        Product.Models.Read.ShippingFee element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            shippingFees_list.push_back(element);
        }
        shippingFees = shippingFees_list;


    }


}

bourne::json
Product.Models.Read.ProductItem::toJson()
{
    bourne::json object = bourne::json::object();





    object["itemId"] = getItemId();






    object["articleNumber"] = getArticleNumber();






    object["productId"] = getProductId();






    object["name"] = getName();






    object["shelf"] = getShelf();






    object["weight"] = getWeight();






    object["length"] = getLength();






    object["width"] = getWidth();






    object["height"] = getHeight();






    object["gtin"] = getGtin();






    object["dateCreated"] = getDateCreated();






    object["dateUpdated"] = getDateUpdated();






    object["active"] = isActive();






    object["externalId"] = getExternalId();







	object["stock"] = getStock().toJson();




    std::list<Product.Models.Read.ShippingFee> shippingFees_list = getShippingFees();
    bourne::json shippingFees_arr = bourne::json::array();

    for(auto& var : shippingFees_list)
    {
        Product.Models.Read.ShippingFee obj = var;
        shippingFees_arr.append(obj.toJson());
    }
    object["shippingFees"] = shippingFees_arr;




    return object;

}

int
Product.Models.Read.ProductItem::getItemId()
{
	return itemId;
}

void
Product.Models.Read.ProductItem::setItemId(int  itemId)
{
	this->itemId = itemId;
}

std::string
Product.Models.Read.ProductItem::getArticleNumber()
{
	return articleNumber;
}

void
Product.Models.Read.ProductItem::setArticleNumber(std::string  articleNumber)
{
	this->articleNumber = articleNumber;
}

int
Product.Models.Read.ProductItem::getProductId()
{
	return productId;
}

void
Product.Models.Read.ProductItem::setProductId(int  productId)
{
	this->productId = productId;
}

std::string
Product.Models.Read.ProductItem::getName()
{
	return name;
}

void
Product.Models.Read.ProductItem::setName(std::string  name)
{
	this->name = name;
}

std::string
Product.Models.Read.ProductItem::getShelf()
{
	return shelf;
}

void
Product.Models.Read.ProductItem::setShelf(std::string  shelf)
{
	this->shelf = shelf;
}

int
Product.Models.Read.ProductItem::getWeight()
{
	return weight;
}

void
Product.Models.Read.ProductItem::setWeight(int  weight)
{
	this->weight = weight;
}

int
Product.Models.Read.ProductItem::getLength()
{
	return length;
}

void
Product.Models.Read.ProductItem::setLength(int  length)
{
	this->length = length;
}

int
Product.Models.Read.ProductItem::getWidth()
{
	return width;
}

void
Product.Models.Read.ProductItem::setWidth(int  width)
{
	this->width = width;
}

int
Product.Models.Read.ProductItem::getHeight()
{
	return height;
}

void
Product.Models.Read.ProductItem::setHeight(int  height)
{
	this->height = height;
}

std::string
Product.Models.Read.ProductItem::getGtin()
{
	return gtin;
}

void
Product.Models.Read.ProductItem::setGtin(std::string  gtin)
{
	this->gtin = gtin;
}

std::string
Product.Models.Read.ProductItem::getDateCreated()
{
	return dateCreated;
}

void
Product.Models.Read.ProductItem::setDateCreated(std::string  dateCreated)
{
	this->dateCreated = dateCreated;
}

std::string
Product.Models.Read.ProductItem::getDateUpdated()
{
	return dateUpdated;
}

void
Product.Models.Read.ProductItem::setDateUpdated(std::string  dateUpdated)
{
	this->dateUpdated = dateUpdated;
}

bool
Product.Models.Read.ProductItem::isActive()
{
	return active;
}

void
Product.Models.Read.ProductItem::setActive(bool  active)
{
	this->active = active;
}

std::string
Product.Models.Read.ProductItem::getExternalId()
{
	return externalId;
}

void
Product.Models.Read.ProductItem::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

Product.Models.Read.ProductItemStock
Product.Models.Read.ProductItem::getStock()
{
	return stock;
}

void
Product.Models.Read.ProductItem::setStock(Product.Models.Read.ProductItemStock  stock)
{
	this->stock = stock;
}

std::list<Product.Models.Read.ShippingFee>
Product.Models.Read.ProductItem::getShippingFees()
{
	return shippingFees;
}

void
Product.Models.Read.ProductItem::setShippingFees(std::list <Product.Models.Read.ShippingFee> shippingFees)
{
	this->shippingFees = shippingFees;
}



