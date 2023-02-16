
/*
 * Supplier.Models.SupplierQuery.h
 *
 * A supplier query.
 */

#ifndef TINY_CPP_CLIENT_Supplier.Models.SupplierQuery_H_
#define TINY_CPP_CLIENT_Supplier.Models.SupplierQuery_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief A supplier query.
 *
 *  \ingroup Models
 *
 */

class Supplier.Models.SupplierQuery{
public:

    /*! \brief Constructor.
	 */
    Supplier.Models.SupplierQuery();
    Supplier.Models.SupplierQuery(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Supplier.Models.SupplierQuery();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Limits query to suppliers with a name containing the specified string.
	 */
	std::string getNameContains();

	/*! \brief Set Limits query to suppliers with a name containing the specified string.
	 */
	void setNameContains(std::string  nameContains);
	/*! \brief Get Limits query to externalIds
	 */
	std::list<std::string> getExternalIds();

	/*! \brief Set Limits query to externalIds
	 */
	void setExternalIds(std::list <std::string> externalIds);


    private:
    std::string nameContains{};
    std::list<std::string> externalIds;
};
}

#endif /* TINY_CPP_CLIENT_Supplier.Models.SupplierQuery_H_ */
