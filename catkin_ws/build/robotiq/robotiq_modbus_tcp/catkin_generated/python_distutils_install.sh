#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ur5/catkin_ws/src/robotiq/robotiq_modbus_tcp"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ur5/catkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ur5/catkin_ws/install/lib/python2.7/dist-packages:/home/ur5/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ur5/catkin_ws/build" \
    "/usr/bin/python2" \
    "/home/ur5/catkin_ws/src/robotiq/robotiq_modbus_tcp/setup.py" \
     \
    build --build-base "/home/ur5/catkin_ws/build/robotiq/robotiq_modbus_tcp" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/ur5/catkin_ws/install" --install-scripts="/home/ur5/catkin_ws/install/bin"
