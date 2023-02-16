

#include "Order.Models.Order.h"

using namespace Tiny;

Order.Models.Order::Order.Models.Order()
{
	id = int(0);
	externalId = std::string();
	personalId = std::string();
	customerId = int(0);
	customerTypeId = int(0);
	createdAt = std::string();
	updatedAt = std::string();
	completedAt = std::string();
	status = std::string();
	currency = std::string();
	currencyRate = float(0);
	marketId = int(0);
	marketName = std::string();
	language = std::string();
	orderTotal = float(0);
	expectedSum = float(0);
	vATTotal = float(0);
	orderValueIncVat = float(0);
	orderValueExVat = float(0);
	itemValueIncVat = float(0);
	itemValueExVat = float(0);
	discount = float(0);
	discountExVat = float(0);
	fromBalance = float(0);
	shippingFee = float(0);
	shippingFeeExVat = float(0);
	paymentFee = float(0);
	paymentFeeExVat = float(0);
	message = std::string();
	orderMessages = std::list<std::string>();
	paymentDetails = std::list<Order.Models.PaymentDetail>();
	shippingDetails = std::list<Order.Models.ShippingDetail>();
	shippingAddress = Order.Models.Address();
	billingAddress = Order.Models.Address();
	rows = std::list<Order.Models.OrderRow>();
	refunds = std::list<Order.Models.Refund>();
	ip = std::string();
	userAgent = std::string();
	serviceLocation = std::string();
	campaignCode = std::string();
	campaignCodeId = int(0);
	percent = int(0);
	desiredDeliveryDate = std::string();
	gender = bool(false);
	cartId = int(0);
	sessionId = std::string();
	externalOrderStatus = int(0);
	campaignIds = std::list<std::string>();
	campaignNames = std::list<std::string>();
	metaData = null<std::string>();
	publicId = std::string();
}

