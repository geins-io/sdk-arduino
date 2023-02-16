

#include "PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration.h"

using namespace Tiny;

PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration()
{
	collectionName = std::string();
	enableLazyloadMobile = bool(false);
	eagerLoadStepsMobile = int(0);
	enableLazyloadDesktop = bool(false);
	eagerLoadStepsDesktop = int(0);
}

PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::~PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration()
{

}

void
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *collectionNameKey = "CollectionName";

    if(object.has_key(collectionNameKey))
    {
        bourne::json value = object[collectionNameKey];



        jsonToValue(&collectionName, value, "std::string");


    }

    const char *enableLazyloadMobileKey = "EnableLazyloadMobile";

    if(object.has_key(enableLazyloadMobileKey))
    {
        bourne::json value = object[enableLazyloadMobileKey];



        jsonToValue(&enableLazyloadMobile, value, "bool");


    }

    const char *eagerLoadStepsMobileKey = "EagerLoadStepsMobile";

    if(object.has_key(eagerLoadStepsMobileKey))
    {
        bourne::json value = object[eagerLoadStepsMobileKey];



        jsonToValue(&eagerLoadStepsMobile, value, "int");


    }

    const char *enableLazyloadDesktopKey = "EnableLazyloadDesktop";

    if(object.has_key(enableLazyloadDesktopKey))
    {
        bourne::json value = object[enableLazyloadDesktopKey];



        jsonToValue(&enableLazyloadDesktop, value, "bool");


    }

    const char *eagerLoadStepsDesktopKey = "EagerLoadStepsDesktop";

    if(object.has_key(eagerLoadStepsDesktopKey))
    {
        bourne::json value = object[eagerLoadStepsDesktopKey];



        jsonToValue(&eagerLoadStepsDesktop, value, "int");


    }


}

bourne::json
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::toJson()
{
    bourne::json object = bourne::json::object();





    object["collectionName"] = getCollectionName();






    object["enableLazyloadMobile"] = isEnableLazyloadMobile();






    object["eagerLoadStepsMobile"] = getEagerLoadStepsMobile();






    object["enableLazyloadDesktop"] = isEnableLazyloadDesktop();






    object["eagerLoadStepsDesktop"] = getEagerLoadStepsDesktop();



    return object;

}

std::string
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::getCollectionName()
{
	return collectionName;
}

void
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::setCollectionName(std::string  collectionName)
{
	this->collectionName = collectionName;
}

bool
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::isEnableLazyloadMobile()
{
	return enableLazyloadMobile;
}

void
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::setEnableLazyloadMobile(bool  enableLazyloadMobile)
{
	this->enableLazyloadMobile = enableLazyloadMobile;
}

int
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::getEagerLoadStepsMobile()
{
	return eagerLoadStepsMobile;
}

void
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::setEagerLoadStepsMobile(int  eagerLoadStepsMobile)
{
	this->eagerLoadStepsMobile = eagerLoadStepsMobile;
}

bool
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::isEnableLazyloadDesktop()
{
	return enableLazyloadDesktop;
}

void
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::setEnableLazyloadDesktop(bool  enableLazyloadDesktop)
{
	this->enableLazyloadDesktop = enableLazyloadDesktop;
}

int
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::getEagerLoadStepsDesktop()
{
	return eagerLoadStepsDesktop;
}

void
PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration::setEagerLoadStepsDesktop(int  eagerLoadStepsDesktop)
{
	this->eagerLoadStepsDesktop = eagerLoadStepsDesktop;
}



