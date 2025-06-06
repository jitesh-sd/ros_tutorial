import rospy
from std_msgs.msg import String

def talker() :
    rospy.init_node("talker",anonymous=True) 
    pub = rospy.Publisher('chatter', String , queue_size=10)

    rate = rospy.Rate(20) 
    rospy.loginfo("i am here")

    while not rospy.is_shutdown() :
        hello_str = "helllo " 
        pub.publish(hello_str)
        rospy.loginfo("sending.....")
        rate.sleep()
    
        
        

if __name__ == '__main__' :
    try :
        talker()
    except rospy.ROSInternalException:
           pass
        
