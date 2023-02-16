

#include "Payment.Models.PaymentOption.h"

using namespace Tiny;

Payment.Models.PaymentOption::Payment.Models.PaymentOption()
{
	paymentId = int(0);
	paymentGroupId = int(0);
	name = std::string();
	displayName = std::string();
	fee = float(0);
	icon = std::string();
	sort = int(0);
	period = int(0);
	termsLink = std::string();
	infoLink = std::string();
	personalIdRequired = bool(false);
	registeredAddressRequired = bool(false);
	houseNumberRequired = bool(false);
	houseExtensionShown = bool(false);
	genderRequired = bool(false);
	birthdateRequired = bool(false);
}

Payment.Models.PaymentOption::Payment.Models.PaymentOption(std::string jsonString)
{
	this->fromJson(jsonString);
}

Payment.Models.PaymentOption::~Payment.Models.PaymentOption()
{

}

void
Payment.Models.PaymentOption::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *paymentIdKey = "PaymentId";

    if(object.has_key(paymentIdKey))
    {
        bourne::json value = object[paymentIdKey];



        jsonToValue(&paymentId, value, "int");


    }

    const char *paymentGroupIdKey = "PaymentGroupId";

    if(object.has_key(paymentGroupIdKey))
    {
        bourne::json value = object[paymentGroupIdKey];



        jsonToValue(&paymentGroupId, value, "int");


    }

    const char *nameKey = "Name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *displayNameKey = "DisplayName";

    if(object.has_key(displayNameKey))
    {
        bourne::json value = object[displayNameKey];



        jsonToValue(&displayName, value, "std::string");


    }

    const char *feeKey = "Fee";

    if(object.has_key(feeKey))
    {
        bourne::json value = object[feeKey];



        jsonToValue(&fee, value, "double");


    }

    const char *iconKey = "Icon";

    if(object.has_key(iconKey))
    {
        bourne::json value = object[iconKey];



        jsonToValue(&icon, value, "std::string");


    }

    const char *sortKey = "Sort";

    if(object.has_key(sortKey))
    {
        bourne::json value = object[sortKey];



        jsonToValue(&sort, value, "int");


    }

    const char *periodKey = "Period";

    if(object.has_key(periodKey))
    {
        bourne::json value = object[periodKey];



        jsonToValue(&period, value, "int");


    }

    const char *termsLinkKey = "TermsLink";

    if(object.has_key(termsLinkKey))
    {
        bourne::json value = object[termsLinkKey];



        jsonToValue(&termsLink, value, "std::string");


    }

    const char *infoLinkKey = "InfoLink";

    if(object.has_key(infoLinkKey))
    {
        bourne::json value = object[infoLinkKey];



        jsonToValue(&infoLink, value, "std::string");


    }

    const char *personalIdRequiredKey = "PersonalIdRequired";

    if(object.has_key(personalIdRequiredKey))
    {
        bourne::json value = object[personalIdRequiredKey];



        jsonToValue(&personalIdRequired, value, "bool");


    }

    const char *registeredAddressRequiredKey = "RegisteredAddressRequired";

    if(object.has_key(registeredAddressRequiredKey))
    {
        bourne::json value = object[registeredAddressRequiredKey];



        jsonToValue(&registeredAddressRequired, value, "bool");


    }

    const char *houseNumberRequiredKey = "HouseNumberRequired";

    if(object.has_key(houseNumberRequiredKey))
    {
        bourne::json value = object[houseNumberRequiredKey];



        jsonToValue(&houseNumberRequired, value, "bool");


    }

    const char *houseExtensionShownKey = "HouseExtensionShown";

    if(object.has_key(houseExtensionShownKey))
    {
        bourne::json value = object[houseExtensionShownKey];



        jsonToValue(&houseExtensionShown, value, "bool");


    }

    const char *genderRequiredKey = "GenderRequired";

    if(object.has_key(genderRequiredKey))
    {
        bourne::json value = object[genderRequiredKey];



        jsonToValue(&genderRequired, value, "bool");


    }

    const char *birthdateRequiredKey = "BirthdateRequired";

    if(object.has_key(birthdateRequiredKey))
    {
        bourne::json value = object[birthdateRequiredKey];



        jsonToValue(&birthdateRequired, value, "bool");


    }


}

