

#include "Order.CheckoutOrder.h"

using namespace Tiny;

Order.CheckoutOrder::Order.CheckoutOrder()
{
	orderId = std::string();
	externalOrderId = std::string();
	cartId = std::string();
	sessionId = std::string();
	siteId = int(0);
	currency = std::string();
	status = std::string();
	ipAddress = std::string();
	message = std::string();
	internalMessage = std::string();
	locale = std::string();
	rows = std::list<Order.CheckoutOrderRow>();
	campaignId = int(0);
	campaignCode = std::string();
	campaignName = std::string();
	campaignIds = std::list<std::string>();
	campaignNames = std::list<std::string>();
	customerId = int(0);
	customerTypeId = int(0);
	gender = int(0);
	dateOfBirth = std::string();
	personalId = std::string();
	userAgent = std::string();
	metaData = null<std::string>();
	paymentId = int(0);
	transactionId = std::string();
	secondaryTransactionId = std::string();
	country = std::string();
	company = std::string();
	organizationNumber = std::string();
	firstName = std::string();
	lastName = std::string();
	email = std::string();
	address1 = std::string();
	address2 = std::string();
	zip = std::string();
	city = std::string();
	region = std::string();
	phone = std::string();
	mobilePhone = std::string();
	careOf = std::string();
	shippingId = int(0);
	shippingCountry = std::string();
	shippingCompany = std::string();
	shippingOrganizationNumber = std::string();
	shippingFirstName = std::string();
	shippingLastName = std::string();
	shippingEmail = std::string();
	shippingAddress1 = std::string();
	shippingAddress2 = std::string();
	shippingZip = std::string();
	shippingCity = std::string();
	shippingRegion = std::string();
	shippingPhone = std::string();
	shippingMobilePhone = std::string();
	shippingCareOf = std::string();
	pickupPoint = std::string();
	desiredDeliveryDate = std::string();
	freightClass = Order.FreightClass();
	sum = float(0);
	expectedSum = float(0);
	orderValueIncVat = float(0);
	orderValueExVat = float(0);
	itemValueIncVat = float(0);
	itemValueExVat = float(0);
	discountIncVat = float(0);
	discountExVat = float(0);
	percentDiscount = int(0);
	balance = float(0);
	shippingFeeIncVat = float(0);
	shippingFeeExVat = float(0);
	paymentFeeIncVat = float(0);
	paymentFeeExVat = float(0);
}

Order.CheckoutOrder::Order.CheckoutOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.CheckoutOrder::~Order.CheckoutOrder()
{

}

