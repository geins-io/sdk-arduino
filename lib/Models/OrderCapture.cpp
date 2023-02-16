

#include "Order.Capture.h"

using namespace Tiny;

Order.Capture::Order.Capture()
{
	captureId = std::string();
	orderPaymentId = std::string();
	orderId = int(0);
	externalOrderId = std::string();
	externalId = std::string();
	reference = std::string();
	description = std::string();
	processedOn = std::string();
	capturedItemTotal = float(0);
	capturedShippingFee = float(0);
	capturedPaymentFee = float(0);
	capturedDiscount = float(0);
	capturedBalance = float(0);
	vatRate = float(0);
	trackingNumber = std::string();
	shippingName = std::string();
	trackingUri = std::string();
	shippingMethod = std::string();
	paymentName = std::string();
	locale = std::string();
	rows = std::list<Order.CaptureRow>();
	orderTransactionId = std::string();
	secondaryOrderTransactionId = std::string();
}

Order.Capture::Order.Capture(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Capture::~Order.Capture()
{

}

void
Order.Capture::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *captureIdKey = "CaptureId";

    if(object.has_key(captureIdKey))
    {
        bourne::json value = object[captureIdKey];



        jsonToValue(&captureId, value, "std::string");


    }

    const char *orderPaymentIdKey = "OrderPaymentId";

    if(object.has_key(orderPaymentIdKey))
    {
        bourne::json value = object[orderPaymentIdKey];



        jsonToValue(&orderPaymentId, value, "std::string");


    }

    const char *orderIdKey = "OrderId";

    if(object.has_key(orderIdKey))
    {
        bourne::json value = object[orderIdKey];



        jsonToValue(&orderId, value, "int");


    }

    const char *externalOrderIdKey = "ExternalOrderId";

    if(object.has_key(externalOrderIdKey))
    {
        bourne::json value = object[externalOrderIdKey];



        jsonToValue(&externalOrderId, value, "std::string");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }

    const char *referenceKey = "Reference";

    if(object.has_key(referenceKey))
    {
        bourne::json value = object[referenceKey];



        jsonToValue(&reference, value, "std::string");


    }

    const char *descriptionKey = "Description";

    if(object.has_key(descriptionKey))
    {
        bourne::json value = object[descriptionKey];



        jsonToValue(&description, value, "std::string");


    }

    const char *processedOnKey = "ProcessedOn";

    if(object.has_key(processedOnKey))
    {
        bourne::json value = object[processedOnKey];



        jsonToValue(&processedOn, value, "std::string");


    }

    const char *capturedItemTotalKey = "CapturedItemTotal";

    if(object.has_key(capturedItemTotalKey))
    {
        bourne::json value = object[capturedItemTotalKey];



        jsonToValue(&capturedItemTotal, value, "double");


    }

    const char *capturedShippingFeeKey = "CapturedShippingFee";

    if(object.has_key(capturedShippingFeeKey))
    {
        bourne::json value = object[capturedShippingFeeKey];



        jsonToValue(&capturedShippingFee, value, "double");


    }

    const char *capturedPaymentFeeKey = "CapturedPaymentFee";

    if(object.has_key(capturedPaymentFeeKey))
    {
        bourne::json value = object[capturedPaymentFeeKey];



        jsonToValue(&capturedPaymentFee, value, "double");


    }

    const char *capturedDiscountKey = "CapturedDiscount";

    if(object.has_key(capturedDiscountKey))
    {
        bourne::json value = object[capturedDiscountKey];



        jsonToValue(&capturedDiscount, value, "double");


    }

    const char *capturedBalanceKey = "CapturedBalance";

    if(object.has_key(capturedBalanceKey))
    {
        bourne::json value = object[capturedBalanceKey];



        jsonToValue(&capturedBalance, value, "double");


    }

    const char *vatRateKey = "VatRate";

    if(object.has_key(vatRateKey))
    {
        bourne::json value = object[vatRateKey];



        jsonToValue(&vatRate, value, "double");


    }

    const char *trackingNumberKey = "TrackingNumber";

    if(object.has_key(trackingNumberKey))
    {
        bourne::json value = object[trackingNumberKey];



        jsonToValue(&trackingNumber, value, "std::string");


    }

    const char *shippingNameKey = "ShippingName";

    if(object.has_key(shippingNameKey))
    {
        bourne::json value = object[shippingNameKey];



        jsonToValue(&shippingName, value, "std::string");


    }

    const char *trackingUriKey = "TrackingUri";

    if(object.has_key(trackingUriKey))
    {
        bourne::json value = object[trackingUriKey];



        jsonToValue(&trackingUri, value, "std::string");


    }

    const char *shippingMethodKey = "ShippingMethod";

    if(object.has_key(shippingMethodKey))
    {
        bourne::json value = object[shippingMethodKey];



        jsonToValue(&shippingMethod, value, "std::string");


    }

    const char *paymentNameKey = "PaymentName";

    if(object.has_key(paymentNameKey))
    {
        bourne::json value = object[paymentNameKey];



        jsonToValue(&paymentName, value, "std::string");


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


        std::list<Order.CaptureRow> rows_list;
        Order.CaptureRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }

    const char *orderTransactionIdKey = "OrderTransactionId";

    if(object.has_key(orderTransactionIdKey))
    {
        bourne::json value = object[orderTransactionIdKey];



        jsonToValue(&orderTransactionId, value, "std::string");


    }

    const char *secondaryOrderTransactionIdKey = "SecondaryOrderTransactionId";

    if(object.has_key(secondaryOrderTransactionIdKey))
    {
        bourne::json value = object[secondaryOrderTransactionIdKey];



        jsonToValue(&secondaryOrderTransactionId, value, "std::string");


    }


}

