#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class HelloWorldPubNode : public rclcpp::Node
{
    public:
        HelloWorldPubNode() : Node("hello_world_pub_node") 
        {
            publisher_ = this->create_publisher<std_msgs::msg::String("Hello world", 10);
        }
        private:
            rclpp::Publisher<std_msgs::msg::String>::SharedPtr_;
};


int main()
{
    return 0;
}