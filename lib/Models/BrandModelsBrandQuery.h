
/*
 * Brand.Models.BrandQuery.h
 *
 * A brand query.
 */

#ifndef TINY_CPP_CLIENT_Brand.Models.BrandQuery_H_
#define TINY_CPP_CLIENT_Brand.Models.BrandQuery_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief A brand query.
 *
 *  \ingroup Models
 *
 */

class Brand.Models.BrandQuery{
public:

    /*! \brief Constructor.
	 */
    Brand.Models.BrandQuery();
    Brand.Models.BrandQuery(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Brand.Models.BrandQuery();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Limits query to brands created after the specified date.
	 */
	std::string getCreatedAfter();

	/*! \brief Set Limits query to brands created after the specified date.
	 */
	void setCreatedAfter(std::string  createdAfter);
	/*! \brief Get Limits query to only include the supplied brand ids.
	 */
	std::list<int> getBrandIds();

	/*! \brief Set Limits query to only include the supplied brand ids.
	 */
	void setBrandIds(std::list <int> brandIds);
	/*! \brief Get Limits query to externalIds
	 */
	std::list<std::string> getExternalIds();

	/*! \brief Set Limits query to externalIds
	 */
	void setExternalIds(std::list <std::string> externalIds);


    private:
    std::string createdAfter{};
    std::list<int> brandIds;
    std::list<std::string> externalIds;
};
}

#endif /* TINY_CPP_CLIENT_Brand.Models.BrandQuery_H_ */
