## Defang IP Address

#### Problem Statement
Given a valid IPv4 address, the goal is to transform the IP address into a "defanged" version where each period (`.`) is replaced with `[.]`. This format prevents the IP address from being recognized as a clickable link in some text editors and web pages, enhancing security by avoiding unintended link generation.

#### Background
IPv4 addresses are typically written in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots (e.g., 127.0.0.1). In contexts where an IP address might be mistakenly interpreted as a hyperlink or when displaying IPs in a more secure format, a defanged version of the IP can be used.

#### Objective
Write a function that takes a valid IPv4 address as input and returns the defanged version of that IP address.

#### Example
**Input:** `192.168.1.1`

**Output:** `192[.]168[.]1[.]1`

#### Function Signature
```cpp
std::string defangIPaddr(const std::string& address);