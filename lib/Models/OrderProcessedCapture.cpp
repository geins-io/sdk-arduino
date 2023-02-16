

#include "Order.ProcessedCapture.h"

using namespace Tiny;

Order.ProcessedCapture::Order.ProcessedCapture()
{
	captureId = std::string();
	externalId = std::string();
	reference = std::string();
	processedOn = std::string();
}

Order.ProcessedCapture::Order.ProcessedCapture(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.ProcessedCapture::~Order.ProcessedCapture()
{

}

void
Order.ProcessedCapture::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *captureIdKey = "CaptureId";

    if(object.has_key(captureIdKey))
    {
        bourne::json value = object[captureIdKey];



        jsonToValue(&captureId, value, "std::string");


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
Order.ProcessedCapture::toJson()
{
    bourne::json object = bourne::json::object();





    object["captureId"] = getCaptureId();






    object["externalId"] = getExternalId();






    object["reference"] = getReference();






    object["processedOn"] = getProcessedOn();



    return object;

}

std::string
Order.ProcessedCapture::getCaptureId()
{
	return captureId;
}

void
Order.ProcessedCapture::setCaptureId(std::string  captureId)
{
	this->captureId = captureId;
}

std::string
Order.ProcessedCapture::getExternalId()
{
	return externalId;
}

void
Order.ProcessedCapture::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Order.ProcessedCapture::getReference()
{
	return reference;
}

void
Order.ProcessedCapture::setReference(std::string  reference)
{
	this->reference = reference;
}

std::string
Order.ProcessedCapture::getProcessedOn()
{
	return processedOn;
}

void
Order.ProcessedCapture::setProcessedOn(std::string  processedOn)
{
	this->processedOn = processedOn;
}