Order.Models.Order::Order.Models.Order(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.Order::~Order.Models.Order()
{

}

void
Order.Models.Order::fromJson(std::string jsonObj)
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

    const char *personalIdKey = "PersonalId";

    if(object.has_key(personalIdKey))
    {
        bourne::json value = object[personalIdKey];



        jsonToValue(&personalId, value, "std::string");


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

    const char *createdAtKey = "CreatedAt";

    if(object.has_key(createdAtKey))
    {
        bourne::json value = object[createdAtKey];



        jsonToValue(&createdAt, value, "std::string");


    }

    const char *updatedAtKey = "UpdatedAt";

    if(object.has_key(updatedAtKey))
    {
        bourne::json value = object[updatedAtKey];



        jsonToValue(&updatedAt, value, "std::string");


    }

    const char *completedAtKey = "CompletedAt";

    if(object.has_key(completedAtKey))
    {
        bourne::json value = object[completedAtKey];



        jsonToValue(&completedAt, value, "std::string");


    }

    const char *statusKey = "Status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }

    const char *currencyKey = "Currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *currencyRateKey = "CurrencyRate";

    if(object.has_key(currencyRateKey))
    {
        bourne::json value = object[currencyRateKey];



        jsonToValue(&currencyRate, value, "double");


    }

    const char *marketIdKey = "MarketId";

    if(object.has_key(marketIdKey))
    {
        bourne::json value = object[marketIdKey];



        jsonToValue(&marketId, value, "int");


    }

    const char *marketNameKey = "MarketName";

    if(object.has_key(marketNameKey))
    {
        bourne::json value = object[marketNameKey];



        jsonToValue(&marketName, value, "std::string");


    }

    const char *languageKey = "Language";

    if(object.has_key(languageKey))
    {
        bourne::json value = object[languageKey];



        jsonToValue(&language, value, "std::string");


    }

    const char *orderTotalKey = "OrderTotal";

    if(object.has_key(orderTotalKey))
    {
        bourne::json value = object[orderTotalKey];



        jsonToValue(&orderTotal, value, "double");


    }

    const char *expectedSumKey = "ExpectedSum";

    if(object.has_key(expectedSumKey))
    {
        bourne::json value = object[expectedSumKey];



        jsonToValue(&expectedSum, value, "double");


    }

    const char *vATTotalKey = "VATTotal";

    if(object.has_key(vATTotalKey))
    {
        bourne::json value = object[vATTotalKey];



        jsonToValue(&vATTotal, value, "double");


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

    const char *discountKey = "Discount";

    if(object.has_key(discountKey))
    {
        bourne::json value = object[discountKey];



        jsonToValue(&discount, value, "double");


    }

    const char *discountExVatKey = "DiscountExVat";

    if(object.has_key(discountExVatKey))
    {
        bourne::json value = object[discountExVatKey];



        jsonToValue(&discountExVat, value, "double");


    }

    const char *fromBalanceKey = "FromBalance";

    if(object.has_key(fromBalanceKey))
    {
        bourne::json value = object[fromBalanceKey];



        jsonToValue(&fromBalance, value, "double");


    }

    const char *shippingFeeKey = "ShippingFee";

    if(object.has_key(shippingFeeKey))
    {
        bourne::json value = object[shippingFeeKey];



        jsonToValue(&shippingFee, value, "double");


    }

    const char *shippingFeeExVatKey = "ShippingFeeExVat";

    if(object.has_key(shippingFeeExVatKey))
    {
        bourne::json value = object[shippingFeeExVatKey];



        jsonToValue(&shippingFeeExVat, value, "double");


    }

    const char *paymentFeeKey = "PaymentFee";

    if(object.has_key(paymentFeeKey))
    {
        bourne::json value = object[paymentFeeKey];



        jsonToValue(&paymentFee, value, "double");


    }

    const char *paymentFeeExVatKey = "PaymentFeeExVat";

    if(object.has_key(paymentFeeExVatKey))
    {
        bourne::json value = object[paymentFeeExVatKey];



        jsonToValue(&paymentFeeExVat, value, "double");


    }

    const char *messageKey = "Message";

    if(object.has_key(messageKey))
    {
        bourne::json value = object[messageKey];



        jsonToValue(&message, value, "std::string");


    }

    const char *orderMessagesKey = "OrderMessages";

    if(object.has_key(orderMessagesKey))
    {
        bourne::json value = object[orderMessagesKey];


        std::list<std::string> orderMessages_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            orderMessages_list.push_back(element);
        }
        orderMessages = orderMessages_list;


    }

    const char *paymentDetailsKey = "PaymentDetails";

    if(object.has_key(paymentDetailsKey))
    {
        bourne::json value = object[paymentDetailsKey];


        std::list<Order.Models.PaymentDetail> paymentDetails_list;
        Order.Models.PaymentDetail element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            paymentDetails_list.push_back(element);
        }
        paymentDetails = paymentDetails_list;


    }

    const char *shippingDetailsKey = "ShippingDetails";

    if(object.has_key(shippingDetailsKey))
    {
        bourne::json value = object[shippingDetailsKey];


        std::list<Order.Models.ShippingDetail> shippingDetails_list;
        Order.Models.ShippingDetail element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            shippingDetails_list.push_back(element);
        }
        shippingDetails = shippingDetails_list;


    }

    const char *shippingAddressKey = "ShippingAddress";

    if(object.has_key(shippingAddressKey))
    {
        bourne::json value = object[shippingAddressKey];




        Order.Models.Address* obj = &shippingAddress;
		obj->fromJson(value.dump());

    }

    const char *billingAddressKey = "BillingAddress";

    if(object.has_key(billingAddressKey))
    {
        bourne::json value = object[billingAddressKey];




        Order.Models.Address* obj = &billingAddress;
		obj->fromJson(value.dump());

    }

    const char *rowsKey = "Rows";

    if(object.has_key(rowsKey))
    {
        bourne::json value = object[rowsKey];


        std::list<Order.Models.OrderRow> rows_list;
        Order.Models.OrderRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }

    const char *refundsKey = "Refunds";

    if(object.has_key(refundsKey))
    {
        bourne::json value = object[refundsKey];


        std::list<Order.Models.Refund> refunds_list;
        Order.Models.Refund element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            refunds_list.push_back(element);
        }
        refunds = refunds_list;


    }

    const char *ipKey = "Ip";

    if(object.has_key(ipKey))
    {
        bourne::json value = object[ipKey];



        jsonToValue(&ip, value, "std::string");


    }

    const char *userAgentKey = "UserAgent";

    if(object.has_key(userAgentKey))
    {
        bourne::json value = object[userAgentKey];



        jsonToValue(&userAgent, value, "std::string");


    }

    const char *serviceLocationKey = "ServiceLocation";

    if(object.has_key(serviceLocationKey))
    {
        bourne::json value = object[serviceLocationKey];



        jsonToValue(&serviceLocation, value, "std::string");


    }

    const char *campaignCodeKey = "CampaignCode";

    if(object.has_key(campaignCodeKey))
    {
        bourne::json value = object[campaignCodeKey];



        jsonToValue(&campaignCode, value, "std::string");


    }

    const char *campaignCodeIdKey = "CampaignCodeId";

    if(object.has_key(campaignCodeIdKey))
    {
        bourne::json value = object[campaignCodeIdKey];



        jsonToValue(&campaignCodeId, value, "int");


    }

    const char *percentKey = "Percent";

    if(object.has_key(percentKey))
    {
        bourne::json value = object[percentKey];



        jsonToValue(&percent, value, "int");


    }

    const char *desiredDeliveryDateKey = "DesiredDeliveryDate";

    if(object.has_key(desiredDeliveryDateKey))
    {
        bourne::json value = object[desiredDeliveryDateKey];



        jsonToValue(&desiredDeliveryDate, value, "std::string");


    }

    const char *genderKey = "Gender";

    if(object.has_key(genderKey))
    {
        bourne::json value = object[genderKey];



        jsonToValue(&gender, value, "bool");


    }

    const char *cartIdKey = "CartId";

    if(object.has_key(cartIdKey))
    {
        bourne::json value = object[cartIdKey];



        jsonToValue(&cartId, value, "int");


    }

    const char *sessionIdKey = "SessionId";

    if(object.has_key(sessionIdKey))
    {
        bourne::json value = object[sessionIdKey];



        jsonToValue(&sessionId, value, "std::string");


    }

    const char *externalOrderStatusKey = "ExternalOrderStatus";

    if(object.has_key(externalOrderStatusKey))
    {
        bourne::json value = object[externalOrderStatusKey];



        jsonToValue(&externalOrderStatus, value, "int");


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

    const char *metaDataKey = "MetaData";

    if(object.has_key(metaDataKey))
    {
        bourne::json value = object[metaDataKey];


    }

    const char *publicIdKey = "PublicId";

    if(object.has_key(publicIdKey))
    {
        bourne::json value = object[publicIdKey];



        jsonToValue(&publicId, value, "std::string");


    }


}

