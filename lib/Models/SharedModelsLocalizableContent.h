
/*
 * Shared.Models.LocalizableContent.h
 *
 * A piece of localized content.
 */

#ifndef TINY_CPP_CLIENT_Shared.Models.LocalizableContent_H_
#define TINY_CPP_CLIENT_Shared.Models.LocalizableContent_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A piece of localized content.
 *
 *  \ingroup Models
 *
 */

class Shared.Models.LocalizableContent{
public:

    /*! \brief Constructor.
	 */
    Shared.Models.LocalizableContent();
    Shared.Models.LocalizableContent(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Shared.Models.LocalizableContent();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The 2-letter ISO 639-1 language code for this locale.
	 */
	std::string getLanguageCode();

	/*! \brief Set The 2-letter ISO 639-1 language code for this locale.
	 */
	void setLanguageCode(std::string  languageCode);
	/*! \brief Get The localized content.
	 */
	std::string getContent();

	/*! \brief Set The localized content.
	 */
	void setContent(std::string  content);


    private:
    std::string languageCode{};
    std::string content{};
};
}

#endif /* TINY_CPP_CLIENT_Shared.Models.LocalizableContent_H_ */
