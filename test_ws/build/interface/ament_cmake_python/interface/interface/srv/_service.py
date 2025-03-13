# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface:srv/Service.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Service_Request(type):
    """Metaclass of message 'Service_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface.srv.Service_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Service_Request(metaclass=Metaclass_Service_Request):
    """Message class 'Service_Request'."""

    __slots__ = [
        '_a1',
        '_a2',
        '_a3',
        '_a4',
    ]

    _fields_and_field_types = {
        'a1': 'double',
        'a2': 'double',
        'a3': 'double',
        'a4': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a1 = kwargs.get('a1', float())
        self.a2 = kwargs.get('a2', float())
        self.a3 = kwargs.get('a3', float())
        self.a4 = kwargs.get('a4', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.a1 != other.a1:
            return False
        if self.a2 != other.a2:
            return False
        if self.a3 != other.a3:
            return False
        if self.a4 != other.a4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a1(self):
        """Message field 'a1'."""
        return self._a1

    @a1.setter
    def a1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a1 = value

    @builtins.property
    def a2(self):
        """Message field 'a2'."""
        return self._a2

    @a2.setter
    def a2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a2 = value

    @builtins.property
    def a3(self):
        """Message field 'a3'."""
        return self._a3

    @a3.setter
    def a3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a3 = value

    @builtins.property
    def a4(self):
        """Message field 'a4'."""
        return self._a4

    @a4.setter
    def a4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a4 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Service_Response(type):
    """Metaclass of message 'Service_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface.srv.Service_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Service_Response(metaclass=Metaclass_Service_Response):
    """Message class 'Service_Response'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_ya',
        '_pi',
        '_ro',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'ya': 'double',
        'pi': 'double',
        'ro': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.ya = kwargs.get('ya', float())
        self.pi = kwargs.get('pi', float())
        self.ro = kwargs.get('ro', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.ya != other.ya:
            return False
        if self.pi != other.pi:
            return False
        if self.ro != other.ro:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def ya(self):
        """Message field 'ya'."""
        return self._ya

    @ya.setter
    def ya(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ya' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ya' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ya = value

    @builtins.property
    def pi(self):
        """Message field 'pi'."""
        return self._pi

    @pi.setter
    def pi(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pi' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pi' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pi = value

    @builtins.property
    def ro(self):
        """Message field 'ro'."""
        return self._ro

    @ro.setter
    def ro(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ro' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ro' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ro = value


class Metaclass_Service(type):
    """Metaclass of service 'Service'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface.srv.Service')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__service

            from interface.srv import _service
            if _service.Metaclass_Service_Request._TYPE_SUPPORT is None:
                _service.Metaclass_Service_Request.__import_type_support__()
            if _service.Metaclass_Service_Response._TYPE_SUPPORT is None:
                _service.Metaclass_Service_Response.__import_type_support__()


class Service(metaclass=Metaclass_Service):
    from interface.srv._service import Service_Request as Request
    from interface.srv._service import Service_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
