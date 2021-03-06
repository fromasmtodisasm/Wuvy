#pragma once

#include <map>
#include <string>
#include <vector>
#include <list>
#include <memory>

namespace Utils {
  namespace Types {
    template<typename Key, typename Val>    using Dataset = std::map<Key, Val>;
    template<typename Key>                  using StringDataset = Dataset<Key, std::string>;
    template<typename Val>                  using Vector = std::vector<Val>;
    template<typename Val>                  using List = std::list<Val>;
    template<typename T>                    using PShared = std::shared_ptr<T>;
    template<typename T>                    using PConstShared = std::shared_ptr<T const>;
    template<typename T>                    using PUnique = std::unique_ptr<T>;
    template<typename T>                    using PConstUnique = std::unique_ptr<T const>;
    // template<typename T>                    using PConstMakeShared = std::make_shared<T const>;
  }
}

// Utils::Types::Type