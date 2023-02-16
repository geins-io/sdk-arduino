
/*
 * ProductParameter.Models.Read.ProductParameterPredefinedValue.h
 *
 * A predefined value for a product parameter.
 */

#ifndef TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterPredefinedValue_H_
#define TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterPredefinedValue_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shared.Models.LocalizableContent.h"
#include <list>

namespace Tiny {


/*! \brief A predefined value for a product parameter.
 *
 *  \ingroup Models
 *
 */

class ProductParameter.Models.Read.ProductParameterPredefinedValue{
public:

    /*! \brief Constructor.
	 */
    ProductParameter.Models.Read.ProductParameterPredefinedValue();
    ProductParameter.Models.Read.ProductParameterPredefinedValue(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ProductParameter.Models.Read.ProductParameterPredefinedValue();


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
	/*! \brief Get The predefined value id of the parameter.
	 */
	int getPredefinedValueId();

	/*! \brief Set The predefined value id of the parameter.
	 */
	void setPredefinedValueId(int  predefinedValueId);
	/*! \brief Get The non-localized predefined value name of the parameter.
	 */
	std::string getName();

	/*! \brief Set The non-localized predefined value name of the parameter.
	 */
	void setName(std::string  name);
	/*! \brief Get The localized predefined value names of the parameter.
	 */
	std::list<Shared.Models.LocalizableContent> getLocalizedNames();

	/*! \brief Set The localized predefined value names of the parameter.
	 */
	void setLocalizedNames(std::list <Shared.Models.LocalizableContent> localizedNames);


    private:
    int parameterId{};
    int predefinedValueId{};
    std::string name{};
    std::list<Shared.Models.LocalizableContent> localizedNames;
};
}

#endif /* TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameterPredefinedValue_H_ */
