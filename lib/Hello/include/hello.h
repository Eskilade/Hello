#include <string>

/// @brief Prompts a greeting with the provided name
/// @param name The name to be greeted
/// @rst 
///  .. uml::
///
///     Christian -> Petar: Hi!
///     Petar <- Christian: How are you?
/// @endrst
void greet(std::string name);