void
Order.CheckoutOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *orderIdKey = "OrderId";

    if(object.has_key(orderIdKey))
    {
        bourne::json value = object[orderIdKey];



        jsonToValue(&orderId, value, "std::string");


    }

    const char *externalOrderIdKey = "ExternalOrderId";

    if(object.has_key(externalOrderIdKey))
    {
        bourne::json value = object[externalOrderIdKey];



        jsonToValue(&externalOrderId, value, "std::string");


    }

    const char *cartIdKey = "CartId";

    if(object.has_key(cartIdKey))
    {
        bourne::json value = object[cartIdKey];



        jsonToValue(&cartId, value, "std::string");


    }

    const char *sessionIdKey = "SessionId";

    if(object.has_key(sessionIdKey))
    {
        bourne::json value = object[sessionIdKey];



        jsonToValue(&sessionId, value, "std::string");


    }

    const char *siteIdKey = "SiteId";

    if(object.has_key(siteIdKey))
    {
        bourne::json value = object[siteIdKey];



        jsonToValue(&siteId, value, "int");


    }

    const char *currencyKey = "Currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *statusKey = "Status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }

    const char *ipAddressKey = "IpAddress";

    if(object.has_key(ipAddressKey))
    {
        bourne::json value = object[ipAddressKey];



        jsonToValue(&ipAddress, value, "std::string");


    }

    const char *messageKey = "Message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *internalMessageKey = "InternalMessage";

    if(object.has_key(internalMessageKey))
    {
        bourne::json value = object[internalMessageKey];



        jsonToValue(&internalMessage, value, "std::string");


    }

    const char *localeKey = "Locale";

    if(object.has_key(localeKey))
    {
        bourne::json value = object[localeKey];



        jsonToValue(&locale, value, "std::string");


    }

    const char *rowsKey = "Rows";

    if(object.has_key(rowsKey))
    {
        bourne::json value = object[rowsKey];


        std::list<Order.CheckoutOrderRow> rows_list;
        Order.CheckoutOrderRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }

    const char *campaignIdKey = "CampaignId";

    if(object.has_key(campaignIdKey))
    {
        bourne::json value = object[campaignIdKey];



        jsonToValue(&campaignId, value, "int");


    }

    const char *campaignCodeKey = "CampaignCode";

    if(object.has_key(campaignCodeKey))
    {
        bourne::json value = object[campaignCodeKey];



        jsonToValue(&campaignCode, value, "std::string");


    }

    const char *campaignNameKey = "CampaignName";

    if(object.has_key(campaignNameKey))
    {
        bourne::json value = object[campaignNameKey];



        jsonToValue(&campaignName, value, "std::string");


    }

    const char *campaignIdsKey = "CampaignIds";

    if(object.has_key(campaignIdsKey))
    {
        bourne::json value = object[campaignIdsKey];


        std::list<std::string> campaignIds_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            campaignIds_list.push_back(element);
        }
        campaignIds = campaignIds_list;


    }

    const char *campaignNamesKey = "CampaignNames";

    if(object.has_key(campaignNamesKey))
    {
        bourne::json value = object[campaignNamesKey];


        std::list<std::string> campaignNames_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            campaignNames_list.push_back(element);
        }
        campaignNames = campaignNames_list;


    }

    const char *customerIdKey = "CustomerId";

    if(object.has_key(customerIdKey))
    {
        bourne::json value = object[customerIdKey];



        jsonToValue(&customerId, value, "int");


    }

    const char *customerTypeIdKey = "CustomerTypeId";

    if(object.has_key(customerTypeIdKey))
    {
        bourne::json value = object[customerTypeIdKey];



        jsonToValue(&customerTypeId, value, "int");


    }

    const char *genderKey = "Gender";

    if(object.has_key(genderKey))
    {
        bourne::json value = object[genderKey];



        jsonToValue(&gender, value, "int");


    }

    const char *dateOfBirthKey = "DateOfBirth";

    if(object.has_key(dateOfBirthKey))
    {
        bourne::json value = object[dateOfBirthKey];



        jsonToValue(&dateOfBirth, value, "std::string");


    }

    const char *personalIdKey = "PersonalId";

    if(object.has_key(personalIdKey))
    {
        bourne::json value = object[personalIdKey];



        jsonToValue(&personalId, value, "std::string");


    }

    const char *userAgentKey = "UserAgent";

    if(object.has_key(userAgentKey))
    {
        bourne::json value = object[userAgentKey];



        jsonToValue(&userAgent, value, "std::string");


    }

    const char *metaDataKey = "MetaData";

    if(object.has_key(metaDataKey))
    {
        bourne::json value = object[metaDataKey];


    }

    const char *paymentIdKey = "PaymentId";

    if(object.has_key(paymentIdKey))
    {
        bourne::json value = object[paymentIdKey];



        jsonToValue(&paymentId, value, "int");


    }

    const char *transactionIdKey = "TransactionId";

    if(object.has_key(transactionIdKey))
    {
        bourne::json value = object[transactionIdKey];



        jsonToValue(&transactionId, value, "std::string");


    }

    const char *secondaryTransactionIdKey = "SecondaryTransactionId";

    if(object.has_key(secondaryTransactionIdKey))
    {
        bourne::json value = object[secondaryTransactionIdKey];



        jsonToValue(&secondaryTransactionId, value, "std::string");


    }

    const char *countryKey = "Country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *companyKey = "Company";

    if(object.has_key(companyKey))
    {
        bourne::json value = object[companyKey];



        jsonToValue(&company, value, "std::string");


    }

    const char *organizationNumberKey = "OrganizationNumber";

    if(object.has_key(organizationNumberKey))
    {
        bourne::json value = object[organizationNumberKey];



        jsonToValue(&organizationNumber, value, "std::string");


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

    const char *regionKey = "Region";

    if(object.has_key(regionKey))
    {
        bourne::json value = object[regionKey];



        jsonToValue(&region, value, "std::string");


    }

    const char *phoneKey = "Phone";

    if(object.has_key(phoneKey))
    {
        bourne::json value = object[phoneKey];



        jsonToValue(&phone, value, "std::string");


    }

    const char *mobilePhoneKey = "MobilePhone";

    if(object.has_key(mobilePhoneKey))
    {
        bourne::json value = object[mobilePhoneKey];



        jsonToValue(&mobilePhone, value, "std::string");


    }

    const char *careOfKey = "CareOf";

    if(object.has_key(careOfKey))
    {
        bourne::json value = object[careOfKey];



        jsonToValue(&careOf, value, "std::string");


    }

    const char *shippingIdKey = "ShippingId";

    if(object.has_key(shippingIdKey))
    {
        bourne::json value = object[shippingIdKey];



        jsonToValue(&shippingId, value, "int");


    }

    const char *shippingCountryKey = "ShippingCountry";

    if(object.has_key(shippingCountryKey))
    {
        bourne::json value = object[shippingCountryKey];



        jsonToValue(&shippingCountry, value, "std::string");


    }

    const char *shippingCompanyKey = "ShippingCompany";

    if(object.has_key(shippingCompanyKey))
    {
        bourne::json value = object[shippingCompanyKey];



        jsonToValue(&shippingCompany, value, "std::string");


    }

    const char *shippingOrganizationNumberKey = "ShippingOrganizationNumber";

    if(object.has_key(shippingOrganizationNumberKey))
    {
        bourne::json value = object[shippingOrganizationNumberKey];



        jsonToValue(&shippingOrganizationNumber, value, "std::string");


    }

    const char *shippingFirstNameKey = "ShippingFirstName";

    if(object.has_key(shippingFirstNameKey))
    {
        bourne::json value = object[shippingFirstNameKey];



        jsonToValue(&shippingFirstName, value, "std::string");


    }

    const char *shippingLastNameKey = "ShippingLastName";

    if(object.has_key(shippingLastNameKey))
    {
        bourne::json value = object[shippingLastNameKey];



        jsonToValue(&shippingLastName, value, "std::string");


    }

    const char *shippingEmailKey = "ShippingEmail";

    if(object.has_key(shippingEmailKey))
    {
        bourne::json value = object[shippingEmailKey];



        jsonToValue(&shippingEmail, value, "std::string");


    }

    const char *shippingAddress1Key = "ShippingAddress1";

    if(object.has_key(shippingAddress1Key))
    {
        bourne::json value = object[shippingAddress1Key];



        jsonToValue(&shippingAddress1, value, "std::string");


    }

    const char *shippingAddress2Key = "ShippingAddress2";

    if(object.has_key(shippingAddress2Key))
    {
        bourne::json value = object[shippingAddress2Key];



        jsonToValue(&shippingAddress2, value, "std::string");


    }

    const char *shippingZipKey = "ShippingZip";

    if(object.has_key(shippingZipKey))
    {
        bourne::json value = object[shippingZipKey];



        jsonToValue(&shippingZip, value, "std::string");


    }

    const char *shippingCityKey = "ShippingCity";

    if(object.has_key(shippingCityKey))
    {
        bourne::json value = object[shippingCityKey];



        jsonToValue(&shippingCity, value, "std::string");


    }

    const char *shippingRegionKey = "ShippingRegion";

    if(object.has_key(shippingRegionKey))
    {
        bourne::json value = object[shippingRegionKey];



        jsonToValue(&shippingRegion, value, "std::string");


    }

    const char *shippingPhoneKey = "ShippingPhone";

    if(object.has_key(shippingPhoneKey))
    {
        bourne::json value = object[shippingPhoneKey];



        jsonToValue(&shippingPhone, value, "std::string");


    }

    const char *shippingMobilePhoneKey = "ShippingMobilePhone";

    if(object.has_key(shippingMobilePhoneKey))
    {
        bourne::json value = object[shippingMobilePhoneKey];



        jsonToValue(&shippingMobilePhone, value, "std::string");


    }

    const char *shippingCareOfKey = "ShippingCareOf";

    if(object.has_key(shippingCareOfKey))
    {
        bourne::json value = object[shippingCareOfKey];



        jsonToValue(&shippingCareOf, value, "std::string");


    }

    const char *pickupPointKey = "PickupPoint";

    if(object.has_key(pickupPointKey))
    {
        bourne::json value = object[pickupPointKey];



        jsonToValue(&pickupPoint, value, "std::string");


    }

    const char *desiredDeliveryDateKey = "DesiredDeliveryDate";

    if(object.has_key(desiredDeliveryDateKey))
    {
        bourne::json value = object[desiredDeliveryDateKey];



        jsonToValue(&desiredDeliveryDate, value, "std::string");


    }

    const char *freightClassKey = "FreightClass";

    if(object.has_key(freightClassKey))
    {
        bourne::json value = object[freightClassKey];




        Order.FreightClass* obj = &freightClass;
		obj->fromJson(value.dump());

    }

    const char *sumKey = "Sum";

    if(object.has_key(sumKey))
    {
        bourne::json value = object[sumKey];



        jsonToValue(&sum, value, "double");


    }

    const char *expectedSumKey = "ExpectedSum";

    if(object.has_key(expectedSumKey))
    {
        bourne::json value = object[expectedSumKey];



        jsonToValue(&expectedSum, value, "double");


    }

    const char *orderValueIncVatKey = "OrderValueIncVat";

    if(object.has_key(orderValueIncVatKey))
    {
        bourne::json value = object[orderValueIncVatKey];



        jsonToValue(&orderValueIncVat, value, "double");


    }

    const char *orderValueExVatKey = "OrderValueExVat";

    if(object.has_key(orderValueExVatKey))
    {
        bourne::json value = object[orderValueExVatKey];



        jsonToValue(&orderValueExVat, value, "double");


    }

    const char *itemValueIncVatKey = "ItemValueIncVat";

    if(object.has_key(itemValueIncVatKey))
    {
        bourne::json value = object[itemValueIncVatKey];



        jsonToValue(&itemValueIncVat, value, "double");


    }

    const char *itemValueExVatKey = "ItemValueExVat";

    if(object.has_key(itemValueExVatKey))
    {
        bourne::json value = object[itemValueExVatKey];



        jsonToValue(&itemValueExVat, value, "double");


    }

    const char *discountIncVatKey = "DiscountIncVat";

    if(object.has_key(discountIncVatKey))
    {
        bourne::json value = object[discountIncVatKey];



        jsonToValue(&discountIncVat, value, "double");


    }

    const char *discountExVatKey = "DiscountExVat";

    if(object.has_key(discountExVatKey))
    {
        bourne::json value = object[discountExVatKey];



        jsonToValue(&discountExVat, value, "double");


    }

    const char *percentDiscountKey = "PercentDiscount";

    if(object.has_key(percentDiscountKey))
    {
        bourne::json value = object[percentDiscountKey];



        jsonToValue(&percentDiscount, value, "int");


    }

    const char *balanceKey = "Balance";

    if(object.has_key(balanceKey))
    {
        bourne::json value = object[balanceKey];



        jsonToValue(&balance, value, "double");


    }

    const char *shippingFeeIncVatKey = "ShippingFeeIncVat";

    if(object.has_key(shippingFeeIncVatKey))
    {
        bourne::json value = object[shippingFeeIncVatKey];



        jsonToValue(&shippingFeeIncVat, value, "double");


    }

    const char *shippingFeeExVatKey = "ShippingFeeExVat";

    if(object.has_key(shippingFeeExVatKey))
    {
        bourne::json value = object[shippingFeeExVatKey];



        jsonToValue(&shippingFeeExVat, value, "double");


    }

    const char *paymentFeeIncVatKey = "PaymentFeeIncVat";

    if(object.has_key(paymentFeeIncVatKey))
    {
        bourne::json value = object[paymentFeeIncVatKey];



        jsonToValue(&paymentFeeIncVat, value, "double");


    }

    const char *paymentFeeExVatKey = "PaymentFeeExVat";

    if(object.has_key(paymentFeeExVatKey))
    {
        bourne::json value = object[paymentFeeExVatKey];



        jsonToValue(&paymentFeeExVat, value, "double");


    }


}

