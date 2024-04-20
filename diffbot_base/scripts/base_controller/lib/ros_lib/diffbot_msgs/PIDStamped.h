#ifndef _ROS_diffbot_msgs_PIDStamped_h
#define _ROS_diffbot_msgs_PIDStamped_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "diffbot_msgs/PID.h"

namespace diffbot_msgs
{

  class PIDStamped : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef diffbot_msgs::PID _pid_type;
      _pid_type pid;

    PIDStamped():
      header(),
      pid()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->pid.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->pid.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "diffbot_msgs/PIDStamped"; };
    const char * getMD5(){ return "76f54f0857a76c5e79d6f9203f257b96"; };

  };

}
#endif
