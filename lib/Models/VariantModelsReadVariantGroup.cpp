

#include "Variant.Models.Read.VariantGroup.h"

using namespace Tiny;

Variant.Models.Read.VariantGroup::Variant.Models.Read.VariantGroup()
{
	groupId = int(0);
	name = std::string();
	collapseInLists = bool(false);
	mainProductId = int(0);
	productIds = std::list<int>();
	products = std::list<Product.Models.Read.Product>();
}

Variant.Models.Read.VariantGroup::Variant.Models.Read.VariantGroup(std::string jsonString)
{
	this->fromJson(jsonString);
}

Variant.Models.Read.VariantGroup::~Variant.Models.Read.VariantGroup()
{

}

void
Variant.Models.Read.VariantGroup::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *groupIdKey = "GroupId";

    if(object.has_key(groupIdKey))
    {
        bourne::json value = object[groupIdKey];



        jsonToValue(&groupId, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *collapseInListsKey = "CollapseInLists";

    if(object.has_key(collapseInListsKey))
    {
        bourne::json value = object[collapseInListsKey];



        jsonToValue(&collapseInLists, value, "bool");


    }

    const char *mainProductIdKey = "MainProductId";

    if(object.has_key(mainProductIdKey))
    {
        bourne::json value = object[mainProductIdKey];



        jsonToValue(&mainProductId, value, "int");


    }

    const char *productIdsKey = "ProductIds";

    if(object.has_key(productIdsKey))
    {
        bourne::json value = object[productIdsKey];


        std::list<int> productIds_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            productIds_list.push_back(element);
        }
        productIds = productIds_list;


    }

    const char *productsKey = "Products";

    if(object.has_key(productsKey))
    {
        bourne::json value = object[productsKey];


        std::list<Product.Models.Read.Product> products_list;
        Product.Models.Read.Product element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            products_list.push_back(element);
        }
        products = products_list;


    }


}

bourne::json
Variant.Models.Read.VariantGroup::toJson()
{
    bourne::json object = bourne::json::object();





    object["groupId"] = getGroupId();






    object["name"] = getName();






    object["collapseInLists"] = isCollapseInLists();






    object["mainProductId"] = getMainProductId();





    std::list<int> productIds_list = getProductIds();
    bourne::json productIds_arr = bourne::json::array();

    for(auto& var : productIds_list)
    {
        productIds_arr.append(var);
    }
    object["productIds"] = productIds_arr;








    std::list<Product.Models.Read.Product> products_list = getProducts();
    bourne::json products_arr = bourne::json::array();

    for(auto& var : products_list)
    {
        Product.Models.Read.Product obj = var;
        products_arr.append(obj.toJson());
    }
    object["products"] = products_arr;




    return object;

}

int
Variant.Models.Read.VariantGroup::getGroupId()
{
	return groupId;
}

void
Variant.Models.Read.VariantGroup::setGroupId(int  groupId)
{
	this->groupId = groupId;
}

std::string
Variant.Models.Read.VariantGroup::getName()
{
	return name;
}

void
Variant.Models.Read.VariantGroup::setName(std::string  name)
{
	this->name = name;
}

bool
Variant.Models.Read.VariantGroup::isCollapseInLists()
{
	return collapseInLists;
}

void
Variant.Models.Read.VariantGroup::setCollapseInLists(bool  collapseInLists)
{
	this->collapseInLists = collapseInLists;
}

int
Variant.Models.Read.VariantGroup::getMainProductId()
{
	return mainProductId;
}

void
Variant.Models.Read.VariantGroup::setMainProductId(int  mainProductId)
{
	this->mainProductId = mainProductId;
}

std::list<int>
Variant.Models.Read.VariantGroup::getProductIds()
{
	return productIds;
}

void
Variant.Models.Read.VariantGroup::setProductIds(std::list <int> productIds)
{
	this->productIds = productIds;
}

std::list<Product.Models.Read.Product>
Variant.Models.Read.VariantGroup::getProducts()
{
	return products;
}

void
Variant.Models.Read.VariantGroup::setProducts(std::list <Product.Models.Read.Product> products)
{
	this->products = products;
}



