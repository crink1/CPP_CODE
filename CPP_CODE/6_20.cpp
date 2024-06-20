//#include <iostream>
//#include <list>
//#include <unordered_map>
//
//template<typename KeyType, typename ValueType>
//class LRUCache {
//public:
//    LRUCache(size_t capacity) : capacity(capacity) {}
//
//    ValueType get(const KeyType& key) {
//        auto it = cacheMap.find(key);
//        if (it == cacheMap.end()) {
//            throw std::runtime_error("Key not found");
//        }
//        cacheList.splice(cacheList.begin(), cacheList, it->second); // Move the accessed node to the front
//        return it->second->second;
//    }
//
//    void put(const KeyType& key, const ValueType& value) {
//        auto it = cacheMap.find(key);
//        if (it != cacheMap.end()) {
//            cacheList.erase(it->second); // Remove the old node
//            cacheMap.erase(it);
//        }
//        cacheList.push_front(std::make_pair(key, value)); // Insert the new node at the front
//        cacheMap[key] = cacheList.begin();
//        if (cacheMap.size() > capacity) {
//            auto last = cacheList.end();
//            last--;
//            cacheMap.erase(last->first);
//            cacheList.pop_back(); // Remove the last node if the capacity is exceeded
//        }
//    }
//
//private:
//    size_t capacity;
//    std::list<std::pair<KeyType, ValueType>> cacheList;
//    std::unordered_map<KeyType, typename std::list<std::pair<KeyType, ValueType>>::iterator> cacheMap;
//};
//
//int main() {
//    LRUCache<int, std::string> cache(3); // Create a cache with a capacity of 3
//    cache.put(1, "one");
//    cache.put(2, "two");
//    cache.put(3, "three");
//    std::cout << "Value for key 1: " << cache.get(1) << std::endl; // Access key 1, should print "one"
//    cache.put(4, "four"); // This should evict key 2 as it is the least recently used
//    try {
//        std::cout << "Value for key 2: " << cache.get(2) << std::endl; // This should throw an exception
//    }
//    catch (const std::runtime_error& e) {
//        std::cout << e.what() << std::endl; // Print "Key not found"
//    }
//    return 0;
//}
