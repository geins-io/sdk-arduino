

#include "Product.Models.Write.Product.h"

using namespace Tiny;

Product.Models.Write.Product::Product.Models.Write.Product()
{
	articleNumber = std::string();
	names = std::list<Shared.Models.LocalizableContent>();
	active = bool(false);
	purchasePrice = float(0);
	purchasePriceCurrency = std::string();
	shortTexts = std::list<Shared.Models.LocalizableContent>();
	longTexts = std::list<Shared.Models.LocalizableContent>();
	techTexts = std::list<Shared.Models.LocalizableContent>();
	brandId = int(0);
	supplierId = int(0);
	items = std::list<Product.Models.Write.ProductItem>();
	categoryIds = std::list<int>();
	parameterValues = std::list<ProductParameter.Models.Write.ProductParameterValue>();
	variants = std::list<Variant.Models.Write.Variant>();
	markets = std::list<Market.Models.Market>();
	freightClassId = int(0);
	intrastatCode = std::string();
	countryOfOrigin = std::string();
	variantGroupId = int(0);
	vat = int(0);
	vatType = std::string();
	externalId = std::string();
	activationDate = std::string();
}

Product.Models.Write.Product::Product.Models.Write.Product(std::string jsonString)
{
	this->fromJson(jsonString);
}

Product.Models.Write.Product::~Product.Models.Write.Product()
{

}