bourne::json
Order.Capture::toJson()
{
    bourne::json object = bourne::json::object();





    object["captureId"] = getCaptureId();






    object["orderPaymentId"] = getOrderPaymentId();






    object["orderId"] = getOrderId();






    object["externalOrderId"] = getExternalOrderId();






    object["externalId"] = getExternalId();






    object["reference"] = getReference();






    object["description"] = getDescription();






    object["processedOn"] = getProcessedOn();






    object["capturedItemTotal"] = getCapturedItemTotal();






    object["capturedShippingFee"] = getCapturedShippingFee();






    object["capturedPaymentFee"] = getCapturedPaymentFee();






    object["capturedDiscount"] = getCapturedDiscount();






    object["capturedBalance"] = getCapturedBalance();






    object["vatRate"] = getVatRate();






    object["trackingNumber"] = getTrackingNumber();






    object["shippingName"] = getShippingName();






    object["trackingUri"] = getTrackingUri();






    object["shippingMethod"] = getShippingMethod();






    object["paymentName"] = getPaymentName();






    object["locale"] = getLocale();





    std::list<Order.CaptureRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        Order.CaptureRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;







    object["orderTransactionId"] = getOrderTransactionId();






    object["secondaryOrderTransactionId"] = getSecondaryOrderTransactionId();



    return object;

}

std::string
Order.Capture::getCaptureId()
{
	return captureId;
}

void
Order.Capture::setCaptureId(std::string  captureId)
{
	this->captureId = captureId;
}

std::string
Order.Capture::getOrderPaymentId()
{
	return orderPaymentId;
}

void
Order.Capture::setOrderPaymentId(std::string  orderPaymentId)
{
	this->orderPaymentId = orderPaymentId;
}

int
Order.Capture::getOrderId()
{
	return orderId;
}

void
Order.Capture::setOrderId(int  orderId)
{
	this->orderId = orderId;
}

std::string
Order.Capture::getExternalOrderId()
{
	return externalOrderId;
}

void
Order.Capture::setExternalOrderId(std::string  externalOrderId)
{
	this->externalOrderId = externalOrderId;
}