bourne::json
Order.CheckoutOrder::toJson()
{
    bourne::json object = bourne::json::object();





    object["orderId"] = getOrderId();






    object["externalOrderId"] = getExternalOrderId();






    object["cartId"] = getCartId();






    object["sessionId"] = getSessionId();






    object["siteId"] = getSiteId();






    object["currency"] = getCurrency();






    object["status"] = getStatus();






    object["ipAddress"] = getIpAddress();






    object["message"] = getMessage();






    object["internalMessage"] = getInternalMessage();






    object["locale"] = getLocale();





    std::list<Order.CheckoutOrderRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        Order.CheckoutOrderRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;







    object["campaignId"] = getCampaignId();






    object["campaignCode"] = getCampaignCode();






    object["campaignName"] = getCampaignName();





    std::list<std::string> campaignIds_list = getCampaignIds();
    bourne::json campaignIds_arr = bourne::json::array();

    for(auto& var : campaignIds_list)
    {
        campaignIds_arr.append(var);
    }
    object["campaignIds"] = campaignIds_arr;








    std::list<std::string> campaignNames_list = getCampaignNames();
    bourne::json campaignNames_arr = bourne::json::array();

    for(auto& var : campaignNames_list)
    {
        campaignNames_arr.append(var);
    }
    object["campaignNames"] = campaignNames_arr;









    object["customerId"] = getCustomerId();






    object["customerTypeId"] = getCustomerTypeId();






    object["gender"] = getGender();






    object["dateOfBirth"] = getDateOfBirth();






    object["personalId"] = getPersonalId();






    object["userAgent"] = getUserAgent();









    object["paymentId"] = getPaymentId();






    object["transactionId"] = getTransactionId();






    object["secondaryTransactionId"] = getSecondaryTransactionId();






    object["country"] = getCountry();






    object["company"] = getCompany();






    object["organizationNumber"] = getOrganizationNumber();






    object["firstName"] = getFirstName();






    object["lastName"] = getLastName();






    object["email"] = getEmail();






    object["address1"] = getAddress1();






    object["address2"] = getAddress2();






    object["zip"] = getZip();






    object["city"] = getCity();






    object["region"] = getRegion();






    object["phone"] = getPhone();






    object["mobilePhone"] = getMobilePhone();






    object["careOf"] = getCareOf();






    object["shippingId"] = getShippingId();






    object["shippingCountry"] = getShippingCountry();






    object["shippingCompany"] = getShippingCompany();






    object["shippingOrganizationNumber"] = getShippingOrganizationNumber();






    object["shippingFirstName"] = getShippingFirstName();






    object["shippingLastName"] = getShippingLastName();






    object["shippingEmail"] = getShippingEmail();






    object["shippingAddress1"] = getShippingAddress1();






    object["shippingAddress2"] = getShippingAddress2();






    object["shippingZip"] = getShippingZip();






    object["shippingCity"] = getShippingCity();






    object["shippingRegion"] = getShippingRegion();






    object["shippingPhone"] = getShippingPhone();






    object["shippingMobilePhone"] = getShippingMobilePhone();






    object["shippingCareOf"] = getShippingCareOf();






    object["pickupPoint"] = getPickupPoint();






    object["desiredDeliveryDate"] = getDesiredDeliveryDate();







	object["freightClass"] = getFreightClass().toJson();





    object["sum"] = getSum();






    object["expectedSum"] = getExpectedSum();






    object["orderValueIncVat"] = getOrderValueIncVat();






    object["orderValueExVat"] = getOrderValueExVat();






    object["itemValueIncVat"] = getItemValueIncVat();






    object["itemValueExVat"] = getItemValueExVat();






    object["discountIncVat"] = getDiscountIncVat();






    object["discountExVat"] = getDiscountExVat();






    object["percentDiscount"] = getPercentDiscount();






    object["balance"] = getBalance();






    object["shippingFeeIncVat"] = getShippingFeeIncVat();






    object["shippingFeeExVat"] = getShippingFeeExVat();






    object["paymentFeeIncVat"] = getPaymentFeeIncVat();






    object["paymentFeeExVat"] = getPaymentFeeExVat();



    return object;

}

