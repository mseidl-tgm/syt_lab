// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not 
edit.

#include "echo.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



calc::Calculator_ptr calc::Calculator_Helper::_nil() {
  return ::calc::Calculator::_nil();
}

::CORBA::Boolean calc::Calculator_Helper::is_nil(::calc::Calculator_ptr p) {
  return ::CORBA::is_nil(p);

}

void calc::Calculator_Helper::release(::calc::Calculator_ptr p) {
  ::CORBA::release(p);
}

void calc::Calculator_Helper::marshalObjRef(::calc::Calculator_ptr obj, 
cdrStream& s) {
  ::calc::Calculator::_marshalObjRef(obj, s);
}

calc::Calculator_ptr calc::Calculator_Helper::unmarshalObjRef(cdrStream& s) 
{
  return ::calc::Calculator::_unmarshalObjRef(s);
}

void calc::Calculator_Helper::duplicate(::calc::Calculator_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

calc::Calculator_ptr
calc::Calculator::_duplicate(::calc::Calculator_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

calc::Calculator_ptr
calc::Calculator::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


calc::Calculator_ptr
calc::Calculator::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

calc::Calculator_ptr
calc::Calculator::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_Calculator _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_Calculator* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_Calculator;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* calc::Calculator::_PD_repoId = "IDL:calc/Calculator:1.0";


calc::_objref_Calculator::~_objref_Calculator() {
  
}


calc::_objref_Calculator::_objref_Calculator(omniIOR* ior, omniIdentity* id) 
:
   omniObjRef(::calc::Calculator::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
calc::_objref_Calculator::_ptrToObjRef(const char* id)
{
  if (id == ::calc::Calculator::_PD_repoId)
    return (::calc::Calculator_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::calc::Calculator::_PD_repoId))
    return (::calc::Calculator_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for calc::Calculator::addition

// Proxy call descriptor class. Mangled signature:
//  _clong_i_clong_i_clong
class _0RL_cd_c49919b9933592f1_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_c49919b9933592f1_00000000(LocalCallFn lcfn, const char* 
op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::Long arg_0;
  ::CORBA::Long arg_1;
  ::CORBA::Long result;
};

void _0RL_cd_c49919b9933592f1_00000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;
  arg_1 >>= _n;

}

void _0RL_cd_c49919b9933592f1_00000000::unmarshalArguments(cdrStream& _n)
{
  (::CORBA::Long&)arg_0 <<= _n;
  (::CORBA::Long&)arg_1 <<= _n;

}

void _0RL_cd_c49919b9933592f1_00000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;

}

void _0RL_cd_c49919b9933592f1_00000000::unmarshalReturnedValues(cdrStream& 
_n)
{
  (::CORBA::Long&)result <<= _n;

}

const char* const _0RL_cd_c49919b9933592f1_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_c49919b9933592f1_10000000(omniCallDescriptor* cd, omniServant* 
svnt)
{
  _0RL_cd_c49919b9933592f1_00000000* tcd = 
(_0RL_cd_c49919b9933592f1_00000000*)cd;
  calc::_impl_Calculator* impl = (calc::_impl_Calculator*) 
svnt->_ptrToInterface(calc::Calculator::_PD_repoId);
  tcd->result = impl->addition(tcd->arg_0, tcd->arg_1);


}

::CORBA::Long calc::_objref_Calculator::addition(::CORBA::Long number1, 
::CORBA::Long number2)
{
  _0RL_cd_c49919b9933592f1_00000000 
_call_desc(_0RL_lcfn_c49919b9933592f1_10000000, "addition", 9);
  _call_desc.arg_0 = number1;
  _call_desc.arg_1 = number2;

  _invoke(_call_desc);
  return _call_desc.result;


}


//
// Code for calc::Calculator::subtraction

// Local call call-back function.
static void
_0RL_lcfn_c49919b9933592f1_20000000(omniCallDescriptor* cd, omniServant* 
svnt)
{
  _0RL_cd_c49919b9933592f1_00000000* tcd = 
(_0RL_cd_c49919b9933592f1_00000000*)cd;
  calc::_impl_Calculator* impl = (calc::_impl_Calculator*) 
svnt->_ptrToInterface(calc::Calculator::_PD_repoId);
  tcd->result = impl->subtraction(tcd->arg_0, tcd->arg_1);


}

::CORBA::Long calc::_objref_Calculator::subtraction(::CORBA::Long number1, 
::CORBA::Long number2)
{
  _0RL_cd_c49919b9933592f1_00000000 
_call_desc(_0RL_lcfn_c49919b9933592f1_20000000, "subtraction", 12);
  _call_desc.arg_0 = number1;
  _call_desc.arg_1 = number2;

  _invoke(_call_desc);
  return _call_desc.result;


}


//
// Code for calc::Calculator::multiplication

// Local call call-back function.
static void
_0RL_lcfn_c49919b9933592f1_30000000(omniCallDescriptor* cd, omniServant* 
svnt)
{
  _0RL_cd_c49919b9933592f1_00000000* tcd = 
(_0RL_cd_c49919b9933592f1_00000000*)cd;
  calc::_impl_Calculator* impl = (calc::_impl_Calculator*) 
svnt->_ptrToInterface(calc::Calculator::_PD_repoId);
  tcd->result = impl->multiplication(tcd->arg_0, tcd->arg_1);


}

::CORBA::Long calc::_objref_Calculator::multiplication(::CORBA::Long 
number1, ::CORBA::Long number2)
{
  _0RL_cd_c49919b9933592f1_00000000 
_call_desc(_0RL_lcfn_c49919b9933592f1_30000000, "multiplication", 15);
  _call_desc.arg_0 = number1;
  _call_desc.arg_1 = number2;

  _invoke(_call_desc);
  return _call_desc.result;


}


//
// Code for calc::Calculator::division

// Local call call-back function.
static void
_0RL_lcfn_c49919b9933592f1_40000000(omniCallDescriptor* cd, omniServant* 
svnt)
{
  _0RL_cd_c49919b9933592f1_00000000* tcd = 
(_0RL_cd_c49919b9933592f1_00000000*)cd;
  calc::_impl_Calculator* impl = (calc::_impl_Calculator*) 
svnt->_ptrToInterface(calc::Calculator::_PD_repoId);
  tcd->result = impl->division(tcd->arg_0, tcd->arg_1);


}

::CORBA::Long calc::_objref_Calculator::division(::CORBA::Long number1, 
::CORBA::Long number2)
{
  _0RL_cd_c49919b9933592f1_00000000 
_call_desc(_0RL_lcfn_c49919b9933592f1_40000000, "division", 9);
  _call_desc.arg_0 = number1;
  _call_desc.arg_1 = number2;

  _invoke(_call_desc);
  return _call_desc.result;


}

calc::_pof_Calculator::~_pof_Calculator() {}


omniObjRef*
calc::_pof_Calculator::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::calc::_objref_Calculator(ior, id);
}


::CORBA::Boolean
calc::_pof_Calculator::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::calc::Calculator::_PD_repoId))
    return 1;
  
  return 0;
}

