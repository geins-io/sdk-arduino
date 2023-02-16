
/*
 * ProductParameter.Models.Write.ProductParameterGroup.h
 *
 * A product parameter group to create or update.
 */

#ifndef TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterGroup_H_
#define TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterGroup_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shared.Models.LocalizableContent.h"
#include <list>

namespace Tiny {


/*! \brief A product parameter group to create or update.
 *
 *  \ingroup Models
 *
 */

class ProductParameter.Models.Write.ProductParameterGroup{
public:

    /*! \brief Constructor.
	 */
    ProductParameter.Models.Write.ProductParameterGroup();
    ProductParameter.Models.Write.ProductParameterGroup(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ProductParameter.Models.Write.ProductParameterGroup();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The non-localized name of the group.
	 */
	std::string getName();

	/*! \brief Set The non-localized name of the group.
	 */
	void setName(std::string  name);
	/*! \brief Get The localized names of the group.
	 */
	std::list<Shared.Models.LocalizableContent> getLocalizedNames();

	/*! \brief Set The localized names of the group.
	 */
	void setLocalizedNames(std::list <Shared.Models.LocalizableContent> localizedNames);
	/*! \brief Get The ids of the parameters belonging to this group.
	 */
	std::list<int> getParameterIds();

	/*! \brief Set The ids of the parameters belonging to this group.
	 */
	void setParameterIds(std::list <int> parameterIds);


    private:
    std::string name{};
    std::list<Shared.Models.LocalizableContent> localizedNames;
    std::list<int> parameterIds;
};
}

#endif /* TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterGroup_H_ */
