

#include "Payment.Models.PaymentOptionQuery.h"

using namespace Tiny;

Payment.Models.PaymentOptionQuery::Payment.Models.PaymentOptionQuery()
{
	siteId = int(0);
	email = std::string();
	customerTypeId = int(0);
	countryId = int(0);
	sum = float(0);
}

Payment.Models.PaymentOptionQuery::Payment.Models.PaymentOptionQuery(std::string jsonString)
{
	this->fromJson(jsonString);
}

Payment.Models.PaymentOptionQuery::~Payment.Models.PaymentOptionQuery()
{

}

void
Payment.Models.PaymentOptionQuery::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *siteIdKey = "SiteId";

    if(object.has_key(siteIdKey))
    {
        bourne::json value = object[siteIdKey];



        jsonToValue(&siteId, value, "int");


    }

    const char *emailKey = "Email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *customerTypeIdKey = "CustomerTypeId";

    if(object.has_key(customerTypeIdKey))
    {
        bourne::json value = object[customerTypeIdKey];



        jsonToValue(&customerTypeId, value, "int");


    }

    const char *countryIdKey = "CountryId";

    if(object.has_key(countryIdKey))
    {
        bourne::json value = object[countryIdKey];



        jsonToValue(&countryId, value, "int");


    }

    const char *sumKey = "Sum";

    if(object.has_key(sumKey))
    {
        bourne::json value = object[sumKey];



        jsonToValue(&sum, value, "double");


    }


}

bourne::json
Payment.Models.PaymentOptionQuery::toJson()
{
    bourne::json object = bourne::json::object();





    object["siteId"] = getSiteId();






    object["email"] = getEmail();






    object["customerTypeId"] = getCustomerTypeId();






    object["countryId"] = getCountryId();






    object["sum"] = getSum();



    return object;

}

int
Payment.Models.PaymentOptionQuery::getSiteId()
{
	return siteId;
}

void
Payment.Models.PaymentOptionQuery::setSiteId(int  siteId)
{
	this->siteId = siteId;
}

std::string
Payment.Models.PaymentOptionQuery::getEmail()
{
	return email;
}

void
Payment.Models.PaymentOptionQuery::setEmail(std::string  email)
{
	this->email = email;
}

int
Payment.Models.PaymentOptionQuery::getCustomerTypeId()
{
	return customerTypeId;
}

void
Payment.Models.PaymentOptionQuery::setCustomerTypeId(int  customerTypeId)
{
	this->customerTypeId = customerTypeId;
}

int
Payment.Models.PaymentOptionQuery::getCountryId()
{
	return countryId;
}

void
Payment.Models.PaymentOptionQuery::setCountryId(int  countryId)
{
	this->countryId = countryId;
}

double
Payment.Models.PaymentOptionQuery::getSum()
{
	return sum;
}

void
Payment.Models.PaymentOptionQuery::setSum(double  sum)
{
	this->sum = sum;
}



