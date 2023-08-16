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
    TODO_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

} // end namespace Components