void
Product.Models.Write.Product::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *articleNumberKey = "ArticleNumber";

    if(object.has_key(articleNumberKey))
    {
        bourne::json value = object[articleNumberKey];



        jsonToValue(&articleNumber, value, "std::string");


    }

    const char *namesKey = "Names";

    if(object.has_key(namesKey))
    {
        bourne::json value = object[namesKey];


        std::list<Shared.Models.LocalizableContent> names_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            names_list.push_back(element);
        }
        names = names_list;


    }

    const char *activeKey = "Active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "bool");


    }

    const char *purchasePriceKey = "PurchasePrice";

    if(object.has_key(purchasePriceKey))
    {
        bourne::json value = object[purchasePriceKey];



        jsonToValue(&purchasePrice, value, "double");


    }

    const char *purchasePriceCurrencyKey = "PurchasePriceCurrency";

    if(object.has_key(purchasePriceCurrencyKey))
    {
        bourne::json value = object[purchasePriceCurrencyKey];



        jsonToValue(&purchasePriceCurrency, value, "std::string");


    }

    const char *shortTextsKey = "ShortTexts";

    if(object.has_key(shortTextsKey))
    {
        bourne::json value = object[shortTextsKey];


        std::list<Shared.Models.LocalizableContent> shortTexts_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            shortTexts_list.push_back(element);
        }
        shortTexts = shortTexts_list;


    }

    const char *longTextsKey = "LongTexts";

    if(object.has_key(longTextsKey))
    {
        bourne::json value = object[longTextsKey];


        std::list<Shared.Models.LocalizableContent> longTexts_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            longTexts_list.push_back(element);
        }
        longTexts = longTexts_list;


    }

    const char *techTextsKey = "TechTexts";

    if(object.has_key(techTextsKey))
    {
        bourne::json value = object[techTextsKey];


        std::list<Shared.Models.LocalizableContent> techTexts_list;
        Shared.Models.LocalizableContent element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            techTexts_list.push_back(element);
        }
        techTexts = techTexts_list;


    }

    const char *brandIdKey = "BrandId";

    if(object.has_key(brandIdKey))
    {
        bourne::json value = object[brandIdKey];



        jsonToValue(&brandId, value, "int");


    }

    const char *supplierIdKey = "SupplierId";

    if(object.has_key(supplierIdKey))
    {
        bourne::json value = object[supplierIdKey];



        jsonToValue(&supplierId, value, "int");


    }

    const char *itemsKey = "Items";

    if(object.has_key(itemsKey))
    {
        bourne::json value = object[itemsKey];


        std::list<Product.Models.Write.ProductItem> items_list;
        Product.Models.Write.ProductItem element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            items_list.push_back(element);
        }
        items = items_list;


    }

    const char *categoryIdsKey = "CategoryIds";

    if(object.has_key(categoryIdsKey))
    {
        bourne::json value = object[categoryIdsKey];


        std::list<int> categoryIds_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            categoryIds_list.push_back(element);
        }
        categoryIds = categoryIds_list;


    }

    const char *parameterValuesKey = "ParameterValues";

    if(object.has_key(parameterValuesKey))
    {
        bourne::json value = object[parameterValuesKey];


        std::list<ProductParameter.Models.Write.ProductParameterValue> parameterValues_list;
        ProductParameter.Models.Write.ProductParameterValue element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            parameterValues_list.push_back(element);
        }
        parameterValues = parameterValues_list;


    }

    const char *variantsKey = "Variants";

    if(object.has_key(variantsKey))
    {
        bourne::json value = object[variantsKey];


        std::list<Variant.Models.Write.Variant> variants_list;
        Variant.Models.Write.Variant element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            variants_list.push_back(element);
        }
        variants = variants_list;


    }

    const char *marketsKey = "Markets";

    if(object.has_key(marketsKey))
    {
        bourne::json value = object[marketsKey];


        std::list<Market.Models.Market> markets_list;
        Market.Models.Market element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            markets_list.push_back(element);
        }
        markets = markets_list;


    }

    const char *freightClassIdKey = "FreightClassId";

    if(object.has_key(freightClassIdKey))
    {
        bourne::json value = object[freightClassIdKey];



        jsonToValue(&freightClassId, value, "int");


    }

    const char *intrastatCodeKey = "IntrastatCode";

    if(object.has_key(intrastatCodeKey))
    {
        bourne::json value = object[intrastatCodeKey];



        jsonToValue(&intrastatCode, value, "std::string");


    }

    const char *countryOfOriginKey = "CountryOfOrigin";

    if(object.has_key(countryOfOriginKey))
    {
        bourne::json value = object[countryOfOriginKey];



        jsonToValue(&countryOfOrigin, value, "std::string");


    }

    const char *variantGroupIdKey = "VariantGroupId";

    if(object.has_key(variantGroupIdKey))
    {
        bourne::json value = object[variantGroupIdKey];



        jsonToValue(&variantGroupId, value, "int");


    }

    const char *vatKey = "Vat";

    if(object.has_key(vatKey))
    {
        bourne::json value = object[vatKey];



        jsonToValue(&vat, value, "int");


    }

    const char *vatTypeKey = "VatType";

    if(object.has_key(vatTypeKey))
    {
        bourne::json value = object[vatTypeKey];



        jsonToValue(&vatType, value, "std::string");


    }

    const char *externalIdKey = "ExternalId";

    if(object.has_key(externalIdKey))
    {
        bourne::json value = object[externalIdKey];



        jsonToValue(&externalId, value, "std::string");


    }

    const char *activationDateKey = "ActivationDate";

    if(object.has_key(activationDateKey))
    {
        bourne::json value = object[activationDateKey];



        jsonToValue(&activationDate, value, "std::string");


    }


}

