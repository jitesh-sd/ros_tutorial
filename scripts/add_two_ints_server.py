import rospy
from beginner_tutorials.srv import AddTwoInts,AddTwoIntsResponse

def handle_add_two_ints(req) :
    print("Returning [%s + %s = %s]"%(req.a, req.b, (req.a + req.b)))
    return AddTwoIntsResponse(req.a + req.b)


def add_two_ints_server() :
    rospy.init_node("add_two_ints_server",anonymous=True)
    s = rospy.Service('add_two_ints', AddTwoInts , handle_add_two_ints)

    print("ready two add two ints")
    rospy.spin() 

if __name__ == '__main__' :
    add_two_ints_server()