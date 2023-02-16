
/*
 * ProductParameter.Models.Read.ProductParameterGroup.h
 *
 * An existing product parameter group.
 */

#ifndef TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterGroup_H_
#define TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterGroup_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shared.Models.LocalizableContent.h"
#include <list>

namespace Tiny {


/*! \brief An existing product parameter group.
 *
 *  \ingroup Models
 *
 */

class ProductParameter.Models.Read.ProductParameterGroup{
public:

    /*! \brief Constructor.
	 */
    ProductParameter.Models.Read.ProductParameterGroup();
    ProductParameter.Models.Read.ProductParameterGroup(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ProductParameter.Models.Read.ProductParameterGroup();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier for the groups.
	 */
	int getGroupId();

	/*! \brief Set The unique identifier for the groups.
	 */
	void setGroupId(int  groupId);
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
    int groupId{};
    std::string name{};
    std::list<Shared.Models.LocalizableContent> localizedNames;
    std::list<int> parameterIds;
};
}

#endif /* TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterGroup_H_ */
