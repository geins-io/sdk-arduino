
/*
 * ProductParameter.Models.Write.ProductParameter.h
 *
 * A product parameter to create or update.
 */

#ifndef TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameter_H_
#define TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameter_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shared.Models.LocalizableContent.h"
#include <list>

namespace Tiny {


/*! \brief A product parameter to create or update.
 *
 *  \ingroup Models
 *
 */

class ProductParameter.Models.Write.ProductParameter{
public:

    /*! \brief Constructor.
	 */
    ProductParameter.Models.Write.ProductParameter();
    ProductParameter.Models.Write.ProductParameter(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ProductParameter.Models.Write.ProductParameter();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier for the parameter.
	 */
	int getParameterId();

	/*! \brief Set The unique identifier for the parameter.
	 */
	void setParameterId(int  parameterId);
	/*! \brief Get The unique identifier of the group that this parameter belongs to.
	 */
	int getGroupId();

	/*! \brief Set The unique identifier of the group that this parameter belongs to.
	 */
	void setGroupId(int  groupId);
	/*! \brief Get The type of parameter.
	 */
	int getParameterType();

	/*! \brief Set The type of parameter.
	 */
	void setParameterType(int  parameterType);
	/*! \brief Get The non-localized name of the parameter.
	 */
	std::string getName();

	/*! \brief Set The non-localized name of the parameter.
	 */
	void setName(std::string  name);
	/*! \brief Get The localized names of the parameter.
	 */
	std::list<Shared.Models.LocalizableContent> getLocalizedNames();

	/*! \brief Set The localized names of the parameter.
	 */
	void setLocalizedNames(std::list <Shared.Models.LocalizableContent> localizedNames);


    private:
    int parameterId{};
    int groupId{};
    int parameterType{};
    std::string name{};
    std::list<Shared.Models.LocalizableContent> localizedNames;
};
}

#endif /* TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameter_H_ */