bourne::json
Order.Models.Order::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["externalId"] = getExternalId();






    object["personalId"] = getPersonalId();






    object["customerId"] = getCustomerId();






    object["customerTypeId"] = getCustomerTypeId();






    object["createdAt"] = getCreatedAt();






    object["updatedAt"] = getUpdatedAt();






    object["completedAt"] = getCompletedAt();






    object["status"] = getStatus();






    object["currency"] = getCurrency();






    object["currencyRate"] = getCurrencyRate();






    object["marketId"] = getMarketId();






    object["marketName"] = getMarketName();






    object["language"] = getLanguage();






    object["orderTotal"] = getOrderTotal();






    object["expectedSum"] = getExpectedSum();






    object["vATTotal"] = getVATTotal();






    object["orderValueIncVat"] = getOrderValueIncVat();






    object["orderValueExVat"] = getOrderValueExVat();






    object["itemValueIncVat"] = getItemValueIncVat();






    object["itemValueExVat"] = getItemValueExVat();






    object["discount"] = getDiscount();






    object["discountExVat"] = getDiscountExVat();






    object["fromBalance"] = getFromBalance();






    object["shippingFee"] = getShippingFee();






    object["shippingFeeExVat"] = getShippingFeeExVat();






    object["paymentFee"] = getPaymentFee();






    object["paymentFeeExVat"] = getPaymentFeeExVat();






    object["message"] = getMessage();





    std::list<std::string> orderMessages_list = getOrderMessages();
    bourne::json orderMessages_arr = bourne::json::array();

    for(auto& var : orderMessages_list)
    {
        orderMessages_arr.append(var);
    }
    object["orderMessages"] = orderMessages_arr;








    std::list<Order.Models.PaymentDetail> paymentDetails_list = getPaymentDetails();
    bourne::json paymentDetails_arr = bourne::json::array();

    for(auto& var : paymentDetails_list)
    {
        Order.Models.PaymentDetail obj = var;
        paymentDetails_arr.append(obj.toJson());
    }
    object["paymentDetails"] = paymentDetails_arr;






    std::list<Order.Models.ShippingDetail> shippingDetails_list = getShippingDetails();
    bourne::json shippingDetails_arr = bourne::json::array();

    for(auto& var : shippingDetails_list)
    {
        Order.Models.ShippingDetail obj = var;
        shippingDetails_arr.append(obj.toJson());
    }
    object["shippingDetails"] = shippingDetails_arr;








	object["shippingAddress"] = getShippingAddress().toJson();






	object["billingAddress"] = getBillingAddress().toJson();




    std::list<Order.Models.OrderRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        Order.Models.OrderRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;






    std::list<Order.Models.Refund> refunds_list = getRefunds();
    bourne::json refunds_arr = bourne::json::array();

    for(auto& var : refunds_list)
    {
        Order.Models.Refund obj = var;
        refunds_arr.append(obj.toJson());
    }
    object["refunds"] = refunds_arr;







    object["ip"] = getIp();






    object["userAgent"] = getUserAgent();






    object["serviceLocation"] = getServiceLocation();






    object["campaignCode"] = getCampaignCode();






    object["campaignCodeId"] = getCampaignCodeId();






    object["percent"] = getPercent();






    object["desiredDeliveryDate"] = getDesiredDeliveryDate();






    object["gender"] = isGender();






    object["cartId"] = getCartId();






    object["sessionId"] = getSessionId();






    object["externalOrderStatus"] = getExternalOrderStatus();





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












    object["publicId"] = getPublicId();



    return object;

}

