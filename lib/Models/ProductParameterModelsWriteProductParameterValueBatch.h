
/*
 * ProductParameter.Models.Write.ProductParameterValueBatch.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterValueBatch_H_
#define TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterValueBatch_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ProductParameter.Models.Write.ProductParameterValue.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ProductParameter.Models.Write.ProductParameterValueBatch{
public:

    /*! \brief Constructor.
	 */
    ProductParameter.Models.Write.ProductParameterValueBatch();
    ProductParameter.Models.Write.ProductParameterValueBatch(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ProductParameter.Models.Write.ProductParameterValueBatch();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::list<ProductParameter.Models.Write.ProductParameterValue> getProductParameterValues();

	/*! \brief Set 
	 */
	void setProductParameterValues(std::list <ProductParameter.Models.Write.ProductParameterValue> productParameterValues);


    private:
    std::list<ProductParameter.Models.Write.ProductParameterValue> productParameterValues;
};
}

#endif /* TINY_CPP_CLIENT_ProductParameter.Models.Write.ProductParameterValueBatch_H_ */
