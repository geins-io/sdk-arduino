
/*
 * ProductParameter.Models.Read.ProductParameterValue.h
 *
 * A parameter value for a product.
 */

#ifndef TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterValue_H_
#define TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterValue_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shared.Models.LocalizableContent.h"
#include <list>

namespace Tiny {


/*! \brief A parameter value for a product.
 *
 *  \ingroup Models
 *
 */

class ProductParameter.Models.Read.ProductParameterValue{
public:

    /*! \brief Constructor.
	 */
    ProductParameter.Models.Read.ProductParameterValue();
    ProductParameter.Models.Read.ProductParameterValue(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ProductParameter.Models.Read.ProductParameterValue();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier of this parameter value.
	 */
	int getParameterValueId();

	/*! \brief Set The unique identifier of this parameter value.
	 */
	void setParameterValueId(int  parameterValueId);
	/*! \brief Get The product id of the parameter.
	 */
	int getProductId();

	/*! \brief Set The product id of the parameter.
	 */
	void setProductId(int  productId);
	/*! \brief Get The unique identifier of the parameter that this value belongs to.
	 */
	int getParameterId();

	/*! \brief Set The unique identifier of the parameter that this value belongs to.
	 */
	void setParameterId(int  parameterId);
	/*! \brief Get The non-localized name of the parameter.
	 */
	std::string getParameterName();

	/*! \brief Set The non-localized name of the parameter.
	 */
	void setParameterName(std::string  parameterName);
	/*! \brief Get The unique identifier of the group that this parameter belongs to.
	 */
	int getGroupId();

	/*! \brief Set The unique identifier of the group that this parameter belongs to.
	 */
	void setGroupId(int  groupId);
	/*! \brief Get The name of the group that this parameter belongs to.
	 */
	std::string getGroupName();

	/*! \brief Set The name of the group that this parameter belongs to.
	 */
	void setGroupName(std::string  groupName);
	/*! \brief Get The type of parameter.
	 */
	int getParameterType();

	/*! \brief Set The type of parameter.
	 */
	void setParameterType(int  parameterType);
	/*! \brief Get The identifying value of the parameter.
	 */
	std::string getValue();

	/*! \brief Set The identifying value of the parameter.
	 */
	void setValue(std::string  value);
	/*! \brief Get The non-localized description of the parameter.
	 */
	std::string getDescription();

	/*! \brief Set The non-localized description of the parameter.
	 */
	void setDescription(std::string  description);
	/*! \brief Get The localized descriptions of the parameter.
	 */
	std::list<Shared.Models.LocalizableContent> getLocalizedDescriptions();

	/*! \brief Set The localized descriptions of the parameter.
	 */
	void setLocalizedDescriptions(std::list <Shared.Models.LocalizableContent> localizedDescriptions);
	/*! \brief Get The internal identifier of the parameter.
	 */
	std::string getInternalIdentifier();

	/*! \brief Set The internal identifier of the parameter.
	 */
	void setInternalIdentifier(std::string  internalIdentifier);


    private:
    int parameterValueId{};
    int productId{};
    int parameterId{};
    std::string parameterName{};
    int groupId{};
    std::string groupName{};
    int parameterType{};
    std::string value{};
    std::string description{};
    std::list<Shared.Models.LocalizableContent> localizedDescriptions;
    std::string internalIdentifier{};
};
}

#endif /* TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterValue_H_ */