std::string
Order.CheckoutOrder::getOrderId()
{
	return orderId;
}

void
Order.CheckoutOrder::setOrderId(std::string  orderId)
{
	this->orderId = orderId;
}

std::string
Order.CheckoutOrder::getExternalOrderId()
{
	return externalOrderId;
}

void
Order.CheckoutOrder::setExternalOrderId(std::string  externalOrderId)
{
	this->externalOrderId = externalOrderId;
}

std::string
Order.CheckoutOrder::getCartId()
{
	return cartId;
}

void
Order.CheckoutOrder::setCartId(std::string  cartId)
{
	this->cartId = cartId;
}

std::string
Order.CheckoutOrder::getSessionId()
{
	return sessionId;
}

void
Order.CheckoutOrder::setSessionId(std::string  sessionId)
{
	this->sessionId = sessionId;
}

int
Order.CheckoutOrder::getSiteId()
{
	return siteId;
}

void
Order.CheckoutOrder::setSiteId(int  siteId)
{
	this->siteId = siteId;
}

std::string
Order.CheckoutOrder::getCurrency()
{
	return currency;
}

void
Order.CheckoutOrder::setCurrency(std::string  currency)
{
	this->currency = currency;
}

std::string
Order.CheckoutOrder::getStatus()
{
	return status;
}

