
/*
 * ProductParameter.Models.Write.ProductParameterValue.h
 *
 * A parameter value for a product.
 */

#ifndef TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterValue_H_
#define TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterValue_H_


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

class ProductParameter.Models.Write.ProductParameterValue{
public:

    /*! \brief Constructor.
	 */
    ProductParameter.Models.Write.ProductParameterValue();
    ProductParameter.Models.Write.ProductParameterValue(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ProductParameter.Models.Write.ProductParameterValue();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

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
	/*! \brief Get The identifying value of the parameter.
	 */
	std::string getValue();

	/*! \brief Set The identifying value of the parameter.
	 */
	void setValue(std::string  value);
	/*! \brief Get The localized descriptions of the parameter.
	 */
	std::list<Shared.Models.LocalizableContent> getLocalizedDescriptions();

	/*! \brief Set The localized descriptions of the parameter.
	 */
	void setLocalizedDescriptions(std::list <Shared.Models.LocalizableContent> localizedDescriptions);


    private:
    int productId{};
    int parameterId{};
    std::string value{};
    std::list<Shared.Models.LocalizableContent> localizedDescriptions;
};
}

#endif /* TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterValue_H_ */
