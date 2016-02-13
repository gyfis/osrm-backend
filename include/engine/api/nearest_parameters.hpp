#ifndef ENGINE_API_NEAREST_PARAMETERS_HPP
#define ENGINE_API_NEAREST_PARAMETERS_HPP

#include "engine/api/base_parameters.hpp"

namespace osrm
{
namespace engine
{
namespace api
{

struct NearestParameters : public BaseParameters
{
    unsigned number_of_results;

    bool IsValid() const;
};
}
}
}

#endif // ROUTE_PARAMETERS_HPP