int
Order.Models.Order::getId()
{
	return id;
}

void
Order.Models.Order::setId(int  id)
{
	this->id = id;
}

std::string
Order.Models.Order::getExternalId()
{
	return externalId;
}

void
Order.Models.Order::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Order.Models.Order::getPersonalId()
{
	return personalId;
}

void
Order.Models.Order::setPersonalId(std::string  personalId)
{
	this->personalId = personalId;
}

int
Order.Models.Order::getCustomerId()
{
	return customerId;
}

void
Order.Models.Order::setCustomerId(int  customerId)
{
	this->customerId = customerId;
}

int
Order.Models.Order::getCustomerTypeId()
{
	return customerTypeId;
}

void
Order.Models.Order::setCustomerTypeId(int  customerTypeId)
{
	this->customerTypeId = customerTypeId;
}

std::string
Order.Models.Order::getCreatedAt()
{
	return createdAt;
}

void
Order.Models.Order::setCreatedAt(std::string  createdAt)
{
	this->createdAt = createdAt;
}

std::string
Order.Models.Order::getUpdatedAt()
{
	return updatedAt;
}

void
Order.Models.Order::setUpdatedAt(std::string  updatedAt)
{
	this->updatedAt = updatedAt;
}

std::string
Order.Models.Order::getCompletedAt()
{
	return completedAt;
}

void
Order.Models.Order::setCompletedAt(std::string  completedAt)
{
	this->completedAt = completedAt;
}

std::string
Order.Models.Order::getStatus()
{
	return status;
}

void
Order.Models.Order::setStatus(std::string  status)
{
	this->status = status;
}

std::string
Order.Models.Order::getCurrency()
{
	return currency;
}

void
Order.Models.Order::setCurrency(std::string  currency)
{
	this->currency = currency;
}

double
Order.Models.Order::getCurrencyRate()
{
	return currencyRate;
}

void
Order.Models.Order::setCurrencyRate(double  currencyRate)
{
	this->currencyRate = currencyRate;
}

int
Order.Models.Order::getMarketId()
{
	return marketId;
}

void
Order.Models.Order::setMarketId(int  marketId)
{
	this->marketId = marketId;
}

std::string
Order.Models.Order::getMarketName()
{
	return marketName;
}