bourne::json
Product.Models.Write.Product::toJson()
{
    bourne::json object = bourne::json::object();





    object["articleNumber"] = getArticleNumber();





    std::list<Shared.Models.LocalizableContent> names_list = getNames();
    bourne::json names_arr = bourne::json::array();

    for(auto& var : names_list)
    {
        Shared.Models.LocalizableContent obj = var;
        names_arr.append(obj.toJson());
    }
    object["names"] = names_arr;







    object["active"] = isActive();






    object["purchasePrice"] = getPurchasePrice();






    object["purchasePriceCurrency"] = getPurchasePriceCurrency();





    std::list<Shared.Models.LocalizableContent> shortTexts_list = getShortTexts();
    bourne::json shortTexts_arr = bourne::json::array();

    for(auto& var : shortTexts_list)
    {
        Shared.Models.LocalizableContent obj = var;
        shortTexts_arr.append(obj.toJson());
    }
    object["shortTexts"] = shortTexts_arr;






    std::list<Shared.Models.LocalizableContent> longTexts_list = getLongTexts();
    bourne::json longTexts_arr = bourne::json::array();

    for(auto& var : longTexts_list)
    {
        Shared.Models.LocalizableContent obj = var;
        longTexts_arr.append(obj.toJson());
    }
    object["longTexts"] = longTexts_arr;






    std::list<Shared.Models.LocalizableContent> techTexts_list = getTechTexts();
    bourne::json techTexts_arr = bourne::json::array();

    for(auto& var : techTexts_list)
    {
        Shared.Models.LocalizableContent obj = var;
        techTexts_arr.append(obj.toJson());
    }
    object["techTexts"] = techTexts_arr;







    object["brandId"] = getBrandId();






    object["supplierId"] = getSupplierId();





    std::list<Product.Models.Write.ProductItem> items_list = getItems();
    bourne::json items_arr = bourne::json::array();

    for(auto& var : items_list)
    {
        Product.Models.Write.ProductItem obj = var;
        items_arr.append(obj.toJson());
    }
    object["items"] = items_arr;






    std::list<int> categoryIds_list = getCategoryIds();
    bourne::json categoryIds_arr = bourne::json::array();

    for(auto& var : categoryIds_list)
    {
        categoryIds_arr.append(var);
    }
    object["categoryIds"] = categoryIds_arr;








    std::list<ProductParameter.Models.Write.ProductParameterValue> parameterValues_list = getParameterValues();
    bourne::json parameterValues_arr = bourne::json::array();

    for(auto& var : parameterValues_list)
    {
        ProductParameter.Models.Write.ProductParameterValue obj = var;
        parameterValues_arr.append(obj.toJson());
    }
    object["parameterValues"] = parameterValues_arr;






    std::list<Variant.Models.Write.Variant> variants_list = getVariants();
    bourne::json variants_arr = bourne::json::array();

    for(auto& var : variants_list)
    {
        Variant.Models.Write.Variant obj = var;
        variants_arr.append(obj.toJson());
    }
    object["variants"] = variants_arr;






    std::list<Market.Models.Market> markets_list = getMarkets();
    bourne::json markets_arr = bourne::json::array();

    for(auto& var : markets_list)
    {
        Market.Models.Market obj = var;
        markets_arr.append(obj.toJson());
    }
    object["markets"] = markets_arr;







    object["freightClassId"] = getFreightClassId();






    object["intrastatCode"] = getIntrastatCode();






    object["countryOfOrigin"] = getCountryOfOrigin();






    object["variantGroupId"] = getVariantGroupId();






    object["vat"] = getVat();






    object["vatType"] = getVatType();






    object["externalId"] = getExternalId();






    object["activationDate"] = getActivationDate();



    return object;

}

std::string
Product.Models.Write.Product::getArticleNumber()
{
	return articleNumber;
}

void
Product.Models.Write.Product::setArticleNumber(std::string  articleNumber)
{
	this->articleNumber = articleNumber;
}

std::list<Shared.Models.LocalizableContent>
Product.Models.Write.Product::getNames()
{
	return names;
}

void
Product.Models.Write.Product::setNames(std::list <Shared.Models.LocalizableContent> names)
{
	this->names = names;
}

bool
Product.Models.Write.Product::isActive()
{
	return active;
}

void
Product.Models.Write.Product::setActive(bool  active)
{
	this->active = active;
}

double
Product.Models.Write.Product::getPurchasePrice()
{
	return purchasePrice;
}

void
Product.Models.Write.Product::setPurchasePrice(double  purchasePrice)
{
	this->purchasePrice = purchasePrice;
}

std::string
Product.Models.Write.Product::getPurchasePriceCurrency()
{
	return purchasePriceCurrency;
}

void
Product.Models.Write.Product::setPurchasePriceCurrency(std::string  purchasePriceCurrency)
{
	this->purchasePriceCurrency = purchasePriceCurrency;
}

std::list<Shared.Models.LocalizableContent>
Product.Models.Write.Product::getShortTexts()
{
	return shortTexts;
}

void
Product.Models.Write.Product::setShortTexts(std::list <Shared.Models.LocalizableContent> shortTexts)
{
	this->shortTexts = shortTexts;
}

