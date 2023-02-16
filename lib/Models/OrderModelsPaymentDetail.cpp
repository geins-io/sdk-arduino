

#include "Order.Models.PaymentDetail.h"

using namespace Tiny;

Order.Models.PaymentDetail::Order.Models.PaymentDetail()
{
	id = int(0);
	paymentId = int(0);
	name = std::string();
	displayName = std::string();
	transactionId = std::string();
	secondaryTransactionId = std::string();
	reservationNumber = std::string();
	reservationDate = std::string();
	paymentDate = std::string();
	total = float(0);
	payed = bool(false);
	paymentFee = float(0);
	shippingFee = float(0);
	paymentOption = std::string();
}

Order.Models.PaymentDetail::Order.Models.PaymentDetail(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.PaymentDetail::~Order.Models.PaymentDetail()
{

}

void
Order.Models.PaymentDetail::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *paymentIdKey = "PaymentId";

    if(object.has_key(paymentIdKey))
    {
        bourne::json value = object[paymentIdKey];



        jsonToValue(&paymentId, value, "int");


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

    const char *reservationNumberKey = "ReservationNumber";

    if(object.has_key(reservationNumberKey))
    {
        bourne::json value = object[reservationNumberKey];



        jsonToValue(&reservationNumber, value, "std::string");


    }

    const char *reservationDateKey = "ReservationDate";

    if(object.has_key(reservationDateKey))
    {
        bourne::json value = object[reservationDateKey];



        jsonToValue(&reservationDate, value, "std::string");


    }

    const char *paymentDateKey = "PaymentDate";

    if(object.has_key(paymentDateKey))
    {
        bourne::json value = object[paymentDateKey];



        jsonToValue(&paymentDate, value, "std::string");


    }

    const char *totalKey = "Total";

    if(object.has_key(totalKey))
    {
        bourne::json value = object[totalKey];



        jsonToValue(&total, value, "double");


    }

    const char *payedKey = "Payed";

    if(object.has_key(payedKey))
    {
        bourne::json value = object[payedKey];



        jsonToValue(&payed, value, "bool");


    }

    const char *paymentFeeKey = "PaymentFee";

    if(object.has_key(paymentFeeKey))
    {
        bourne::json value = object[paymentFeeKey];



        jsonToValue(&paymentFee, value, "double");


    }

    const char *shippingFeeKey = "ShippingFee";

    if(object.has_key(shippingFeeKey))
    {
        bourne::json value = object[shippingFeeKey];



        jsonToValue(&shippingFee, value, "double");


    }

    const char *paymentOptionKey = "PaymentOption";

    if(object.has_key(paymentOptionKey))
    {
        bourne::json value = object[paymentOptionKey];



        jsonToValue(&paymentOption, value, "std::string");


    }


}

bourne::json
Order.Models.PaymentDetail::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["paymentId"] = getPaymentId();






    object["name"] = getName();






    object["displayName"] = getDisplayName();






    object["transactionId"] = getTransactionId();






    object["secondaryTransactionId"] = getSecondaryTransactionId();






    object["reservationNumber"] = getReservationNumber();






    object["reservationDate"] = getReservationDate();






    object["paymentDate"] = getPaymentDate();






    object["total"] = getTotal();






    object["payed"] = isPayed();






    object["paymentFee"] = getPaymentFee();






    object["shippingFee"] = getShippingFee();






    object["paymentOption"] = getPaymentOption();



    return object;

}

int
Order.Models.PaymentDetail::getId()
{
	return id;
}

void
Order.Models.PaymentDetail::setId(int  id)
{
	this->id = id;
}

int
Order.Models.PaymentDetail::getPaymentId()
{
	return paymentId;
}

void
Order.Models.PaymentDetail::setPaymentId(int  paymentId)
{
	this->paymentId = paymentId;
}

std::string
Order.Models.PaymentDetail::getName()
{
	return name;
}

void
Order.Models.PaymentDetail::setName(std::string  name)
{
	this->name = name;
}

std::string
Order.Models.PaymentDetail::getDisplayName()
{
	return displayName;
}

void
Order.Models.PaymentDetail::setDisplayName(std::string  displayName)
{
	this->displayName = displayName;
}

std::string
Order.Models.PaymentDetail::getTransactionId()
{
	return transactionId;
}

void
Order.Models.PaymentDetail::setTransactionId(std::string  transactionId)
{
	this->transactionId = transactionId;
}

std::string
Order.Models.PaymentDetail::getSecondaryTransactionId()
{
	return secondaryTransactionId;
}

void
Order.Models.PaymentDetail::setSecondaryTransactionId(std::string  secondaryTransactionId)
{
	this->secondaryTransactionId = secondaryTransactionId;
}

std::string
Order.Models.PaymentDetail::getReservationNumber()
{
	return reservationNumber;
}

void
Order.Models.PaymentDetail::setReservationNumber(std::string  reservationNumber)
{
	this->reservationNumber = reservationNumber;
}

std::string
Order.Models.PaymentDetail::getReservationDate()
{
	return reservationDate;
}

void
Order.Models.PaymentDetail::setReservationDate(std::string  reservationDate)
{
	this->reservationDate = reservationDate;
}

std::string
Order.Models.PaymentDetail::getPaymentDate()
{
	return paymentDate;
}

void
Order.Models.PaymentDetail::setPaymentDate(std::string  paymentDate)
{
	this->paymentDate = paymentDate;
}

double
Order.Models.PaymentDetail::getTotal()
{
	return total;
}

void
Order.Models.PaymentDetail::setTotal(double  total)
{
	this->total = total;
}

bool
Order.Models.PaymentDetail::isPayed()
{
	return payed;
}

void
Order.Models.PaymentDetail::setPayed(bool  payed)
{
	this->payed = payed;
}

double
Order.Models.PaymentDetail::getPaymentFee()
{
	return paymentFee;
}

void
Order.Models.PaymentDetail::setPaymentFee(double  paymentFee)
{
	this->paymentFee = paymentFee;
}

double
Order.Models.PaymentDetail::getShippingFee()
{
	return shippingFee;
}

void
Order.Models.PaymentDetail::setShippingFee(double  shippingFee)
{
	this->shippingFee = shippingFee;
}

std::string
Order.Models.PaymentDetail::getPaymentOption()
{
	return paymentOption;
}

void
Order.Models.PaymentDetail::setPaymentOption(std::string  paymentOption)
{
	this->paymentOption = paymentOption;
}



