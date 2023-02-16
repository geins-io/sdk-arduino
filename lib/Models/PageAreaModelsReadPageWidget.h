
/*
 * PageArea.Models.Read.PageWidget.h
 *
 * The API-representation of page widgets
 */

#ifndef TINY_CPP_CLIENT_PageArea.Models.Read.PageWidget_H_
#define TINY_CPP_CLIENT_PageArea.Models.Read.PageWidget_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief The API-representation of page widgets
 *
 *  \ingroup Models
 *
 */

class PageArea.Models.Read.PageWidget{
public:

    /*! \brief Constructor.
	 */
    PageArea.Models.Read.PageWidget();
    PageArea.Models.Read.PageWidget(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PageArea.Models.Read.PageWidget();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The IDs of widgets are immutable (determined by each view model implementation, in the namespace Carismar.Core)
	 */
	std::string getId();

	/*! \brief Set The IDs of widgets are immutable (determined by each view model implementation, in the namespace Carismar.Core)
	 */
	void setId(std::string  id);
	/*! \brief Get The static name of this widget. Used to translate into icons, or to append to css-classes.
	 */
	std::string getName();

	/*! \brief Set The static name of this widget. Used to translate into icons, or to append to css-classes.
	 */
	void setName(std::string  name);
	/*! \brief Get The name of the widget-type
	 */
	std::string getType();

	/*! \brief Set The name of the widget-type
	 */
	void setType(std::string  type);
	/*! \brief Get Decides if this {PageArea.Models.Read.PageWidget} is active or not
	 */
	bool isActive();

	/*! \brief Set Decides if this {PageArea.Models.Read.PageWidget} is active or not
	 */
	void setActive(bool  active);
	/*! \brief Get Holds all CSS Class names that this widget should render
	 */
	std::list<std::string> getClassNames();

	/*! \brief Set Holds all CSS Class names that this widget should render
	 */
	void setClassNames(std::list <std::string> classNames);
	/*! \brief Get The fractional size for this widget in it's container.
	 */
	std::string getSize();

	/*! \brief Set The fractional size for this widget in it's container.
	 */
	void setSize(std::string  size);
	/*! \brief Get The configuration for this {PageArea.Models.Read.PageWidget}
	 */
	std::string getConfiguration();

	/*! \brief Set The configuration for this {PageArea.Models.Read.PageWidget}
	 */
	void setConfiguration(std::string  configuration);


    private:
    std::string id{};
    std::string name{};
    std::string type{};
    bool active{};
    std::list<std::string> classNames;
    std::string size{};
    std::string configuration{};
};
}

#endif /* TINY_CPP_CLIENT_PageArea.Models.Read.PageWidget_H_ */
