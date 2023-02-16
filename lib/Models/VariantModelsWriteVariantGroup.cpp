

#include "Variant.Models.Write.VariantGroup.h"

using namespace Tiny;

Variant.Models.Write.VariantGroup::Variant.Models.Write.VariantGroup()
{
	name = std::string();
	collapseInLists = bool(false);
	variantLabels = std::list<std::string>();
	products = std::list<Product.Models.Write.Product>();
}

Variant.Models.Write.VariantGroup::Variant.Models.Write.VariantGroup(std::string jsonString)
{
	this->fromJson(jsonString);
}

Variant.Models.Write.VariantGroup::~Variant.Models.Write.VariantGroup()
{

}

void
Variant.Models.Write.VariantGroup::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

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

    const char *variantLabelsKey = "VariantLabels";

    if(object.has_key(variantLabelsKey))
    {
        bourne::json value = object[variantLabelsKey];


        std::list<std::string> variantLabels_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            variantLabels_list.push_back(element);
        }
        variantLabels = variantLabels_list;


    }

    const char *productsKey = "Products";

    if(object.has_key(productsKey))
    {
        bourne::json value = object[productsKey];


        std::list<Product.Models.Write.Product> products_list;
        Product.Models.Write.Product element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            products_list.push_back(element);
        }
        products = products_list;


    }


}

bourne::json
Variant.Models.Write.VariantGroup::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["collapseInLists"] = isCollapseInLists();





    std::list<std::string> variantLabels_list = getVariantLabels();
    bourne::json variantLabels_arr = bourne::json::array();

    for(auto& var : variantLabels_list)
    {
        variantLabels_arr.append(var);
    }
    object["variantLabels"] = variantLabels_arr;








    std::list<Product.Models.Write.Product> products_list = getProducts();
    bourne::json products_arr = bourne::json::array();

    for(auto& var : products_list)
    {
        Product.Models.Write.Product obj = var;
        products_arr.append(obj.toJson());
    }
    object["products"] = products_arr;




    return object;

}

std::string
Variant.Models.Write.VariantGroup::getName()
{
	return name;
}

void
Variant.Models.Write.VariantGroup::setName(std::string  name)
{
	this->name = name;
}

bool
Variant.Models.Write.VariantGroup::isCollapseInLists()
{
	return collapseInLists;
}

void
Variant.Models.Write.VariantGroup::setCollapseInLists(bool  collapseInLists)
{
	this->collapseInLists = collapseInLists;
}

std::list<std::string>
Variant.Models.Write.VariantGroup::getVariantLabels()
{
	return variantLabels;
}

void
Variant.Models.Write.VariantGroup::setVariantLabels(std::list <std::string> variantLabels)
{
	this->variantLabels = variantLabels;
}

std::list<Product.Models.Write.Product>
Variant.Models.Write.VariantGroup::getProducts()
{
	return products;
}

void
Variant.Models.Write.VariantGroup::setProducts(std::list <Product.Models.Write.Product> products)
{
	this->products = products;
}