void
Order.Models.Order::setMarketName(std::string  marketName)
{
	this->marketName = marketName;
}

std::string
Order.Models.Order::getLanguage()
{
	return language;
}

void
Order.Models.Order::setLanguage(std::string  language)
{
	this->language = language;
}

double
Order.Models.Order::getOrderTotal()
{
	return orderTotal;
}

void
Order.Models.Order::setOrderTotal(double  orderTotal)
{
	this->orderTotal = orderTotal;
}

double
Order.Models.Order::getExpectedSum()
{
	return expectedSum;
}

void
Order.Models.Order::setExpectedSum(double  expectedSum)
{
	this->expectedSum = expectedSum;
}

double
Order.Models.Order::getVATTotal()
{
	return vATTotal;
}

void
Order.Models.Order::setVATTotal(double  vATTotal)
{
	this->vATTotal = vATTotal;
}

double
Order.Models.Order::getOrderValueIncVat()
{
	return orderValueIncVat;
}

void
Order.Models.Order::setOrderValueIncVat(double  orderValueIncVat)
{
	this->orderValueIncVat = orderValueIncVat;
}

double
Order.Models.Order::getOrderValueExVat()
{
	return orderValueExVat;
}

void
Order.Models.Order::setOrderValueExVat(double  orderValueExVat)
{
	this->orderValueExVat = orderValueExVat;
}

double
Order.Models.Order::getItemValueIncVat()
{
	return itemValueIncVat;
}

void
Order.Models.Order::setItemValueIncVat(double  itemValueIncVat)
{
	this->itemValueIncVat = itemValueIncVat;
}

double
Order.Models.Order::getItemValueExVat()
{
	return itemValueExVat;
}

void
Order.Models.Order::setItemValueExVat(double  itemValueExVat)
{
	this->itemValueExVat = itemValueExVat;
}

double
Order.Models.Order::getDiscount()
{
	return discount;
}

void
Order.Models.Order::setDiscount(double  discount)
{
	this->discount = discount;
}

double
Order.Models.Order::getDiscountExVat()
{
	return discountExVat;
}

void
Order.Models.Order::setDiscountExVat(double  discountExVat)
{
	this->discountExVat = discountExVat;
}

double
Order.Models.Order::getFromBalance()
{
	return fromBalance;
}

void
Order.Models.Order::setFromBalance(double  fromBalance)
{
	this->fromBalance = fromBalance;
}

double
Order.Models.Order::getShippingFee()
{
	return shippingFee;
}

void
Order.Models.Order::setShippingFee(double  shippingFee)
{
	this->shippingFee = shippingFee;
}

double
Order.Models.Order::getShippingFeeExVat()
{
	return shippingFeeExVat;
}

void
Order.Models.Order::setShippingFeeExVat(double  shippingFeeExVat)
{
	this->shippingFeeExVat = shippingFeeExVat;
}

double
Order.Models.Order::getPaymentFee()
{
	return paymentFee;
}

void
Order.Models.Order::setPaymentFee(double  paymentFee)
{
	this->paymentFee = paymentFee;
}

double
Order.Models.Order::getPaymentFeeExVat()
{
	return paymentFeeExVat;
}

void
Order.Models.Order::setPaymentFeeExVat(double  paymentFeeExVat)
{
	this->paymentFeeExVat = paymentFeeExVat;
}

std::string
Order.Models.Order::getMessage()
{
	return message;
}

void
Order.Models.Order::setMessage(std::string  message)
{
	this->message = message;
}

std::list<std::string>
Order.Models.Order::getOrderMessages()
{
	return orderMessages;
}

void
Order.Models.Order::setOrderMessages(std::list <std::string> orderMessages)
{
	this->orderMessages = orderMessages;
}

std::list<Order.Models.PaymentDetail>
Order.Models.Order::getPaymentDetails()
{
	return paymentDetails;
}

void
Order.Models.Order::setPaymentDetails(std::list <Order.Models.PaymentDetail> paymentDetails)
{
	this->paymentDetails = paymentDetails;
}

std::list<Order.Models.ShippingDetail>
Order.Models.Order::getShippingDetails()
{
	return shippingDetails;
}

