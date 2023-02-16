
/*
 * PageWidget.LazyLoadSetup.LazyLoadConfiguration.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PageWidget.LazyLoadSetup.LazyLoadConfiguration_H_
#define TINY_CPP_CLIENT_PageWidget.LazyLoadSetup.LazyLoadConfiguration_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PageWidget.LazyLoadSetup.LazyLoadConfiguration{
public:

    /*! \brief Constructor.
	 */
    PageWidget.LazyLoadSetup.LazyLoadConfiguration();
    PageWidget.LazyLoadSetup.LazyLoadConfiguration(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PageWidget.LazyLoadSetup.LazyLoadConfiguration();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isEnableLazyloadMobile();

	/*! \brief Set 
	 */
	void setEnableLazyloadMobile(bool  enableLazyloadMobile);
	/*! \brief Get 
	 */
	int getEagerLoadStepsMobile();

	/*! \brief Set 
	 */
	void setEagerLoadStepsMobile(int  eagerLoadStepsMobile);
	/*! \brief Get 
	 */
	bool isEnableLazyloadDesktop();

	/*! \brief Set 
	 */
	void setEnableLazyloadDesktop(bool  enableLazyloadDesktop);
	/*! \brief Get 
	 */
	int getEagerLoadStepsDesktop();

	/*! \brief Set 
	 */
	void setEagerLoadStepsDesktop(int  eagerLoadStepsDesktop);


    private:
    bool enableLazyloadMobile{};
    int eagerLoadStepsMobile{};
    bool enableLazyloadDesktop{};
    int eagerLoadStepsDesktop{};
};
}

#endif /* TINY_CPP_CLIENT_PageWidget.LazyLoadSetup.LazyLoadConfiguration_H_ */
