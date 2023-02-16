

#include "System.Nullable-ValidationConfiguration.h"

using namespace Tiny;

System.Nullable-ValidationConfiguration::System.Nullable-ValidationConfiguration()
{
	lazyLoadConfiguration = PageWidget.LazyLoadSetup.LazyLoadConfiguration();
	lazyLoadCollectionConfigurations = std::list<PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration>();
	widgetRestrictions = null<WidgetRestrictionSetup.WidgetRestrictionConfiguration>();
	containerRestrictions = ContainerRestrictionSetup.ContainerRestrictionConfiguration();
}

System.Nullable-ValidationConfiguration::System.Nullable-ValidationConfiguration(std::string jsonString)
{
	this->fromJson(jsonString);
}

System.Nullable-ValidationConfiguration::~System.Nullable-ValidationConfiguration()
{

}

void
System.Nullable-ValidationConfiguration::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *lazyLoadConfigurationKey = "LazyLoadConfiguration";

    if(object.has_key(lazyLoadConfigurationKey))
    {
        bourne::json value = object[lazyLoadConfigurationKey];




        PageWidget.LazyLoadSetup.LazyLoadConfiguration* obj = &lazyLoadConfiguration;
		obj->fromJson(value.dump());

    }

    const char *lazyLoadCollectionConfigurationsKey = "LazyLoadCollectionConfigurations";

    if(object.has_key(lazyLoadCollectionConfigurationsKey))
    {
        bourne::json value = object[lazyLoadCollectionConfigurationsKey];


        std::list<PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration> lazyLoadCollectionConfigurations_list;
        PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            lazyLoadCollectionConfigurations_list.push_back(element);
        }
        lazyLoadCollectionConfigurations = lazyLoadCollectionConfigurations_list;


    }

    const char *widgetRestrictionsKey = "WidgetRestrictions";

    if(object.has_key(widgetRestrictionsKey))
    {
        bourne::json value = object[widgetRestrictionsKey];


    }

    const char *containerRestrictionsKey = "ContainerRestrictions";

    if(object.has_key(containerRestrictionsKey))
    {
        bourne::json value = object[containerRestrictionsKey];




        ContainerRestrictionSetup.ContainerRestrictionConfiguration* obj = &containerRestrictions;
		obj->fromJson(value.dump());

    }


}

bourne::json
System.Nullable-ValidationConfiguration::toJson()
{
    bourne::json object = bourne::json::object();






	object["lazyLoadConfiguration"] = getLazyLoadConfiguration().toJson();




    std::list<PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration> lazyLoadCollectionConfigurations_list = getLazyLoadCollectionConfigurations();
    bourne::json lazyLoadCollectionConfigurations_arr = bourne::json::array();

    for(auto& var : lazyLoadCollectionConfigurations_list)
    {
        PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration obj = var;
        lazyLoadCollectionConfigurations_arr.append(obj.toJson());
    }
    object["lazyLoadCollectionConfigurations"] = lazyLoadCollectionConfigurations_arr;











	object["containerRestrictions"] = getContainerRestrictions().toJson();


    return object;

}

PageWidget.LazyLoadSetup.LazyLoadConfiguration
System.Nullable-ValidationConfiguration::getLazyLoadConfiguration()
{
	return lazyLoadConfiguration;
}

void
System.Nullable-ValidationConfiguration::setLazyLoadConfiguration(PageWidget.LazyLoadSetup.LazyLoadConfiguration  lazyLoadConfiguration)
{
	this->lazyLoadConfiguration = lazyLoadConfiguration;
}

std::list<PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration>
System.Nullable-ValidationConfiguration::getLazyLoadCollectionConfigurations()
{
	return lazyLoadCollectionConfigurations;
}

void
System.Nullable-ValidationConfiguration::setLazyLoadCollectionConfigurations(std::list <PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration> lazyLoadCollectionConfigurations)
{
	this->lazyLoadCollectionConfigurations = lazyLoadCollectionConfigurations;
}

Map<string, string>
System.Nullable-ValidationConfiguration::getWidgetRestrictions()
{
	return widgetRestrictions;
}

void
System.Nullable-ValidationConfiguration::setWidgetRestrictions(Map <string, string> widgetRestrictions)
{
	this->widgetRestrictions = widgetRestrictions;
}

ContainerRestrictionSetup.ContainerRestrictionConfiguration
System.Nullable-ValidationConfiguration::getContainerRestrictions()
{
	return containerRestrictions;
}

void
System.Nullable-ValidationConfiguration::setContainerRestrictions(ContainerRestrictionSetup.ContainerRestrictionConfiguration  containerRestrictions)
{
	this->containerRestrictions = containerRestrictions;
}