void
Order.CheckoutOrder::setStatus(std::string  status)
{
	this->status = status;
}

std::string
Order.CheckoutOrder::getIpAddress()
{
	return ipAddress;
}

void
Order.CheckoutOrder::setIpAddress(std::string  ipAddress)
{
	this->ipAddress = ipAddress;
}

std::string
Order.CheckoutOrder::getMessage()
{
	return message;
}

void
Order.CheckoutOrder::setMessage(std::string  message)
{
	this->message = message;
}

std::string
Order.CheckoutOrder::getInternalMessage()
{
	return internalMessage;
}

void
Order.CheckoutOrder::setInternalMessage(std::string  internalMessage)
{
	this->internalMessage = internalMessage;
}

std::string
Order.CheckoutOrder::getLocale()
{
	return locale;
}

void
Order.CheckoutOrder::setLocale(std::string  locale)
{
	this->locale = locale;
}

std::list<Order.CheckoutOrderRow>
Order.CheckoutOrder::getRows()
{
	return rows;
}

void
Order.CheckoutOrder::setRows(std::list <Order.CheckoutOrderRow> rows)
{
	this->rows = rows;
}

int
Order.CheckoutOrder::getCampaignId()
{
	return campaignId;
}

void
Order.CheckoutOrder::setCampaignId(int  campaignId)
{
	this->campaignId = campaignId;
}

