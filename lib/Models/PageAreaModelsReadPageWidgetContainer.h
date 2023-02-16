
/*
 * PageArea.Models.Read.PageWidgetContainer.h
 *
 * This class represents a collection of widgets, and defines how they should be layouted in the area they are rendered in.
 */

#ifndef TINY_CPP_CLIENT_PageArea.Models.Read.PageWidgetContainer_H_
#define TINY_CPP_CLIENT_PageArea.Models.Read.PageWidgetContainer_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PageArea.Models.Read.PageWidget.h"
#include <list>

namespace Tiny {


/*! \brief This class represents a collection of widgets, and defines how they should be layouted in the area they are rendered in.
 *
 *  \ingroup Models
 *
 */

class PageArea.Models.Read.PageWidgetContainer{
public:

    /*! \brief Constructor.
	 */
    PageArea.Models.Read.PageWidgetContainer();
    PageArea.Models.Read.PageWidgetContainer(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PageArea.Models.Read.PageWidgetContainer();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The primary ID of this container
	 */
	int getId();

	/*! \brief Set The primary ID of this container
	 */
	void setId(int  id);
	/*! \brief Get The descriptive user defined name of this container, which is used to distinguish this container in a container library
	 */
	std::string getName();

	/*! \brief Set The descriptive user defined name of this container, which is used to distinguish this container in a container library
	 */
	void setName(std::string  name);
	/*! \brief Get The CSS class names this container should use.
	 */
	std::list<std::string> getClassNames();

	/*! \brief Set The CSS class names this container should use.
	 */
	void setClassNames(std::list <std::string> classNames);
	/*! \brief Get 
	 */
	bool isActive();

	/*! \brief Set 
	 */
	void setActive(bool  active);
	/*! \brief Get 
	 */
	std::string getLayout();

	/*! \brief Set 
	 */
	void setLayout(std::string  layout);
	/*! \brief Get 
	 */
	std::string getResponsiveMode();

	/*! \brief Set 
	 */
	void setResponsiveMode(std::string  responsiveMode);
	/*! \brief Get 
	 */
	std::string getVisibility();

	/*! \brief Set 
	 */
	void setVisibility(std::string  visibility);
	/*! \brief Get 
	 */
	std::string getDesign();

	/*! \brief Set 
	 */
	void setDesign(std::string  design);
	/*! \brief Get The configured widgets held by this container
	 */
	std::list<PageArea.Models.Read.PageWidget> getWidgets();

	/*! \brief Set The configured widgets held by this container
	 */
	void setWidgets(std::list <PageArea.Models.Read.PageWidget> widgets);


    private:
    int id{};
    std::string name{};
    std::list<std::string> classNames;
    bool active{};
    std::string layout{};
    std::string responsiveMode{};
    std::string visibility{};
    std::string design{};
    std::list<PageArea.Models.Read.PageWidget> widgets;
};
}

#endif /* TINY_CPP_CLIENT_PageArea.Models.Read.PageWidgetContainer_H_ */
