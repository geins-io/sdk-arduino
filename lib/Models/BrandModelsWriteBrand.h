
/*
 * Brand.Models.Write.Brand.h
 *
 * A brand.
 */

#ifndef TINY_CPP_CLIENT_Brand.Models.Write.Brand_H_
#define TINY_CPP_CLIENT_Brand.Models.Write.Brand_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shared.Models.LocalizableContent.h"
#include <list>

namespace Tiny {


/*! \brief A brand.
 *
 *  \ingroup Models
 *
 */

class Brand.Models.Write.Brand{
public:

    /*! \brief Constructor.
	 */
    Brand.Models.Write.Brand();
    Brand.Models.Write.Brand(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Brand.Models.Write.Brand();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The name of this brand.
	 */
	std::string getName();

	/*! \brief Set The name of this brand.
	 */
	void setName(std::string  name);
	/*! \brief Get External Id of the brand.
	 */
	std::string getExternalId();

	/*! \brief Set External Id of the brand.
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get The localized descriptions of the brand.
	 */
	std::list<Shared.Models.LocalizableContent> getDescriptions();

	/*! \brief Set The localized descriptions of the brand.
	 */
	void setDescriptions(std::list <Shared.Models.LocalizableContent> descriptions);


    private:
    std::string name{};
    std::string externalId{};
    std::list<Shared.Models.LocalizableContent> descriptions;
};
}

#endif /* TINY_CPP_CLIENT_Brand.Models.Write.Brand_H_ */