std::string
Order.CheckoutOrder::getCampaignCode()
{
	return campaignCode;
}

void
Order.CheckoutOrder::setCampaignCode(std::string  campaignCode)
{
	this->campaignCode = campaignCode;
}

std::string
Order.CheckoutOrder::getCampaignName()
{
	return campaignName;
}

void
Order.CheckoutOrder::setCampaignName(std::string  campaignName)
{
	this->campaignName = campaignName;
}

std::list<std::string>
Order.CheckoutOrder::getCampaignIds()
{
	return campaignIds;
}

void
Order.CheckoutOrder::setCampaignIds(std::list <std::string> campaignIds)
{
	this->campaignIds = campaignIds;
}

std::list<std::string>
Order.CheckoutOrder::getCampaignNames()
{
	return campaignNames;
}

void
Order.CheckoutOrder::setCampaignNames(std::list <std::string> campaignNames)
{
	this->campaignNames = campaignNames;
}

int
Order.CheckoutOrder::getCustomerId()
{
	return customerId;
}

void
Order.CheckoutOrder::setCustomerId(int  customerId)
{
	this->customerId = customerId;
}

int
Order.CheckoutOrder::getCustomerTypeId()
{
	return customerTypeId;
}

void
Order.CheckoutOrder::setCustomerTypeId(int  customerTypeId)
{
	this->customerTypeId = customerTypeId;
}

int
Order.CheckoutOrder::getGender()
{
	return gender;
}

void
Order.CheckoutOrder::setGender(int  gender)
{
	this->gender = gender;
}

std::string
Order.CheckoutOrder::getDateOfBirth()
{
	return dateOfBirth;
}

void
Order.CheckoutOrder::setDateOfBirth(std::string  dateOfBirth)
{
	this->dateOfBirth = dateOfBirth;
}

std::string
Order.CheckoutOrder::getPersonalId()
{
	return personalId;
}

void
Order.CheckoutOrder::setPersonalId(std::string  personalId)
{
	this->personalId = personalId;
}

std::string
Order.CheckoutOrder::getUserAgent()
{
	return userAgent;
}

void
Order.CheckoutOrder::setUserAgent(std::string  userAgent)
{
	this->userAgent = userAgent;
}

Map<string, string>
Order.CheckoutOrder::getMetaData()
{
	return metaData;
}

void
Order.CheckoutOrder::setMetaData(Map <string, string> metaData)
{
	this->metaData = metaData;
}

int
Order.CheckoutOrder::getPaymentId()
{
	return paymentId;
}

void
Order.CheckoutOrder::setPaymentId(int  paymentId)
{
	this->paymentId = paymentId;
}

std::string
Order.CheckoutOrder::getTransactionId()
{
	return transactionId;
}

void
Order.CheckoutOrder::setTransactionId(std::string  transactionId)
{
	this->transactionId = transactionId;
}

std::string
Order.CheckoutOrder::getSecondaryTransactionId()
{
	return secondaryTransactionId;
}

void
Order.CheckoutOrder::setSecondaryTransactionId(std::string  secondaryTransactionId)
{
	this->secondaryTransactionId = secondaryTransactionId;
}

std::string
Order.CheckoutOrder::getCountry()
{
	return country;
}

void
Order.CheckoutOrder::setCountry(std::string  country)
{
	this->country = country;
}

std::string
Order.CheckoutOrder::getCompany()
{
	return company;
}

void
Order.CheckoutOrder::setCompany(std::string  company)
{
	this->company = company;
}

std::string
Order.CheckoutOrder::getOrganizationNumber()
{
	return organizationNumber;
}

void
Order.CheckoutOrder::setOrganizationNumber(std::string  organizationNumber)
{
	this->organizationNumber = organizationNumber;
}

std::string
Order.CheckoutOrder::getFirstName()
{
	return firstName;
}

void
Order.CheckoutOrder::setFirstName(std::string  firstName)
{
	this->firstName = firstName;
}

std::string
Order.CheckoutOrder::getLastName()
{
	return lastName;
}

void
Order.CheckoutOrder::setLastName(std::string  lastName)
{
	this->lastName = lastName;
}

std::string
Order.CheckoutOrder::getEmail()
{
	return email;
}

void
Order.CheckoutOrder::setEmail(std::string  email)
{
	this->email = email;
}

