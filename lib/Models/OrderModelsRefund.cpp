

#include "Order.Models.Refund.h"

using namespace Tiny;

Order.Models.Refund::Order.Models.Refund()
{
	id = int(0);
	orderRowId = int(0);
	paymentDetailId = int(0);
	returnId = int(0);
	articleNumber = std::string();
	createdAt = std::string();
	total = float(0);
	reasonCode = int(0);
	reason = std::string();
	toBalance = bool(false);
	vat = float(0);
	itemId = int(0);
	refundType = std::string();
}

Order.Models.Refund::Order.Models.Refund(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.Models.Refund::~Order.Models.Refund()
{

}

void
Order.Models.Refund::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "Id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *orderRowIdKey = "OrderRowId";

    if(object.has_key(orderRowIdKey))
    {
        bourne::json value = object[orderRowIdKey];



        jsonToValue(&orderRowId, value, "int");


    }

    const char *paymentDetailIdKey = "PaymentDetailId";

    if(object.has_key(paymentDetailIdKey))
    {
        bourne::json value = object[paymentDetailIdKey];



        jsonToValue(&paymentDetailId, value, "int");


    }

    const char *returnIdKey = "ReturnId";

    if(object.has_key(returnIdKey))
    {
        bourne::json value = object[returnIdKey];



        jsonToValue(&returnId, value, "int");


    }

    const char *articleNumberKey = "ArticleNumber";

    if(object.has_key(articleNumberKey))
    {
        bourne::json value = object[articleNumberKey];



        jsonToValue(&articleNumber, value, "std::string");


    }

    const char *createdAtKey = "CreatedAt";

    if(object.has_key(createdAtKey))
    {
        bourne::json value = object[createdAtKey];



        jsonToValue(&createdAt, value, "std::string");


    }

    const char *totalKey = "Total";

    if(object.has_key(totalKey))
    {
        bourne::json value = object[totalKey];



        jsonToValue(&total, value, "double");


    }

    const char *reasonCodeKey = "ReasonCode";

    if(object.has_key(reasonCodeKey))
    {
        bourne::json value = object[reasonCodeKey];



        jsonToValue(&reasonCode, value, "int");


    }

    const char *reasonKey = "Reason";

    if(object.has_key(reasonKey))
    {
        bourne::json value = object[reasonKey];



        jsonToValue(&reason, value, "std::string");


    }

    const char *toBalanceKey = "ToBalance";

    if(object.has_key(toBalanceKey))
    {
        bourne::json value = object[toBalanceKey];



        jsonToValue(&toBalance, value, "bool");


    }

    const char *vatKey = "Vat";

    if(object.has_key(vatKey))
    {
        bourne::json value = object[vatKey];



        jsonToValue(&vat, value, "double");


    }

    const char *itemIdKey = "ItemId";

    if(object.has_key(itemIdKey))
    {
        bourne::json value = object[itemIdKey];



        jsonToValue(&itemId, value, "int");


    }

    const char *refundTypeKey = "RefundType";

    if(object.has_key(refundTypeKey))
    {
        bourne::json value = object[refundTypeKey];



        jsonToValue(&refundType, value, "std::string");


    }


}

bourne::json
Order.Models.Refund::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["orderRowId"] = getOrderRowId();






    object["paymentDetailId"] = getPaymentDetailId();






    object["returnId"] = getReturnId();






    object["articleNumber"] = getArticleNumber();






    object["createdAt"] = getCreatedAt();






    object["total"] = getTotal();






    object["reasonCode"] = getReasonCode();






    object["reason"] = getReason();






    object["toBalance"] = isToBalance();






    object["vat"] = getVat();






    object["itemId"] = getItemId();






    object["refundType"] = getRefundType();



    return object;

}

int
Order.Models.Refund::getId()
{
	return id;
}

void
Order.Models.Refund::setId(int  id)
{
	this->id = id;
}

int
Order.Models.Refund::getOrderRowId()
{
	return orderRowId;
}

void
Order.Models.Refund::setOrderRowId(int  orderRowId)
{
	this->orderRowId = orderRowId;
}

int
Order.Models.Refund::getPaymentDetailId()
{
	return paymentDetailId;
}

void
Order.Models.Refund::setPaymentDetailId(int  paymentDetailId)
{
	this->paymentDetailId = paymentDetailId;
}

int
Order.Models.Refund::getReturnId()
{
	return returnId;
}

void
Order.Models.Refund::setReturnId(int  returnId)
{
	this->returnId = returnId;
}

std::string
Order.Models.Refund::getArticleNumber()
{
	return articleNumber;
}

void
Order.Models.Refund::setArticleNumber(std::string  articleNumber)
{
	this->articleNumber = articleNumber;
}

std::string
Order.Models.Refund::getCreatedAt()
{
	return createdAt;
}

void
Order.Models.Refund::setCreatedAt(std::string  createdAt)
{
	this->createdAt = createdAt;
}

double
Order.Models.Refund::getTotal()
{
	return total;
}

void
Order.Models.Refund::setTotal(double  total)
{
	this->total = total;
}

int
Order.Models.Refund::getReasonCode()
{
	return reasonCode;
}

void
Order.Models.Refund::setReasonCode(int  reasonCode)
{
	this->reasonCode = reasonCode;
}

std::string
Order.Models.Refund::getReason()
{
	return reason;
}

void
Order.Models.Refund::setReason(std::string  reason)
{
	this->reason = reason;
}

bool
Order.Models.Refund::isToBalance()
{
	return toBalance;
}

void
Order.Models.Refund::setToBalance(bool  toBalance)
{
	this->toBalance = toBalance;
}

double
Order.Models.Refund::getVat()
{
	return vat;
}

void
Order.Models.Refund::setVat(double  vat)
{
	this->vat = vat;
}

int
Order.Models.Refund::getItemId()
{
	return itemId;
}

void
Order.Models.Refund::setItemId(int  itemId)
{
	this->itemId = itemId;
}

std::string
Order.Models.Refund::getRefundType()
{
	return refundType;
}

void
Order.Models.Refund::setRefundType(std::string  refundType)
{
	this->refundType = refundType;
}