void
Order.Models.Order::setShippingDetails(std::list <Order.Models.ShippingDetail> shippingDetails)
{
	this->shippingDetails = shippingDetails;
}

Order.Models.Address
Order.Models.Order::getShippingAddress()
{
	return shippingAddress;
}

void
Order.Models.Order::setShippingAddress(Order.Models.Address  shippingAddress)
{
	this->shippingAddress = shippingAddress;
}

Order.Models.Address
Order.Models.Order::getBillingAddress()
{
	return billingAddress;
}

void
Order.Models.Order::setBillingAddress(Order.Models.Address  billingAddress)
{
	this->billingAddress = billingAddress;
}

std::list<Order.Models.OrderRow>
Order.Models.Order::getRows()
{
	return rows;
}

void
Order.Models.Order::setRows(std::list <Order.Models.OrderRow> rows)
{
	this->rows = rows;
}

std::list<Order.Models.Refund>
Order.Models.Order::getRefunds()
{
	return refunds;
}

void
Order.Models.Order::setRefunds(std::list <Order.Models.Refund> refunds)
{
	this->refunds = refunds;
}

std::string
Order.Models.Order::getIp()
{
	return ip;
}

void
Order.Models.Order::setIp(std::string  ip)
{
	this->ip = ip;
}

std::string
Order.Models.Order::getUserAgent()
{
	return userAgent;
}

void
Order.Models.Order::setUserAgent(std::string  userAgent)
{
	this->userAgent = userAgent;
}

std::string
Order.Models.Order::getServiceLocation()
{
	return serviceLocation;
}

void
Order.Models.Order::setServiceLocation(std::string  serviceLocation)
{
	this->serviceLocation = serviceLocation;
}

std::string
Order.Models.Order::getCampaignCode()
{
	return campaignCode;
}

void
Order.Models.Order::setCampaignCode(std::string  campaignCode)
{
	this->campaignCode = campaignCode;
}

int
Order.Models.Order::getCampaignCodeId()
{
	return campaignCodeId;
}

void
Order.Models.Order::setCampaignCodeId(int  campaignCodeId)
{
	this->campaignCodeId = campaignCodeId;
}

int
Order.Models.Order::getPercent()
{
	return percent;
}

void
Order.Models.Order::setPercent(int  percent)
{
	this->percent = percent;
}

std::string
Order.Models.Order::getDesiredDeliveryDate()
{
	return desiredDeliveryDate;
}

void
Order.Models.Order::setDesiredDeliveryDate(std::string  desiredDeliveryDate)
{
	this->desiredDeliveryDate = desiredDeliveryDate;
}

bool
Order.Models.Order::isGender()
{
	return gender;
}

void
Order.Models.Order::setGender(bool  gender)
{
	this->gender = gender;
}

int
Order.Models.Order::getCartId()
{
	return cartId;
}

void
Order.Models.Order::setCartId(int  cartId)
{
	this->cartId = cartId;
}

std::string
Order.Models.Order::getSessionId()
{
	return sessionId;
}

void
Order.Models.Order::setSessionId(std::string  sessionId)
{
	this->sessionId = sessionId;
}

int
Order.Models.Order::getExternalOrderStatus()
{
	return externalOrderStatus;
}

void
Order.Models.Order::setExternalOrderStatus(int  externalOrderStatus)
{
	this->externalOrderStatus = externalOrderStatus;
}

std::list<std::string>
Order.Models.Order::getCampaignIds()
{
	return campaignIds;
}

void
Order.Models.Order::setCampaignIds(std::list <std::string> campaignIds)
{
	this->campaignIds = campaignIds;
}

std::list<std::string>
Order.Models.Order::getCampaignNames()
{
	return campaignNames;
}

void
Order.Models.Order::setCampaignNames(std::list <std::string> campaignNames)
{
	this->campaignNames = campaignNames;
}

Map<string, string>
Order.Models.Order::getMetaData()
{
	return metaData;
}

void
Order.Models.Order::setMetaData(Map <string, string> metaData)
{
	this->metaData = metaData;
}

std::string
Order.Models.Order::getPublicId()
{
	return publicId;
}

void
Order.Models.Order::setPublicId(std::string  publicId)
{
	this->publicId = publicId;
}