std::string
Order.Capture::getExternalId()
{
	return externalId;
}

void
Order.Capture::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Order.Capture::getReference()
{
	return reference;
}

void
Order.Capture::setReference(std::string  reference)
{
	this->reference = reference;
}

std::string
Order.Capture::getDescription()
{
	return description;
}

void
Order.Capture::setDescription(std::string  description)
{
	this->description = description;
}

std::string
Order.Capture::getProcessedOn()
{
	return processedOn;
}

void
Order.Capture::setProcessedOn(std::string  processedOn)
{
	this->processedOn = processedOn;
}

double
Order.Capture::getCapturedItemTotal()
{
	return capturedItemTotal;
}

void
Order.Capture::setCapturedItemTotal(double  capturedItemTotal)
{
	this->capturedItemTotal = capturedItemTotal;
}

double
Order.Capture::getCapturedShippingFee()
{
	return capturedShippingFee;
}

void
Order.Capture::setCapturedShippingFee(double  capturedShippingFee)
{
	this->capturedShippingFee = capturedShippingFee;
}

double
Order.Capture::getCapturedPaymentFee()
{
	return capturedPaymentFee;
}

void
Order.Capture::setCapturedPaymentFee(double  capturedPaymentFee)
{
	this->capturedPaymentFee = capturedPaymentFee;
}

double
Order.Capture::getCapturedDiscount()
{
	return capturedDiscount;
}

void
Order.Capture::setCapturedDiscount(double  capturedDiscount)
{
	this->capturedDiscount = capturedDiscount;
}

double
Order.Capture::getCapturedBalance()
{
	return capturedBalance;
}

void
Order.Capture::setCapturedBalance(double  capturedBalance)
{
	this->capturedBalance = capturedBalance;
}

double
Order.Capture::getVatRate()
{
	return vatRate;
}

void
Order.Capture::setVatRate(double  vatRate)
{
	this->vatRate = vatRate;
}

std::string
Order.Capture::getTrackingNumber()
{
	return trackingNumber;
}

void
Order.Capture::setTrackingNumber(std::string  trackingNumber)
{
	this->trackingNumber = trackingNumber;
}

std::string
Order.Capture::getShippingName()
{
	return shippingName;
}

void
Order.Capture::setShippingName(std::string  shippingName)
{
	this->shippingName = shippingName;
}

std::string
Order.Capture::getTrackingUri()
{
	return trackingUri;
}

void
Order.Capture::setTrackingUri(std::string  trackingUri)
{
	this->trackingUri = trackingUri;
}

std::string
Order.Capture::getShippingMethod()
{
	return shippingMethod;
}

void
Order.Capture::setShippingMethod(std::string  shippingMethod)
{
	this->shippingMethod = shippingMethod;
}

std::string
Order.Capture::getPaymentName()
{
	return paymentName;
}

void
Order.Capture::setPaymentName(std::string  paymentName)
{
	this->paymentName = paymentName;
}

std::string
Order.Capture::getLocale()
{
	return locale;
}

void
Order.Capture::setLocale(std::string  locale)
{
	this->locale = locale;
}

std::list<Order.CaptureRow>
Order.Capture::getRows()
{
	return rows;
}

void
Order.Capture::setRows(std::list <Order.CaptureRow> rows)
{
	this->rows = rows;
}

std::string
Order.Capture::getOrderTransactionId()
{
	return orderTransactionId;
}

void
Order.Capture::setOrderTransactionId(std::string  orderTransactionId)
{
	this->orderTransactionId = orderTransactionId;
}

std::string
Order.Capture::getSecondaryOrderTransactionId()
{
	return secondaryOrderTransactionId;
}

void
Order.Capture::setSecondaryOrderTransactionId(std::string  secondaryOrderTransactionId)
{
	this->secondaryOrderTransactionId = secondaryOrderTransactionId;
}



