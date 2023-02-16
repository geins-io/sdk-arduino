

#include "Order.Models.Address.h"

using namespace Tiny;

Order.Models.Address::Order.Models.Address()
{
	company = std::string();
	careOf = std::string();
	state = std::string();
	country = std::string();
	firstName = std::string();
	lastName = std::string();
	email = std::string();
	addressLine1 = std::string();
	addressLine2 = std::string();
	addressLine3 = std::string();
	zip = std::string();
	city = std::string();
	phone = std::string();
	mobile = std::string();
	entryCode = std::string();
}

Order.Models.Address::Order.Models.Address(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.Address::~Order.Models.Address()
{

}

void
Order.Models.Address::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *companyKey = "Company";

    if(object.has_key(companyKey))
    {
        bourne::json value = object[companyKey];



        jsonToValue(&company, value, "std::string");


    }

    const char *careOfKey = "CareOf";

    if(object.has_key(careOfKey))
    {
        bourne::json value = object[careOfKey];



        jsonToValue(&careOf, value, "std::string");


    }

    const char *stateKey = "State";

    if(object.has_key(stateKey))
    {
        bourne::json value = object[stateKey];



        jsonToValue(&state, value, "std::string");


    }

    const char *countryKey = "Country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *firstNameKey = "FirstName";

    if(object.has_key(firstNameKey))
    {
        bourne::json value = object[firstNameKey];



        jsonToValue(&firstName, value, "std::string");


    }

    const char *lastNameKey = "LastName";

    if(object.has_key(lastNameKey))
    {
        bourne::json value = object[lastNameKey];



        jsonToValue(&lastName, value, "std::string");


    }

    const char *emailKey = "Email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *addressLine1Key = "AddressLine1";

    if(object.has_key(addressLine1Key))
    {
        bourne::json value = object[addressLine1Key];



        jsonToValue(&addressLine1, value, "std::string");


    }

    const char *addressLine2Key = "AddressLine2";

    if(object.has_key(addressLine2Key))
    {
        bourne::json value = object[addressLine2Key];



        jsonToValue(&addressLine2, value, "std::string");


    }

    const char *addressLine3Key = "AddressLine3";

    if(object.has_key(addressLine3Key))
    {
        bourne::json value = object[addressLine3Key];



        jsonToValue(&addressLine3, value, "std::string");


    }

    const char *zipKey = "Zip";

    if(object.has_key(zipKey))
    {
        bourne::json value = object[zipKey];



        jsonToValue(&zip, value, "std::string");


    }

    const char *cityKey = "City";

    if(object.has_key(cityKey))
    {
        bourne::json value = object[cityKey];



        jsonToValue(&city, value, "std::string");


    }

    const char *phoneKey = "Phone";

    if(object.has_key(phoneKey))
    {
        bourne::json value = object[phoneKey];



        jsonToValue(&phone, value, "std::string");


    }

    const char *mobileKey = "Mobile";

    if(object.has_key(mobileKey))
    {
        bourne::json value = object[mobileKey];



        jsonToValue(&mobile, value, "std::string");


    }

    const char *entryCodeKey = "EntryCode";

    if(object.has_key(entryCodeKey))
    {
        bourne::json value = object[entryCodeKey];



        jsonToValue(&entryCode, value, "std::string");


    }


}

bourne::json
Order.Models.Address::toJson()
{
    bourne::json object = bourne::json::object();





    object["company"] = getCompany();






    object["careOf"] = getCareOf();






    object["state"] = getState();






    object["country"] = getCountry();






    object["firstName"] = getFirstName();






    object["lastName"] = getLastName();






    object["email"] = getEmail();






    object["addressLine1"] = getAddressLine1();






    object["addressLine2"] = getAddressLine2();






    object["addressLine3"] = getAddressLine3();






    object["zip"] = getZip();






    object["city"] = getCity();






    object["phone"] = getPhone();






    object["mobile"] = getMobile();






    object["entryCode"] = getEntryCode();



    return object;

}

std::string
Order.Models.Address::getCompany()
{
	return company;
}

void
Order.Models.Address::setCompany(std::string  company)
{
	this->company = company;
}

std::string
Order.Models.Address::getCareOf()
{
	return careOf;
}

void
Order.Models.Address::setCareOf(std::string  careOf)
{
	this->careOf = careOf;
}

std::string
Order.Models.Address::getState()
{
	return state;
}

void
Order.Models.Address::setState(std::string  state)
{
	this->state = state;
}

std::string
Order.Models.Address::getCountry()
{
	return country;
}

void
Order.Models.Address::setCountry(std::string  country)
{
	this->country = country;
}

std::string
Order.Models.Address::getFirstName()
{
	return firstName;
}

void
Order.Models.Address::setFirstName(std::string  firstName)
{
	this->firstName = firstName;
}

std::string
Order.Models.Address::getLastName()
{
	return lastName;
}

void
Order.Models.Address::setLastName(std::string  lastName)
{
	this->lastName = lastName;
}

std::string
Order.Models.Address::getEmail()
{
	return email;
}

void
Order.Models.Address::setEmail(std::string  email)
{
	this->email = email;
}

std::string
Order.Models.Address::getAddressLine1()
{
	return addressLine1;
}

void
Order.Models.Address::setAddressLine1(std::string  addressLine1)
{
	this->addressLine1 = addressLine1;
}

std::string
Order.Models.Address::getAddressLine2()
{
	return addressLine2;
}

void
Order.Models.Address::setAddressLine2(std::string  addressLine2)
{
	this->addressLine2 = addressLine2;
}

std::string
Order.Models.Address::getAddressLine3()
{
	return addressLine3;
}

void
Order.Models.Address::setAddressLine3(std::string  addressLine3)
{
	this->addressLine3 = addressLine3;
}

std::string
Order.Models.Address::getZip()
{
	return zip;
}

void
Order.Models.Address::setZip(std::string  zip)
{
	this->zip = zip;
}

std::string
Order.Models.Address::getCity()
{
	return city;
}

void
Order.Models.Address::setCity(std::string  city)
{
	this->city = city;
}

std::string
Order.Models.Address::getPhone()
{
	return phone;
}

void
Order.Models.Address::setPhone(std::string  phone)
{
	this->phone = phone;
}

std::string
Order.Models.Address::getMobile()
{
	return mobile;
}

void
Order.Models.Address::setMobile(std::string  mobile)
{
	this->mobile = mobile;
}

std::string
Order.Models.Address::getEntryCode()
{
	return entryCode;
}

void
Order.Models.Address::setEntryCode(std::string  entryCode)
{
	this->entryCode = entryCode;
}



