

#include "Order.Refund.h"

using namespace Tiny;

Order.Refund::Order.Refund()
{
	refundId = std::string();
	refundInstanceId = int(0);
	orderId = int(0);
	externalOrderId = std::string();
	externalId = std::string();
	reference = std::string();
	description = std::string();
	processedOn = std::string();
	refundedItemTotal = float(0);
	refundedShippingFee = float(0);
	refundedPaymentFee = float(0);
	refundedDiscount = float(0);
	refundedBalance = float(0);
	vatRate = float(0);
	paymentName = std::string();
	locale = std::string();
	rows = std::list<Order.RefundRow>();
	orderTransactionId = std::string();
	secondaryOrderTransactionId = std::string();
}

Order.Refund::Order.Refund(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Refund::~Order.Refund()
{

}

void
Order.Refund::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *refundIdKey = "RefundId";

    if(object.has_key(refundIdKey))
    {
        bourne::json value = object[refundIdKey];



        jsonToValue(&refundId, value, "std::string");


    }

    const char *refundInstanceIdKey = "RefundInstanceId";

    if(object.has_key(refundInstanceIdKey))
    {
        bourne::json value = object[refundInstanceIdKey];



        jsonToValue(&refundInstanceId, value, "int");


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

    const char *refundedItemTotalKey = "RefundedItemTotal";

    if(object.has_key(refundedItemTotalKey))
    {
        bourne::json value = object[refundedItemTotalKey];



        jsonToValue(&refundedItemTotal, value, "double");


    }

    const char *refundedShippingFeeKey = "RefundedShippingFee";

    if(object.has_key(refundedShippingFeeKey))
    {
        bourne::json value = object[refundedShippingFeeKey];



        jsonToValue(&refundedShippingFee, value, "double");


    }

    const char *refundedPaymentFeeKey = "RefundedPaymentFee";

    if(object.has_key(refundedPaymentFeeKey))
    {
        bourne::json value = object[refundedPaymentFeeKey];



        jsonToValue(&refundedPaymentFee, value, "double");


    }

    const char *refundedDiscountKey = "RefundedDiscount";

    if(object.has_key(refundedDiscountKey))
    {
        bourne::json value = object[refundedDiscountKey];



        jsonToValue(&refundedDiscount, value, "double");


    }

    const char *refundedBalanceKey = "RefundedBalance";

    if(object.has_key(refundedBalanceKey))
    {
        bourne::json value = object[refundedBalanceKey];



        jsonToValue(&refundedBalance, value, "double");


    }

    const char *vatRateKey = "VatRate";

    if(object.has_key(vatRateKey))
    {
        bourne::json value = object[vatRateKey];



        jsonToValue(&vatRate, value, "double");


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


        std::list<Order.RefundRow> rows_list;
        Order.RefundRow element;
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
Order.Refund::toJson()
{
    bourne::json object = bourne::json::object();





    object["refundId"] = getRefundId();






    object["refundInstanceId"] = getRefundInstanceId();






    object["orderId"] = getOrderId();






    object["externalOrderId"] = getExternalOrderId();






    object["externalId"] = getExternalId();






    object["reference"] = getReference();






    object["description"] = getDescription();






    object["processedOn"] = getProcessedOn();






    object["refundedItemTotal"] = getRefundedItemTotal();






    object["refundedShippingFee"] = getRefundedShippingFee();






    object["refundedPaymentFee"] = getRefundedPaymentFee();






    object["refundedDiscount"] = getRefundedDiscount();






    object["refundedBalance"] = getRefundedBalance();






    object["vatRate"] = getVatRate();






    object["paymentName"] = getPaymentName();






    object["locale"] = getLocale();





    std::list<Order.RefundRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        Order.RefundRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;







    object["orderTransactionId"] = getOrderTransactionId();






    object["secondaryOrderTransactionId"] = getSecondaryOrderTransactionId();



    return object;

}

std::string
Order.Refund::getRefundId()
{
	return refundId;
}

void
Order.Refund::setRefundId(std::string  refundId)
{
	this->refundId = refundId;
}

int
Order.Refund::getRefundInstanceId()
{
	return refundInstanceId;
}

void
Order.Refund::setRefundInstanceId(int  refundInstanceId)
{
	this->refundInstanceId = refundInstanceId;
}

int
Order.Refund::getOrderId()
{
	return orderId;
}

void
Order.Refund::setOrderId(int  orderId)
{
	this->orderId = orderId;
}

std::string
Order.Refund::getExternalOrderId()
{
	return externalOrderId;
}

void
Order.Refund::setExternalOrderId(std::string  externalOrderId)
{
	this->externalOrderId = externalOrderId;
}

std::string
Order.Refund::getExternalId()
{
	return externalId;
}

void
Order.Refund::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Order.Refund::getReference()
{
	return reference;
}

void
Order.Refund::setReference(std::string  reference)
{
	this->reference = reference;
}

std::string
Order.Refund::getDescription()
{
	return description;
}

void
Order.Refund::setDescription(std::string  description)
{
	this->description = description;
}

std::string
Order.Refund::getProcessedOn()
{
	return processedOn;
}

void
Order.Refund::setProcessedOn(std::string  processedOn)
{
	this->processedOn = processedOn;
}

double
Order.Refund::getRefundedItemTotal()
{
	return refundedItemTotal;
}

void
Order.Refund::setRefundedItemTotal(double  refundedItemTotal)
{
	this->refundedItemTotal = refundedItemTotal;
}

double
Order.Refund::getRefundedShippingFee()
{
	return refundedShippingFee;
}

void
Order.Refund::setRefundedShippingFee(double  refundedShippingFee)
{
	this->refundedShippingFee = refundedShippingFee;
}

double
Order.Refund::getRefundedPaymentFee()
{
	return refundedPaymentFee;
}

void
Order.Refund::setRefundedPaymentFee(double  refundedPaymentFee)
{
	this->refundedPaymentFee = refundedPaymentFee;
}

double
Order.Refund::getRefundedDiscount()
{
	return refundedDiscount;
}

void
Order.Refund::setRefundedDiscount(double  refundedDiscount)
{
	this->refundedDiscount = refundedDiscount;
}

double
Order.Refund::getRefundedBalance()
{
	return refundedBalance;
}

void
Order.Refund::setRefundedBalance(double  refundedBalance)
{
	this->refundedBalance = refundedBalance;
}

double
Order.Refund::getVatRate()
{
	return vatRate;
}

void
Order.Refund::setVatRate(double  vatRate)
{
	this->vatRate = vatRate;
}

std::string
Order.Refund::getPaymentName()
{
	return paymentName;
}

void
Order.Refund::setPaymentName(std::string  paymentName)
{
	this->paymentName = paymentName;
}

std::string
Order.Refund::getLocale()
{
	return locale;
}

void
Order.Refund::setLocale(std::string  locale)
{
	this->locale = locale;
}

std::list<Order.RefundRow>
Order.Refund::getRows()
{
	return rows;
}

void
Order.Refund::setRows(std::list <Order.RefundRow> rows)
{
	this->rows = rows;
}

std::string
Order.Refund::getOrderTransactionId()
{
	return orderTransactionId;
}

void
Order.Refund::setOrderTransactionId(std::string  orderTransactionId)
{
	this->orderTransactionId = orderTransactionId;
}

std::string
Order.Refund::getSecondaryOrderTransactionId()
{
	return secondaryOrderTransactionId;
}

void
Order.Refund::setSecondaryOrderTransactionId(std::string  secondaryOrderTransactionId)
{
	this->secondaryOrderTransactionId = secondaryOrderTransactionId;
}



