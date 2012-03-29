
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_TreeModelEvent__
#define __javax_swing_event_TreeModelEvent__

#pragma interface

#include <java/util/EventObject.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class TreeModelEvent;
      }
      namespace tree
      {
          class TreePath;
      }
    }
  }
}

class javax::swing::event::TreeModelEvent : public ::java::util::EventObject
{

public:
  TreeModelEvent(::java::lang::Object *, JArray< ::java::lang::Object * > *);
  TreeModelEvent(::java::lang::Object *, JArray< ::java::lang::Object * > *, JArray< jint > *, JArray< ::java::lang::Object * > *);
  TreeModelEvent(::java::lang::Object *, ::javax::swing::tree::TreePath *);
  TreeModelEvent(::java::lang::Object *, ::javax::swing::tree::TreePath *, JArray< jint > *, JArray< ::java::lang::Object * > *);
  virtual JArray< jint > * getChildIndices();
  virtual JArray< ::java::lang::Object * > * getChildren();
  virtual JArray< ::java::lang::Object * > * getPath();
  virtual ::javax::swing::tree::TreePath * getTreePath();
  virtual ::java::lang::String * toString();
public: // actually protected
  JArray< jint > * __attribute__((aligned(__alignof__( ::java::util::EventObject)))) childIndices;
  JArray< ::java::lang::Object * > * children;
  ::javax::swing::tree::TreePath * path;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_event_TreeModelEvent__