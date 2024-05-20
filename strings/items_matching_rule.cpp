//Input: items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], ruleKey = "color", ruleValue = "silver"
//Output: 1
//Explanation: There is only one item matching the given rule, which is ["computer","silver","lenovo"].


#include "iostream"
#include "vector"

size_t items_matching_rule(std::vector<std::vector<std::string>>& items, const std::string& ruleKey, const std::string& ruleValue) {
    size_t counter = 0;
    for (size_t i = 0; i < items.size(); i += 1) {
        if (ruleKey == "type" && ruleValue == items[i][0]) {
            counter += 1;
        }
        if (ruleKey == "color" && ruleValue == items[i][1]) {
            counter += 1;
        }
        if (ruleKey == "name" && ruleValue == items[i][2]) {
            counter += 1;
        }
    }
    return counter;
}

int main() {
    std::vector<std::vector<std::string>> items;
    items.emplace_back(std::vector<std::string>{"phone","blue","pixel"});
    items.emplace_back(std::vector<std::string>{"computer","silver","lenovo"});
    items.emplace_back(std::vector<std::string>{"phone","gold","iphone"});
    size_t itemsMatching = items_matching_rule(items, "type", "phone");
    std::cout << itemsMatching;
}