

#include "Supplier.Models.Write.Supplier.h"

using namespace Tiny;

Supplier.Models.Write.Supplier::Supplier.Models.Write.Supplier()
{
	name = std::string();
	address1 = std::string();
	address2 = std::string();
	address3 = std::string();
	zipCode = std::string();
	country = std::string();
	contactPerson = std::string();
	phone1 = std::string();
	phone2 = std::string();
	email = std::string();
	externalId = std::string();
}

Supplier.Models.Write.Supplier::Supplier.Models.Write.Supplier(std::string jsonString)
{
	this->fromJson(jsonString);
}

Supplier.Models.Write.Supplier::~Supplier.Models.Write.Supplier()
{

}

void
Supplier.Models.Write.Supplier::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *address1Key = "Address1";

    if(object.has_key(address1Key))
    {
        bourne::json value = object[address1Key];



        jsonToValue(&address1, value, "std::string");


    }

    const char *address2Key = "Address2";

    if(object.has_key(address2Key))
    {
        bourne::json value = object[address2Key];



        jsonToValue(&address2, value, "std::string");


    }

    const char *address3Key = "Address3";

    if(object.has_key(address3Key))
    {
        bourne::json value = object[address3Key];



        jsonToValue(&address3, value, "std::string");


    }

    const char *zipCodeKey = "ZipCode";

    if(object.has_key(zipCodeKey))
    {
        bourne::json value = object[zipCodeKey];



        jsonToValue(&zipCode, value, "std::string");


    }

    const char *countryKey = "Country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *contactPersonKey = "ContactPerson";

    if(object.has_key(contactPersonKey))
    {
        bourne::json value = object[contactPersonKey];



        jsonToValue(&contactPerson, value, "std::string");


    }

    const char *phone1Key = "Phone1";

    if(object.has_key(phone1Key))
    {
        bourne::json value = object[phone1Key];



        jsonToValue(&phone1, value, "std::string");


    }

    const char *phone2Key = "Phone2";

    if(object.has_key(phone2Key))
    {
        bourne::json value = object[phone2Key];



        jsonToValue(&phone2, value, "std::string");


    }

    const char *emailKey = "Email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }


}

bourne::json
Supplier.Models.Write.Supplier::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["address1"] = getAddress1();






    object["address2"] = getAddress2();






    object["address3"] = getAddress3();






    object["zipCode"] = getZipCode();






    object["country"] = getCountry();






    object["contactPerson"] = getContactPerson();






    object["phone1"] = getPhone1();






    object["phone2"] = getPhone2();






    object["email"] = getEmail();






    object["externalId"] = getExternalId();



    return object;

}

std::string
Supplier.Models.Write.Supplier::getName()
{
	return name;
}

void
Supplier.Models.Write.Supplier::setName(std::string  name)
{
	this->name = name;
}

std::string
Supplier.Models.Write.Supplier::getAddress1()
{
	return address1;
}

void
Supplier.Models.Write.Supplier::setAddress1(std::string  address1)
{
	this->address1 = address1;
}

std::string
Supplier.Models.Write.Supplier::getAddress2()
{
	return address2;
}

void
Supplier.Models.Write.Supplier::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
Supplier.Models.Write.Supplier::getAddress3()
{
	return address3;
}

void
Supplier.Models.Write.Supplier::setAddress3(std::string  address3)
{
	this->address3 = address3;
}

std::string
Supplier.Models.Write.Supplier::getZipCode()
{
	return zipCode;
}

void
Supplier.Models.Write.Supplier::setZipCode(std::string  zipCode)
{
	this->zipCode = zipCode;
}

std::string
Supplier.Models.Write.Supplier::getCountry()
{
	return country;
}

void
Supplier.Models.Write.Supplier::setCountry(std::string  country)
{
	this->country = country;
}

std::string
Supplier.Models.Write.Supplier::getContactPerson()
{
	return contactPerson;
}

void
Supplier.Models.Write.Supplier::setContactPerson(std::string  contactPerson)
{
	this->contactPerson = contactPerson;
}

std::string
Supplier.Models.Write.Supplier::getPhone1()
{
	return phone1;
}

void
Supplier.Models.Write.Supplier::setPhone1(std::string  phone1)
{
	this->phone1 = phone1;
}

std::string
Supplier.Models.Write.Supplier::getPhone2()
{
	return phone2;
}

void
Supplier.Models.Write.Supplier::setPhone2(std::string  phone2)
{
	this->phone2 = phone2;
}

std::string
Supplier.Models.Write.Supplier::getEmail()
{
	return email;
}

void
Supplier.Models.Write.Supplier::setEmail(std::string  email)
{
	this->email = email;
}

std::string
Supplier.Models.Write.Supplier::getExternalId()
{
	return externalId;
}

void
Supplier.Models.Write.Supplier::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}



