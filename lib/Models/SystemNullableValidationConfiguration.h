
/*
 * System.Nullable-ValidationConfiguration.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_System.Nullable-ValidationConfiguration_H_
#define TINY_CPP_CLIENT_System.Nullable-ValidationConfiguration_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ContainerRestrictionSetup.ContainerRestrictionConfiguration.h"
#include "PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration.h"
#include "PageWidget.LazyLoadSetup.LazyLoadConfiguration.h"
#include "WidgetRestrictionSetup.WidgetRestrictionConfiguration.h"
#include <list>
#include <map>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class System.Nullable-ValidationConfiguration{
public:

    /*! \brief Constructor.
	 */
    System.Nullable-ValidationConfiguration();
    System.Nullable-ValidationConfiguration(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~System.Nullable-ValidationConfiguration();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	PageWidget.LazyLoadSetup.LazyLoadConfiguration getLazyLoadConfiguration();

	/*! \brief Set 
	 */
	void setLazyLoadConfiguration(PageWidget.LazyLoadSetup.LazyLoadConfiguration  lazyLoadConfiguration);
	/*! \brief Get 
	 */
	std::list<PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration> getLazyLoadCollectionConfigurations();

	/*! \brief Set 
	 */
	void setLazyLoadCollectionConfigurations(std::list <PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration> lazyLoadCollectionConfigurations);
	/*! \brief Get 
	 */
	Map<std::string, std::string> getWidgetRestrictions();

	/*! \brief Set 
	 */
	void setWidgetRestrictions(Map <std::string, std::string> widgetRestrictions);
	/*! \brief Get 
	 */
	ContainerRestrictionSetup.ContainerRestrictionConfiguration getContainerRestrictions();

	/*! \brief Set 
	 */
	void setContainerRestrictions(ContainerRestrictionSetup.ContainerRestrictionConfiguration  containerRestrictions);


    private:
    PageWidget.LazyLoadSetup.LazyLoadConfiguration lazyLoadConfiguration;
    std::list<PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration> lazyLoadCollectionConfigurations;
    Map<std::string, std::string> widgetRestrictions;
    ContainerRestrictionSetup.ContainerRestrictionConfiguration containerRestrictions;
};
}

#endif /* TINY_CPP_CLIENT_System.Nullable-ValidationConfiguration_H_ */
