#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <functional>


using namespace std::chrono_literals;

class HelloWorldPubNode : public rclcpp::Node
{
    public:
        HelloWorldPubNode() : Node("hello_world_pub_node") 
        {
            publisher_ = this->create_publisher<std_msgs::msg::String("Hello world", 10);
            timer_ = this->create_wall_timer(std::chrono::seconds(1));
        }
        private:
            void publish_hello_world()
            {

            }
            rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
            rclcpp::TimerBase::SharedPtr timer_;
};


int main()
{
    return 0;
}