bourne::json
Payment.Models.PaymentOption::toJson()
{
    bourne::json object = bourne::json::object();





    object["paymentId"] = getPaymentId();






    object["paymentGroupId"] = getPaymentGroupId();






    object["name"] = getName();






    object["displayName"] = getDisplayName();






    object["fee"] = getFee();






    object["icon"] = getIcon();






    object["sort"] = getSort();






    object["period"] = getPeriod();






    object["termsLink"] = getTermsLink();






    object["infoLink"] = getInfoLink();






    object["personalIdRequired"] = isPersonalIdRequired();






    object["registeredAddressRequired"] = isRegisteredAddressRequired();






    object["houseNumberRequired"] = isHouseNumberRequired();






    object["houseExtensionShown"] = isHouseExtensionShown();






    object["genderRequired"] = isGenderRequired();






    object["birthdateRequired"] = isBirthdateRequired();



    return object;

}

int
Payment.Models.PaymentOption::getPaymentId()
{
	return paymentId;
}

void
Payment.Models.PaymentOption::setPaymentId(int  paymentId)
{
	this->paymentId = paymentId;
}

int
Payment.Models.PaymentOption::getPaymentGroupId()
{
	return paymentGroupId;
}

void
Payment.Models.PaymentOption::setPaymentGroupId(int  paymentGroupId)
{
	this->paymentGroupId = paymentGroupId;
}

std::string
Payment.Models.PaymentOption::getName()
{
	return name;
}

void
Payment.Models.PaymentOption::setName(std::string  name)
{
	this->name = name;
}

std::string
Payment.Models.PaymentOption::getDisplayName()
{
	return displayName;
}

void
Payment.Models.PaymentOption::setDisplayName(std::string  displayName)
{
	this->displayName = displayName;
}

double
Payment.Models.PaymentOption::getFee()
{
	return fee;
}

void
Payment.Models.PaymentOption::setFee(double  fee)
{
	this->fee = fee;
}

std::string
Payment.Models.PaymentOption::getIcon()
{
	return icon;
}

void
Payment.Models.PaymentOption::setIcon(std::string  icon)
{
	this->icon = icon;
}

int
Payment.Models.PaymentOption::getSort()
{
	return sort;
}

void
Payment.Models.PaymentOption::setSort(int  sort)
{
	this->sort = sort;
}

int
Payment.Models.PaymentOption::getPeriod()
{
	return period;
}

void
Payment.Models.PaymentOption::setPeriod(int  period)
{
	this->period = period;
}

std::string
Payment.Models.PaymentOption::getTermsLink()
{
	return termsLink;
}

void
Payment.Models.PaymentOption::setTermsLink(std::string  termsLink)
{
	this->termsLink = termsLink;
}

std::string
Payment.Models.PaymentOption::getInfoLink()
{
	return infoLink;
}

void
Payment.Models.PaymentOption::setInfoLink(std::string  infoLink)
{
	this->infoLink = infoLink;
}

bool
Payment.Models.PaymentOption::isPersonalIdRequired()
{
	return personalIdRequired;
}

void
Payment.Models.PaymentOption::setPersonalIdRequired(bool  personalIdRequired)
{
	this->personalIdRequired = personalIdRequired;
}

bool
Payment.Models.PaymentOption::isRegisteredAddressRequired()
{
	return registeredAddressRequired;
}

void
Payment.Models.PaymentOption::setRegisteredAddressRequired(bool  registeredAddressRequired)
{
	this->registeredAddressRequired = registeredAddressRequired;
}

bool
Payment.Models.PaymentOption::isHouseNumberRequired()
{
	return houseNumberRequired;
}

void
Payment.Models.PaymentOption::setHouseNumberRequired(bool  houseNumberRequired)
{
	this->houseNumberRequired = houseNumberRequired;
}

bool
Payment.Models.PaymentOption::isHouseExtensionShown()
{
	return houseExtensionShown;
}

void
Payment.Models.PaymentOption::setHouseExtensionShown(bool  houseExtensionShown)
{
	this->houseExtensionShown = houseExtensionShown;
}

bool
Payment.Models.PaymentOption::isGenderRequired()
{
	return genderRequired;
}

void
Payment.Models.PaymentOption::setGenderRequired(bool  genderRequired)
{
	this->genderRequired = genderRequired;
}

bool
Payment.Models.PaymentOption::isBirthdateRequired()
{
	return birthdateRequired;
}

void
Payment.Models.PaymentOption::setBirthdateRequired(bool  birthdateRequired)
{
	this->birthdateRequired = birthdateRequired;
}



