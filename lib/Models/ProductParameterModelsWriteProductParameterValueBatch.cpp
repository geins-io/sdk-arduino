

#include "ProductParameter.Models.Write.ProductParameterValueBatch.h"

using namespace Tiny;

ProductParameter.Models.Write.ProductParameterValueBatch::ProductParameter.Models.Write.ProductParameterValueBatch()
{
	productParameterValues = std::list<ProductParameter.Models.Write.ProductParameterValue>();
}

ProductParameter.Models.Write.ProductParameterValueBatch::ProductParameter.Models.Write.ProductParameterValueBatch(std::string jsonString)
{
	this->fromJson(jsonString);
}

ProductParameter.Models.Write.ProductParameterValueBatch::~ProductParameter.Models.Write.ProductParameterValueBatch()
{

}

void
ProductParameter.Models.Write.ProductParameterValueBatch::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *productParameterValuesKey = "productParameterValues";

    if(object.has_key(productParameterValuesKey))
    {
        bourne::json value = object[productParameterValuesKey];


        std::list<ProductParameter.Models.Write.ProductParameterValue> productParameterValues_list;
        ProductParameter.Models.Write.ProductParameterValue element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            productParameterValues_list.push_back(element);
        }
        productParameterValues = productParameterValues_list;


    }


}

bourne::json
ProductParameter.Models.Write.ProductParameterValueBatch::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<ProductParameter.Models.Write.ProductParameterValue> productParameterValues_list = getProductParameterValues();
    bourne::json productParameterValues_arr = bourne::json::array();

    for(auto& var : productParameterValues_list)
    {
        ProductParameter.Models.Write.ProductParameterValue obj = var;
        productParameterValues_arr.append(obj.toJson());
    }
    object["productParameterValues"] = productParameterValues_arr;




    return object;

}

std::list<ProductParameter.Models.Write.ProductParameterValue>
ProductParameter.Models.Write.ProductParameterValueBatch::getProductParameterValues()
{
	return productParameterValues;
}

void
ProductParameter.Models.Write.ProductParameterValueBatch::setProductParameterValues(std::list <ProductParameter.Models.Write.ProductParameterValue> productParameterValues)
{
	this->productParameterValues = productParameterValues;
}



