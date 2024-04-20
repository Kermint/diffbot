#ifndef _ROS_diffbot_msgs_WheelsCmd_h
#define _ROS_diffbot_msgs_WheelsCmd_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "diffbot_msgs/AngularVelocities.h"

namespace diffbot_msgs
{

  class WheelsCmd : public ros::Msg
  {
    public:
      typedef diffbot_msgs::AngularVelocities _angular_velocities_type;
      _angular_velocities_type angular_velocities;

    WheelsCmd():
      angular_velocities()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->angular_velocities.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->angular_velocities.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "diffbot_msgs/WheelsCmd"; };
    const char * getMD5(){ return "85d3efcbf77039b4c3993e4dcc872362"; };

  };

}
#endif
