// ======================================================================
// \title  HelloWorld.cpp
// \author kasm-user
// \brief  cpp file for HelloWorld component implementation class
// ======================================================================


#include <Components/HelloWorld/HelloWorld.hpp>
#include <FpConfig.hpp>

namespace Components {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  HelloWorld ::
    HelloWorld(
        const char *const compName
    ) : HelloWorldComponentBase(compName)
  {

  }

  HelloWorld ::
    ~HelloWorld()
  {

  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void HelloWorld ::
    SAY_HELLO_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        const Fw::CmdStringArg& greeting
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

} // end namespace Components
