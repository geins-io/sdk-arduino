

#include "PageWidget.LazyLoadSetup.LazyLoadConfiguration.h"

using namespace Tiny;

PageWidget.LazyLoadSetup.LazyLoadConfiguration::PageWidget.LazyLoadSetup.LazyLoadConfiguration()
{
	enableLazyloadMobile = bool(false);
	eagerLoadStepsMobile = int(0);
	enableLazyloadDesktop = bool(false);
	eagerLoadStepsDesktop = int(0);
}

PageWidget.LazyLoadSetup.LazyLoadConfiguration::PageWidget.LazyLoadSetup.LazyLoadConfiguration(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageWidget.LazyLoadSetup.LazyLoadConfiguration::~PageWidget.LazyLoadSetup.LazyLoadConfiguration()
{

}

void
PageWidget.LazyLoadSetup.LazyLoadConfiguration::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

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
PageWidget.LazyLoadSetup.LazyLoadConfiguration::toJson()
{
    bourne::json object = bourne::json::object();





    object["enableLazyloadMobile"] = isEnableLazyloadMobile();






    object["eagerLoadStepsMobile"] = getEagerLoadStepsMobile();






    object["enableLazyloadDesktop"] = isEnableLazyloadDesktop();






    object["eagerLoadStepsDesktop"] = getEagerLoadStepsDesktop();



    return object;

}

bool
PageWidget.LazyLoadSetup.LazyLoadConfiguration::isEnableLazyloadMobile()
{
	return enableLazyloadMobile;
}

void
PageWidget.LazyLoadSetup.LazyLoadConfiguration::setEnableLazyloadMobile(bool  enableLazyloadMobile)
{
	this->enableLazyloadMobile = enableLazyloadMobile;
}

int
PageWidget.LazyLoadSetup.LazyLoadConfiguration::getEagerLoadStepsMobile()
{
	return eagerLoadStepsMobile;
}

void
PageWidget.LazyLoadSetup.LazyLoadConfiguration::setEagerLoadStepsMobile(int  eagerLoadStepsMobile)
{
	this->eagerLoadStepsMobile = eagerLoadStepsMobile;
}

bool
PageWidget.LazyLoadSetup.LazyLoadConfiguration::isEnableLazyloadDesktop()
{
	return enableLazyloadDesktop;
}

void
PageWidget.LazyLoadSetup.LazyLoadConfiguration::setEnableLazyloadDesktop(bool  enableLazyloadDesktop)
{
	this->enableLazyloadDesktop = enableLazyloadDesktop;
}

int
PageWidget.LazyLoadSetup.LazyLoadConfiguration::getEagerLoadStepsDesktop()
{
	return eagerLoadStepsDesktop;
}

void
PageWidget.LazyLoadSetup.LazyLoadConfiguration::setEagerLoadStepsDesktop(int  eagerLoadStepsDesktop)
{
	this->eagerLoadStepsDesktop = eagerLoadStepsDesktop;
}