std::string
Order.CheckoutOrder::getAddress1()
{
	return address1;
}

void
Order.CheckoutOrder::setAddress1(std::string  address1)
{
	this->address1 = address1;
}

std::string
Order.CheckoutOrder::getAddress2()
{
	return address2;
}

void
Order.CheckoutOrder::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
Order.CheckoutOrder::getZip()
{
	return zip;
}

void
Order.CheckoutOrder::setZip(std::string  zip)
{
	this->zip = zip;
}

std::string
Order.CheckoutOrder::getCity()
{
	return city;
}

void
Order.CheckoutOrder::setCity(std::string  city)
{
	this->city = city;
}

std::string
Order.CheckoutOrder::getRegion()
{
	return region;
}

void
Order.CheckoutOrder::setRegion(std::string  region)
{
	this->region = region;
}

std::string
Order.CheckoutOrder::getPhone()
{
	return phone;
}

void
Order.CheckoutOrder::setPhone(std::string  phone)
{
	this->phone = phone;
}

std::string
Order.CheckoutOrder::getMobilePhone()
{
	return mobilePhone;
}

void
Order.CheckoutOrder::setMobilePhone(std::string  mobilePhone)
{
	this->mobilePhone = mobilePhone;
}

std::string
Order.CheckoutOrder::getCareOf()
{
	return careOf;
}

void
Order.CheckoutOrder::setCareOf(std::string  careOf)
{
	this->careOf = careOf;
}

int
Order.CheckoutOrder::getShippingId()
{
	return shippingId;
}

void
Order.CheckoutOrder::setShippingId(int  shippingId)
{
	this->shippingId = shippingId;
}

std::string
Order.CheckoutOrder::getShippingCountry()
{
	return shippingCountry;
}

void
Order.CheckoutOrder::setShippingCountry(std::string  shippingCountry)
{
	this->shippingCountry = shippingCountry;
}

std::string
Order.CheckoutOrder::getShippingCompany()
{
	return shippingCompany;
}

void
Order.CheckoutOrder::setShippingCompany(std::string  shippingCompany)
{
	this->shippingCompany = shippingCompany;
}

std::string
Order.CheckoutOrder::getShippingOrganizationNumber()
{
	return shippingOrganizationNumber;
}

void
Order.CheckoutOrder::setShippingOrganizationNumber(std::string  shippingOrganizationNumber)
{
	this->shippingOrganizationNumber = shippingOrganizationNumber;
}

std::string
Order.CheckoutOrder::getShippingFirstName()
{
	return shippingFirstName;
}

void
Order.CheckoutOrder::setShippingFirstName(std::string  shippingFirstName)
{
	this->shippingFirstName = shippingFirstName;
}

std::string
Order.CheckoutOrder::getShippingLastName()
{
	return shippingLastName;
}

void
Order.CheckoutOrder::setShippingLastName(std::string  shippingLastName)
{
	this->shippingLastName = shippingLastName;
}

std::string
Order.CheckoutOrder::getShippingEmail()
{
	return shippingEmail;
}

void
Order.CheckoutOrder::setShippingEmail(std::string  shippingEmail)
{
	this->shippingEmail = shippingEmail;
}

std::string
Order.CheckoutOrder::getShippingAddress1()
{
	return shippingAddress1;
}

void
Order.CheckoutOrder::setShippingAddress1(std::string  shippingAddress1)
{
	this->shippingAddress1 = shippingAddress1;
}

std::string
Order.CheckoutOrder::getShippingAddress2()
{
	return shippingAddress2;
}

void
Order.CheckoutOrder::setShippingAddress2(std::string  shippingAddress2)
{
	this->shippingAddress2 = shippingAddress2;
}

std::string
Order.CheckoutOrder::getShippingZip()
{
	return shippingZip;
}

void
Order.CheckoutOrder::setShippingZip(std::string  shippingZip)
{
	this->shippingZip = shippingZip;
}

std::string
Order.CheckoutOrder::getShippingCity()
{
	return shippingCity;
}

void
Order.CheckoutOrder::setShippingCity(std::string  shippingCity)
{
	this->shippingCity = shippingCity;
}

std::string
Order.CheckoutOrder::getShippingRegion()
{
	return shippingRegion;
}

void
Order.CheckoutOrder::setShippingRegion(std::string  shippingRegion)
{
	this->shippingRegion = shippingRegion;
}

std::string
Order.CheckoutOrder::getShippingPhone()
{
	return shippingPhone;
}

void
Order.CheckoutOrder::setShippingPhone(std::string  shippingPhone)
{
	this->shippingPhone = shippingPhone;
}

std::string
Order.CheckoutOrder::getShippingMobilePhone()
{
	return shippingMobilePhone;
}

