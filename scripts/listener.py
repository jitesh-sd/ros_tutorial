import rospy
from std_msgs.msg import String

def chat_callback(data) :
    rospy.loginfo("i have heard something",data)

def listener() :
    rospy.init_node("listener") 
    sub = rospy.Subscriber('chatter', String , callback=chat_callback)

    rospy.spin()

        
        
        

if __name__ == '__main__' :
    listener()
        
