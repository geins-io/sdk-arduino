

#include "Order.ProcessedRefund.h"

using namespace Tiny;

Order.ProcessedRefund::Order.ProcessedRefund()
{
	refundId = std::string();
	externalId = std::string();
	reference = std::string();
	processedOn = std::string();
}

Order.ProcessedRefund::Order.ProcessedRefund(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.ProcessedRefund::~Order.ProcessedRefund()
{

}

void
Order.ProcessedRefund::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *refundIdKey = "RefundId";

    if(object.has_key(refundIdKey))
    {
        bourne::json value = object[refundIdKey];



        jsonToValue(&refundId, value, "std::string");


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

    const char *processedOnKey = "ProcessedOn";

    if(object.has_key(processedOnKey))
    {
        bourne::json value = object[processedOnKey];



        jsonToValue(&processedOn, value, "std::string");


    }


}

bourne::json
Order.ProcessedRefund::toJson()
{
    bourne::json object = bourne::json::object();





    object["refundId"] = getRefundId();






    object["externalId"] = getExternalId();






    object["reference"] = getReference();






    object["processedOn"] = getProcessedOn();



    return object;

}

std::string
Order.ProcessedRefund::getRefundId()
{
	return refundId;
}

void
Order.ProcessedRefund::setRefundId(std::string  refundId)
{
	this->refundId = refundId;
}

std::string
Order.ProcessedRefund::getExternalId()
{
	return externalId;
}

void
Order.ProcessedRefund::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Order.ProcessedRefund::getReference()
{
	return reference;
}

void
Order.ProcessedRefund::setReference(std::string  reference)
{
	this->reference = reference;
}

std::string
Order.ProcessedRefund::getProcessedOn()
{
	return processedOn;
}

void
Order.ProcessedRefund::setProcessedOn(std::string  processedOn)
{
	this->processedOn = processedOn;
}



