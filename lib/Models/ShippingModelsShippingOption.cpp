

#include "Shipping.Models.ShippingOption.h"

using namespace Tiny;

Shipping.Models.ShippingOption::Shipping.Models.ShippingOption()
{
	id = int(0);
	externalId = std::string();
	name = std::string();
	fee = float(0);
	logo = std::string();
	shippingData = std::string();
	options = std::list<Shipping.Models.ShippingSubOption>();
}

Shipping.Models.ShippingOption::Shipping.Models.ShippingOption(std::string jsonString)
{
	this->fromJson(jsonString);
}

Shipping.Models.ShippingOption::~Shipping.Models.ShippingOption()
{

}

void
Shipping.Models.ShippingOption::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *feeKey = "Fee";

    if(object.has_key(feeKey))
    {
        bourne::json value = object[feeKey];



        jsonToValue(&fee, value, "double");


    }

    const char *logoKey = "Logo";

    if(object.has_key(logoKey))
    {
        bourne::json value = object[logoKey];



        jsonToValue(&logo, value, "std::string");


    }

    const char *shippingDataKey = "ShippingData";

    if(object.has_key(shippingDataKey))
    {
        bourne::json value = object[shippingDataKey];



        jsonToValue(&shippingData, value, "std::string");


    }

    const char *optionsKey = "Options";

    if(object.has_key(optionsKey))
    {
        bourne::json value = object[optionsKey];


        std::list<Shipping.Models.ShippingSubOption> options_list;
        Shipping.Models.ShippingSubOption element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            options_list.push_back(element);
        }
        options = options_list;


    }


}

bourne::json
Shipping.Models.ShippingOption::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["externalId"] = getExternalId();






    object["name"] = getName();






    object["fee"] = getFee();






    object["logo"] = getLogo();






    object["shippingData"] = getShippingData();





    std::list<Shipping.Models.ShippingSubOption> options_list = getOptions();
    bourne::json options_arr = bourne::json::array();

    for(auto& var : options_list)
    {
        Shipping.Models.ShippingSubOption obj = var;
        options_arr.append(obj.toJson());
    }
    object["options"] = options_arr;




    return object;

}

int
Shipping.Models.ShippingOption::getId()
{
	return id;
}

void
Shipping.Models.ShippingOption::setId(int  id)
{
	this->id = id;
}

std::string
Shipping.Models.ShippingOption::getExternalId()
{
	return externalId;
}

void
Shipping.Models.ShippingOption::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Shipping.Models.ShippingOption::getName()
{
	return name;
}

void
Shipping.Models.ShippingOption::setName(std::string  name)
{
	this->name = name;
}

double
Shipping.Models.ShippingOption::getFee()
{
	return fee;
}

void
Shipping.Models.ShippingOption::setFee(double  fee)
{
	this->fee = fee;
}

std::string
Shipping.Models.ShippingOption::getLogo()
{
	return logo;
}

void
Shipping.Models.ShippingOption::setLogo(std::string  logo)
{
	this->logo = logo;
}

std::string
Shipping.Models.ShippingOption::getShippingData()
{
	return shippingData;
}

void
Shipping.Models.ShippingOption::setShippingData(std::string  shippingData)
{
	this->shippingData = shippingData;
}

std::list<Shipping.Models.ShippingSubOption>
Shipping.Models.ShippingOption::getOptions()
{
	return options;
}

void
Shipping.Models.ShippingOption::setOptions(std::list <Shipping.Models.ShippingSubOption> options)
{
	this->options = options;
}



