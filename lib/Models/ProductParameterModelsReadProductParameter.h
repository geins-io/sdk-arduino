
/*
 * ProductParameter.Models.Read.ProductParameter.h
 *
 * An existing product parameter.
 */

#ifndef TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameter_H_
#define TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameter_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An existing product parameter.
 *
 *  \ingroup Models
 *
 */

class ProductParameter.Models.Read.ProductParameter{
public:

    /*! \brief Constructor.
	 */
    ProductParameter.Models.Read.ProductParameter();
    ProductParameter.Models.Read.ProductParameter(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ProductParameter.Models.Read.ProductParameter();


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
	/*! \brief Get The non-localized name of the parameter.
	 */
	std::string getName();

	/*! \brief Set The non-localized name of the parameter.
	 */
	void setName(std::string  name);


    private:
    int parameterId{};
    int groupId{};
    std::string groupName{};
    int parameterType{};
    std::string name{};
};
}

#endif /* TINY_CPP_CLIENT_ProductParameter.Models.Read.ProductParameter_H_ */
