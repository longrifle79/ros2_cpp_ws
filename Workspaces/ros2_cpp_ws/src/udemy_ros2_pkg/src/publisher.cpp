#include "rclcpp/rclcpp.hpp"

class HelloWorldPubNode : public rclcpp::Node
{
    public:
        HelloWorldPubNode() : Node("hello_world_pub_node") {}
};


int main()
{
    return 0;
}