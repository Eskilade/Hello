#include <string>

/// @brief Prompts a greeting with the provided name
/// @param name The name to be greeted
/// @rst 
///  .. uml::
///
///     Alice -> Bob: Hi!
///     Alice <- Bob: How are you?
/// @endrst
void greet(std::string name);