std::list<Shared.Models.LocalizableContent>
Product.Models.Write.Product::getLongTexts()
{
	return longTexts;
}

void
Product.Models.Write.Product::setLongTexts(std::list <Shared.Models.LocalizableContent> longTexts)
{
	this->longTexts = longTexts;
}

std::list<Shared.Models.LocalizableContent>
Product.Models.Write.Product::getTechTexts()
{
	return techTexts;
}

void
Product.Models.Write.Product::setTechTexts(std::list <Shared.Models.LocalizableContent> techTexts)
{
	this->techTexts = techTexts;
}

int
Product.Models.Write.Product::getBrandId()
{
	return brandId;
}

void
Product.Models.Write.Product::setBrandId(int  brandId)
{
	this->brandId = brandId;
}

int
Product.Models.Write.Product::getSupplierId()
{
	return supplierId;
}

void
Product.Models.Write.Product::setSupplierId(int  supplierId)
{
	this->supplierId = supplierId;
}

std::list<Product.Models.Write.ProductItem>
Product.Models.Write.Product::getItems()
{
	return items;
}

void
Product.Models.Write.Product::setItems(std::list <Product.Models.Write.ProductItem> items)
{
	this->items = items;
}

std::list<int>
Product.Models.Write.Product::getCategoryIds()
{
	return categoryIds;
}

void
Product.Models.Write.Product::setCategoryIds(std::list <int> categoryIds)
{
	this->categoryIds = categoryIds;
}

std::list<ProductParameter.Models.Write.ProductParameterValue>
Product.Models.Write.Product::getParameterValues()
{
	return parameterValues;
}

void
Product.Models.Write.Product::setParameterValues(std::list <ProductParameter.Models.Write.ProductParameterValue> parameterValues)
{
	this->parameterValues = parameterValues;
}

std::list<Variant.Models.Write.Variant>
Product.Models.Write.Product::getVariants()
{
	return variants;
}

void
Product.Models.Write.Product::setVariants(std::list <Variant.Models.Write.Variant> variants)
{
	this->variants = variants;
}

std::list<Market.Models.Market>
Product.Models.Write.Product::getMarkets()
{
	return markets;
}

void
Product.Models.Write.Product::setMarkets(std::list <Market.Models.Market> markets)
{
	this->markets = markets;
}

int
Product.Models.Write.Product::getFreightClassId()
{
	return freightClassId;
}

void
Product.Models.Write.Product::setFreightClassId(int  freightClassId)
{
	this->freightClassId = freightClassId;
}

std::string
Product.Models.Write.Product::getIntrastatCode()
{
	return intrastatCode;
}

void
Product.Models.Write.Product::setIntrastatCode(std::string  intrastatCode)
{
	this->intrastatCode = intrastatCode;
}

std::string
Product.Models.Write.Product::getCountryOfOrigin()
{
	return countryOfOrigin;
}

void
Product.Models.Write.Product::setCountryOfOrigin(std::string  countryOfOrigin)
{
	this->countryOfOrigin = countryOfOrigin;
}

int
Product.Models.Write.Product::getVariantGroupId()
{
	return variantGroupId;
}

void
Product.Models.Write.Product::setVariantGroupId(int  variantGroupId)
{
	this->variantGroupId = variantGroupId;
}

int
Product.Models.Write.Product::getVat()
{
	return vat;
}

void
Product.Models.Write.Product::setVat(int  vat)
{
	this->vat = vat;
}

std::string
Product.Models.Write.Product::getVatType()
{
	return vatType;
}

void
Product.Models.Write.Product::setVatType(std::string  vatType)
{
	this->vatType = vatType;
}

std::string
Product.Models.Write.Product::getExternalId()
{
	return externalId;
}

void
Product.Models.Write.Product::setExternalId(std::string  externalId)
{
	this->externalId = externalId;
}

std::string
Product.Models.Write.Product::getActivationDate()
{
	return activationDate;
}

void
Product.Models.Write.Product::setActivationDate(std::string  activationDate)
{
	this->activationDate = activationDate;
}



