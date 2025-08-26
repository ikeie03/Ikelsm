#include <doctest/doctest.h>
#include <ikelsm/ikelsm.h>
#include <ikelsm/version.h>

#include <string>

TEST_CASE("Ikelsm") {
  using namespace ikelsm;

  Ikelsm ikelsm("Tests");

  CHECK(ikelsm.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(ikelsm.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(ikelsm.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(ikelsm.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("Ikelsm version") {
  static_assert(std::string_view(IKELSM_VERSION) == std::string_view("1.0"));
  CHECK(std::string(IKELSM_VERSION) == std::string("1.0"));
}
