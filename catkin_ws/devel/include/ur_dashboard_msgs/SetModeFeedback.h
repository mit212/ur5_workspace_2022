// Generated by gencpp from file ur_dashboard_msgs/SetModeFeedback.msg
// DO NOT EDIT!


#ifndef UR_DASHBOARD_MSGS_MESSAGE_SETMODEFEEDBACK_H
#define UR_DASHBOARD_MSGS_MESSAGE_SETMODEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_dashboard_msgs
{
template <class ContainerAllocator>
struct SetModeFeedback_
{
  typedef SetModeFeedback_<ContainerAllocator> Type;

  SetModeFeedback_()
    : current_robot_mode(0)
    , current_safety_mode(0)  {
    }
  SetModeFeedback_(const ContainerAllocator& _alloc)
    : current_robot_mode(0)
    , current_safety_mode(0)  {
  (void)_alloc;
    }



   typedef int8_t _current_robot_mode_type;
  _current_robot_mode_type current_robot_mode;

   typedef int8_t _current_safety_mode_type;
  _current_safety_mode_type current_safety_mode;





  typedef boost::shared_ptr< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct SetModeFeedback_

typedef ::ur_dashboard_msgs::SetModeFeedback_<std::allocator<void> > SetModeFeedback;

typedef boost::shared_ptr< ::ur_dashboard_msgs::SetModeFeedback > SetModeFeedbackPtr;
typedef boost::shared_ptr< ::ur_dashboard_msgs::SetModeFeedback const> SetModeFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator1> & lhs, const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.current_robot_mode == rhs.current_robot_mode &&
    lhs.current_safety_mode == rhs.current_safety_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator1> & lhs, const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur_dashboard_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d48caaba06f88e6be0ba90bf29940534";
  }

  static const char* value(const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd48caaba06f88e6bULL;
  static const uint64_t static_value2 = 0xe0ba90bf29940534ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_dashboard_msgs/SetModeFeedback";
  }

  static const char* value(const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# feedback\n"
"int8 current_robot_mode\n"
"int8 current_safety_mode\n"
"\n"
;
  }

  static const char* value(const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current_robot_mode);
      stream.next(m.current_safety_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetModeFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_dashboard_msgs::SetModeFeedback_<ContainerAllocator>& v)
  {
    s << indent << "current_robot_mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.current_robot_mode);
    s << indent << "current_safety_mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.current_safety_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_DASHBOARD_MSGS_MESSAGE_SETMODEFEEDBACK_H