void
Order.CheckoutOrder::setShippingMobilePhone(std::string  shippingMobilePhone)
{
	this->shippingMobilePhone = shippingMobilePhone;
}

std::string
Order.CheckoutOrder::getShippingCareOf()
{
	return shippingCareOf;
}

void
Order.CheckoutOrder::setShippingCareOf(std::string  shippingCareOf)
{
	this->shippingCareOf = shippingCareOf;
}

std::string
Order.CheckoutOrder::getPickupPoint()
{
	return pickupPoint;
}

void
Order.CheckoutOrder::setPickupPoint(std::string  pickupPoint)
{
	this->pickupPoint = pickupPoint;
}

std::string
Order.CheckoutOrder::getDesiredDeliveryDate()
{
	return desiredDeliveryDate;
}

void
Order.CheckoutOrder::setDesiredDeliveryDate(std::string  desiredDeliveryDate)
{
	this->desiredDeliveryDate = desiredDeliveryDate;
}

Order.FreightClass
Order.CheckoutOrder::getFreightClass()
{
	return freightClass;
}

void
Order.CheckoutOrder::setFreightClass(Order.FreightClass  freightClass)
{
	this->freightClass = freightClass;
}

double
Order.CheckoutOrder::getSum()
{
	return sum;
}

void
Order.CheckoutOrder::setSum(double  sum)
{
	this->sum = sum;
}

double
Order.CheckoutOrder::getExpectedSum()
{
	return expectedSum;
}

void
Order.CheckoutOrder::setExpectedSum(double  expectedSum)
{
	this->expectedSum = expectedSum;
}

double
Order.CheckoutOrder::getOrderValueIncVat()
{
	return orderValueIncVat;
}

void
Order.CheckoutOrder::setOrderValueIncVat(double  orderValueIncVat)
{
	this->orderValueIncVat = orderValueIncVat;
}

double
Order.CheckoutOrder::getOrderValueExVat()
{
	return orderValueExVat;
}

void
Order.CheckoutOrder::setOrderValueExVat(double  orderValueExVat)
{
	this->orderValueExVat = orderValueExVat;
}

double
Order.CheckoutOrder::getItemValueIncVat()
{
	return itemValueIncVat;
}

void
Order.CheckoutOrder::setItemValueIncVat(double  itemValueIncVat)
{
	this->itemValueIncVat = itemValueIncVat;
}

double
Order.CheckoutOrder::getItemValueExVat()
{
	return itemValueExVat;
}

void
Order.CheckoutOrder::setItemValueExVat(double  itemValueExVat)
{
	this->itemValueExVat = itemValueExVat;
}

double
Order.CheckoutOrder::getDiscountIncVat()
{
	return discountIncVat;
}

void
Order.CheckoutOrder::setDiscountIncVat(double  discountIncVat)
{
	this->discountIncVat = discountIncVat;
}

double
Order.CheckoutOrder::getDiscountExVat()
{
	return discountExVat;
}

void
Order.CheckoutOrder::setDiscountExVat(double  discountExVat)
{
	this->discountExVat = discountExVat;
}

int
Order.CheckoutOrder::getPercentDiscount()
{
	return percentDiscount;
}

void
Order.CheckoutOrder::setPercentDiscount(int  percentDiscount)
{
	this->percentDiscount = percentDiscount;
}

double
Order.CheckoutOrder::getBalance()
{
	return balance;
}

void
Order.CheckoutOrder::setBalance(double  balance)
{
	this->balance = balance;
}

double
Order.CheckoutOrder::getShippingFeeIncVat()
{
	return shippingFeeIncVat;
}

void
Order.CheckoutOrder::setShippingFeeIncVat(double  shippingFeeIncVat)
{
	this->shippingFeeIncVat = shippingFeeIncVat;
}

double
Order.CheckoutOrder::getShippingFeeExVat()
{
	return shippingFeeExVat;
}

void
Order.CheckoutOrder::setShippingFeeExVat(double  shippingFeeExVat)
{
	this->shippingFeeExVat = shippingFeeExVat;
}

double
Order.CheckoutOrder::getPaymentFeeIncVat()
{
	return paymentFeeIncVat;
}

void
Order.CheckoutOrder::setPaymentFeeIncVat(double  paymentFeeIncVat)
{
	this->paymentFeeIncVat = paymentFeeIncVat;
}

double
Order.CheckoutOrder::getPaymentFeeExVat()
{
	return paymentFeeExVat;
}

void
Order.CheckoutOrder::setPaymentFeeExVat(double  paymentFeeExVat)
{
	this->paymentFeeExVat = paymentFeeExVat;
}



