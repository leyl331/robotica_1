// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface:srv/Service.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interface/srv/detail/service__struct.h"
#include "interface/srv/detail/service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interface__srv__service__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interface.srv._service.Service_Request", full_classname_dest, 38) == 0);
  }
  interface__srv__Service_Request * ros_message = _ros_message;
  {  // a1
    PyObject * field = PyObject_GetAttrString(_pymsg, "a1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a2
    PyObject * field = PyObject_GetAttrString(_pymsg, "a2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a3
    PyObject * field = PyObject_GetAttrString(_pymsg, "a3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a4
    PyObject * field = PyObject_GetAttrString(_pymsg, "a4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface__srv__service__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Service_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface.srv._service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Service_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface__srv__Service_Request * ros_message = (interface__srv__Service_Request *)raw_ros_message;
  {  // a1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "interface/srv/detail/service__struct.h"
// already included above
// #include "interface/srv/detail/service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interface__srv__service__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interface.srv._service.Service_Response", full_classname_dest, 39) == 0);
  }
  interface__srv__Service_Response * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ya
    PyObject * field = PyObject_GetAttrString(_pymsg, "ya");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ya = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pi
    PyObject * field = PyObject_GetAttrString(_pymsg, "pi");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pi = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ro
    PyObject * field = PyObject_GetAttrString(_pymsg, "ro");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ro = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface__srv__service__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Service_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface.srv._service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Service_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface__srv__Service_Response * ros_message = (interface__srv__Service_Response *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ya
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ya);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ya", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pi
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ro
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ro);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