const calc::_pof_Calculator _the_pof_calc_mCalculator;

calc::_impl_Calculator::~_impl_Calculator() {}


::CORBA::Boolean
calc::_impl_Calculator::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "addition")) {

    _0RL_cd_c49919b9933592f1_00000000 
_call_desc(_0RL_lcfn_c49919b9933592f1_10000000, "addition", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "subtraction")) {

    _0RL_cd_c49919b9933592f1_00000000 
_call_desc(_0RL_lcfn_c49919b9933592f1_20000000, "subtraction", 12, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "multiplication")) {

    _0RL_cd_c49919b9933592f1_00000000 
_call_desc(_0RL_lcfn_c49919b9933592f1_30000000, "multiplication", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "division")) {

    _0RL_cd_c49919b9933592f1_00000000 
_call_desc(_0RL_lcfn_c49919b9933592f1_40000000, "division", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
calc::_impl_Calculator::_ptrToInterface(const char* id)
{
  if (id == ::calc::Calculator::_PD_repoId)
    return (::calc::_impl_Calculator*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::calc::Calculator::_PD_repoId))
    return (::calc::_impl_Calculator*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
calc::_impl_Calculator::_mostDerivedRepoId()
{
  return ::calc::Calculator::_PD_repoId;
}

POA_calc::Calculator::~Calculator() {}