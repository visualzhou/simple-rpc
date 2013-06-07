// This file was generated by 'callback.py'.
// Do not hand-edit anything here.
#ifndef CALLBACK_INSTANCES_HEADER
#define CALLBACK_INSTANCES_HEADER

namespace rpc {

template<typename Res, typename Args1=void, typename Args2=void, typename Args3=void, typename Args4=void>
class Callback;

template<typename Res>
class Callback<Res> {
public:
  virtual ~Callback() {}

  virtual Res run() = 0;
  Res operator()() { return this->run(); }
  virtual bool once() const { return false; }
};

template<typename Res,typename Arg1>
class Callback<Res,Arg1> {
public:
  virtual ~Callback() {}

  virtual Res run(Arg1) = 0;
  Res operator()(Arg1 arg1) { return this->run(arg1); }
  virtual bool once() const { return false; }
};

template<typename Res,typename Arg1,typename Arg2>
class Callback<Res,Arg1,Arg2> {
public:
  virtual ~Callback() {}

  virtual Res run(Arg1,Arg2) = 0;
  Res operator()(Arg1 arg1, Arg2 arg2) { return this->run(arg1, arg2); }
  virtual bool once() const { return false; }
};

template<typename Res,typename Arg1,typename Arg2,typename Arg3>
class Callback<Res,Arg1,Arg2,Arg3> {
public:
  virtual ~Callback() {}

  virtual Res run(Arg1,Arg2,Arg3) = 0;
  Res operator()(Arg1 arg1, Arg2 arg2, Arg3 arg3) { return this->run(arg1, arg2, arg3); }
  virtual bool once() const { return false; }
};

template<typename Target, typename Res>
class CallableOnce_0_0 :
  public Callback<Res> {

public:
  typedef Res(Target::*TargetFunc)();

  CallableOnce_0_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~CallableOnce_0_0() {}

  virtual Res run() {
    Res ret = ((*obj_).*target_func_)();
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target>
class CallableOnce_0_0<Target, void> :
  public Callback<void> {

public:
  typedef void(Target::*TargetFunc)();

  CallableOnce_0_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~CallableOnce_0_0() {}

  virtual void run() {
    ((*obj_).*target_func_)();
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Res>
CallableOnce_0_0<Target, Res>*
makeCallableOnce(
    Res (Target::*f)(),
    Target* obj) {
  return new CallableOnce_0_0<Target,Res>(
    f,
    obj);
}

template<typename Target, typename Res>
class Callable_0_0 :
  public Callback<Res> {

public:
  typedef Res(Target::*TargetFunc)();

  Callable_0_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~Callable_0_0() {}

  virtual Res run() {
    return ((*obj_).*target_func_)();
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Res>
Callable_0_0<Target, Res>*
makeCallable(
    Res (Target::*f)(),
    Target* obj) {
  return new Callable_0_0<Target,Res>(
    f,
    obj);
}
template<typename Target, typename Res, typename Arg1>
class CallableOnce_1_0 :
  public Callback<Res, Arg1> {

public:
  typedef Res(Target::*TargetFunc)(Arg1);

  CallableOnce_1_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~CallableOnce_1_0() {}

  virtual Res run(Arg1 arg1) {
    Res ret = ((*obj_).*target_func_)(arg1);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Arg1>
class CallableOnce_1_0<Target, void, Arg1> :
  public Callback<void, Arg1> {

public:
  typedef void(Target::*TargetFunc)(Arg1);

  CallableOnce_1_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~CallableOnce_1_0() {}

  virtual void run(Arg1 arg1) {
    ((*obj_).*target_func_)(arg1);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Res, typename Arg1>
CallableOnce_1_0<Target, Res, Arg1>*
makeCallableOnce(
    Res (Target::*f)(Arg1),
    Target* obj) {
  return new CallableOnce_1_0<Target,Res, Arg1>(
    f,
    obj);
}

template<typename Target, typename Res, typename Arg1>
class Callable_1_0 :
  public Callback<Res, Arg1> {

public:
  typedef Res(Target::*TargetFunc)(Arg1);

  Callable_1_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~Callable_1_0() {}

  virtual Res run(Arg1 arg1) {
    return ((*obj_).*target_func_)(arg1);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Res, typename Arg1>
Callable_1_0<Target, Res, Arg1>*
makeCallable(
    Res (Target::*f)(Arg1),
    Target* obj) {
  return new Callable_1_0<Target,Res, Arg1>(
    f,
    obj);
}

template<typename Target, typename Res, typename Bind1>
class CallableOnce_1_1 :
  public Callback<Res> {

public:
  typedef Res(Target::*TargetFunc)(Bind1);

  CallableOnce_1_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~CallableOnce_1_1() {}

  virtual Res run() {
    Res ret = ((*obj_).*target_func_)(bind1_);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Bind1>
class CallableOnce_1_1<Target, void, Bind1> :
  public Callback<void> {

public:
  typedef void(Target::*TargetFunc)(Bind1);

  CallableOnce_1_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~CallableOnce_1_1() {}

  virtual void run() {
    ((*obj_).*target_func_)(bind1_);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Res, typename Bind1>
CallableOnce_1_1<Target, Res, Bind1>*
makeCallableOnce(
    Res (Target::*f)(Bind1),
    Target* obj,
    Bind1 bind1) {
  return new CallableOnce_1_1<Target,Res, Bind1>(
    f,
    obj,
    bind1);
}

template<typename Target, typename Res, typename Bind1>
class Callable_1_1 :
  public Callback<Res> {

public:
  typedef Res(Target::*TargetFunc)(Bind1);

  Callable_1_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~Callable_1_1() {}

  virtual Res run() {
    return ((*obj_).*target_func_)(bind1_);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Res, typename Bind1>
Callable_1_1<Target, Res, Bind1>*
makeCallable(
    Res (Target::*f)(Bind1),
    Target* obj,
    Bind1 bind1) {
  return new Callable_1_1<Target,Res, Bind1>(
    f,
    obj,
    bind1);
}
template<typename Target, typename Res, typename Arg1, typename Arg2>
class CallableOnce_2_0 :
  public Callback<Res, Arg1, Arg2> {

public:
  typedef Res(Target::*TargetFunc)(Arg1, Arg2);

  CallableOnce_2_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~CallableOnce_2_0() {}

  virtual Res run(Arg1 arg1, Arg2 arg2) {
    Res ret = ((*obj_).*target_func_)(arg1, arg2);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Arg1, typename Arg2>
class CallableOnce_2_0<Target, void, Arg1, Arg2> :
  public Callback<void, Arg1, Arg2> {

public:
  typedef void(Target::*TargetFunc)(Arg1, Arg2);

  CallableOnce_2_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~CallableOnce_2_0() {}

  virtual void run(Arg1 arg1, Arg2 arg2) {
    ((*obj_).*target_func_)(arg1, arg2);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Res, typename Arg1, typename Arg2>
CallableOnce_2_0<Target, Res, Arg1, Arg2>*
makeCallableOnce(
    Res (Target::*f)(Arg1, Arg2),
    Target* obj) {
  return new CallableOnce_2_0<Target,Res, Arg1, Arg2>(
    f,
    obj);
}

template<typename Target, typename Res, typename Arg1, typename Arg2>
class Callable_2_0 :
  public Callback<Res, Arg1, Arg2> {

public:
  typedef Res(Target::*TargetFunc)(Arg1, Arg2);

  Callable_2_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~Callable_2_0() {}

  virtual Res run(Arg1 arg1, Arg2 arg2) {
    return ((*obj_).*target_func_)(arg1, arg2);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Res, typename Arg1, typename Arg2>
Callable_2_0<Target, Res, Arg1, Arg2>*
makeCallable(
    Res (Target::*f)(Arg1, Arg2),
    Target* obj) {
  return new Callable_2_0<Target,Res, Arg1, Arg2>(
    f,
    obj);
}

template<typename Target, typename Res, typename Bind1, typename Arg1>
class CallableOnce_2_1 :
  public Callback<Res, Arg1> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Arg1);

  CallableOnce_2_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~CallableOnce_2_1() {}

  virtual Res run(Arg1 arg1) {
    Res ret = ((*obj_).*target_func_)(bind1_, arg1);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Bind1, typename Arg1>
class CallableOnce_2_1<Target, void, Bind1, Arg1> :
  public Callback<void, Arg1> {

public:
  typedef void(Target::*TargetFunc)(Bind1, Arg1);

  CallableOnce_2_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~CallableOnce_2_1() {}

  virtual void run(Arg1 arg1) {
    ((*obj_).*target_func_)(bind1_, arg1);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Res, typename Bind1, typename Arg1>
CallableOnce_2_1<Target, Res, Bind1, Arg1>*
makeCallableOnce(
    Res (Target::*f)(Bind1, Arg1),
    Target* obj,
    Bind1 bind1) {
  return new CallableOnce_2_1<Target,Res, Bind1, Arg1>(
    f,
    obj,
    bind1);
}

template<typename Target, typename Res, typename Bind1, typename Arg1>
class Callable_2_1 :
  public Callback<Res, Arg1> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Arg1);

  Callable_2_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~Callable_2_1() {}

  virtual Res run(Arg1 arg1) {
    return ((*obj_).*target_func_)(bind1_, arg1);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Res, typename Bind1, typename Arg1>
Callable_2_1<Target, Res, Bind1, Arg1>*
makeCallable(
    Res (Target::*f)(Bind1, Arg1),
    Target* obj,
    Bind1 bind1) {
  return new Callable_2_1<Target,Res, Bind1, Arg1>(
    f,
    obj,
    bind1);
}

template<typename Target, typename Res, typename Bind1, typename Bind2>
class CallableOnce_2_2 :
  public Callback<Res> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Bind2);

  CallableOnce_2_2(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2) { }

  virtual ~CallableOnce_2_2() {}

  virtual Res run() {
    Res ret = ((*obj_).*target_func_)(bind1_, bind2_);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
};

template<typename Target, typename Bind1, typename Bind2>
class CallableOnce_2_2<Target, void, Bind1, Bind2> :
  public Callback<void> {

public:
  typedef void(Target::*TargetFunc)(Bind1, Bind2);

  CallableOnce_2_2(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2) { }

  virtual ~CallableOnce_2_2() {}

  virtual void run() {
    ((*obj_).*target_func_)(bind1_, bind2_);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
};

template<typename Target, typename Res, typename Bind1, typename Bind2>
CallableOnce_2_2<Target, Res, Bind1, Bind2>*
makeCallableOnce(
    Res (Target::*f)(Bind1, Bind2),
    Target* obj,
    Bind1 bind1,
    Bind2 bind2) {
  return new CallableOnce_2_2<Target,Res, Bind1, Bind2>(
    f,
    obj,
    bind1,
    bind2);
}

template<typename Target, typename Res, typename Bind1, typename Bind2>
class Callable_2_2 :
  public Callback<Res> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Bind2);

  Callable_2_2(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2) { }

  virtual ~Callable_2_2() {}

  virtual Res run() {
    return ((*obj_).*target_func_)(bind1_, bind2_);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
};

template<typename Target, typename Res, typename Bind1, typename Bind2>
Callable_2_2<Target, Res, Bind1, Bind2>*
makeCallable(
    Res (Target::*f)(Bind1, Bind2),
    Target* obj,
    Bind1 bind1,
    Bind2 bind2) {
  return new Callable_2_2<Target,Res, Bind1, Bind2>(
    f,
    obj,
    bind1,
    bind2);
}
template<typename Target, typename Res, typename Arg1, typename Arg2, typename Arg3>
class CallableOnce_3_0 :
  public Callback<Res, Arg1, Arg2, Arg3> {

public:
  typedef Res(Target::*TargetFunc)(Arg1, Arg2, Arg3);

  CallableOnce_3_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~CallableOnce_3_0() {}

  virtual Res run(Arg1 arg1, Arg2 arg2, Arg3 arg3) {
    Res ret = ((*obj_).*target_func_)(arg1, arg2, arg3);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Arg1, typename Arg2, typename Arg3>
class CallableOnce_3_0<Target, void, Arg1, Arg2, Arg3> :
  public Callback<void, Arg1, Arg2, Arg3> {

public:
  typedef void(Target::*TargetFunc)(Arg1, Arg2, Arg3);

  CallableOnce_3_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~CallableOnce_3_0() {}

  virtual void run(Arg1 arg1, Arg2 arg2, Arg3 arg3) {
    ((*obj_).*target_func_)(arg1, arg2, arg3);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Res, typename Arg1, typename Arg2, typename Arg3>
CallableOnce_3_0<Target, Res, Arg1, Arg2, Arg3>*
makeCallableOnce(
    Res (Target::*f)(Arg1, Arg2, Arg3),
    Target* obj) {
  return new CallableOnce_3_0<Target,Res, Arg1, Arg2, Arg3>(
    f,
    obj);
}

template<typename Target, typename Res, typename Arg1, typename Arg2, typename Arg3>
class Callable_3_0 :
  public Callback<Res, Arg1, Arg2, Arg3> {

public:
  typedef Res(Target::*TargetFunc)(Arg1, Arg2, Arg3);

  Callable_3_0(TargetFunc target_func,
    Target* obj)
    : target_func_(target_func),
      obj_(obj) { }

  virtual ~Callable_3_0() {}

  virtual Res run(Arg1 arg1, Arg2 arg2, Arg3 arg3) {
    return ((*obj_).*target_func_)(arg1, arg2, arg3);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here

};

template<typename Target, typename Res, typename Arg1, typename Arg2, typename Arg3>
Callable_3_0<Target, Res, Arg1, Arg2, Arg3>*
makeCallable(
    Res (Target::*f)(Arg1, Arg2, Arg3),
    Target* obj) {
  return new Callable_3_0<Target,Res, Arg1, Arg2, Arg3>(
    f,
    obj);
}

template<typename Target, typename Res, typename Bind1, typename Arg1, typename Arg2>
class CallableOnce_3_1 :
  public Callback<Res, Arg1, Arg2> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Arg1, Arg2);

  CallableOnce_3_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~CallableOnce_3_1() {}

  virtual Res run(Arg1 arg1, Arg2 arg2) {
    Res ret = ((*obj_).*target_func_)(bind1_, arg1, arg2);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Bind1, typename Arg1, typename Arg2>
class CallableOnce_3_1<Target, void, Bind1, Arg1, Arg2> :
  public Callback<void, Arg1, Arg2> {

public:
  typedef void(Target::*TargetFunc)(Bind1, Arg1, Arg2);

  CallableOnce_3_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~CallableOnce_3_1() {}

  virtual void run(Arg1 arg1, Arg2 arg2) {
    ((*obj_).*target_func_)(bind1_, arg1, arg2);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Res, typename Bind1, typename Arg1, typename Arg2>
CallableOnce_3_1<Target, Res, Bind1, Arg1, Arg2>*
makeCallableOnce(
    Res (Target::*f)(Bind1, Arg1, Arg2),
    Target* obj,
    Bind1 bind1) {
  return new CallableOnce_3_1<Target,Res, Bind1, Arg1, Arg2>(
    f,
    obj,
    bind1);
}

template<typename Target, typename Res, typename Bind1, typename Arg1, typename Arg2>
class Callable_3_1 :
  public Callback<Res, Arg1, Arg2> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Arg1, Arg2);

  Callable_3_1(TargetFunc target_func,
    Target* obj,
    Bind1 bind1)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1) { }

  virtual ~Callable_3_1() {}

  virtual Res run(Arg1 arg1, Arg2 arg2) {
    return ((*obj_).*target_func_)(bind1_, arg1, arg2);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
};

template<typename Target, typename Res, typename Bind1, typename Arg1, typename Arg2>
Callable_3_1<Target, Res, Bind1, Arg1, Arg2>*
makeCallable(
    Res (Target::*f)(Bind1, Arg1, Arg2),
    Target* obj,
    Bind1 bind1) {
  return new Callable_3_1<Target,Res, Bind1, Arg1, Arg2>(
    f,
    obj,
    bind1);
}

template<typename Target, typename Res, typename Bind1, typename Bind2, typename Arg1>
class CallableOnce_3_2 :
  public Callback<Res, Arg1> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Bind2, Arg1);

  CallableOnce_3_2(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2) { }

  virtual ~CallableOnce_3_2() {}

  virtual Res run(Arg1 arg1) {
    Res ret = ((*obj_).*target_func_)(bind1_, bind2_, arg1);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
};

template<typename Target, typename Bind1, typename Bind2, typename Arg1>
class CallableOnce_3_2<Target, void, Bind1, Bind2, Arg1> :
  public Callback<void, Arg1> {

public:
  typedef void(Target::*TargetFunc)(Bind1, Bind2, Arg1);

  CallableOnce_3_2(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2) { }

  virtual ~CallableOnce_3_2() {}

  virtual void run(Arg1 arg1) {
    ((*obj_).*target_func_)(bind1_, bind2_, arg1);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
};

template<typename Target, typename Res, typename Bind1, typename Bind2, typename Arg1>
CallableOnce_3_2<Target, Res, Bind1, Bind2, Arg1>*
makeCallableOnce(
    Res (Target::*f)(Bind1, Bind2, Arg1),
    Target* obj,
    Bind1 bind1,
    Bind2 bind2) {
  return new CallableOnce_3_2<Target,Res, Bind1, Bind2, Arg1>(
    f,
    obj,
    bind1,
    bind2);
}

template<typename Target, typename Res, typename Bind1, typename Bind2, typename Arg1>
class Callable_3_2 :
  public Callback<Res, Arg1> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Bind2, Arg1);

  Callable_3_2(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2) { }

  virtual ~Callable_3_2() {}

  virtual Res run(Arg1 arg1) {
    return ((*obj_).*target_func_)(bind1_, bind2_, arg1);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
};

template<typename Target, typename Res, typename Bind1, typename Bind2, typename Arg1>
Callable_3_2<Target, Res, Bind1, Bind2, Arg1>*
makeCallable(
    Res (Target::*f)(Bind1, Bind2, Arg1),
    Target* obj,
    Bind1 bind1,
    Bind2 bind2) {
  return new Callable_3_2<Target,Res, Bind1, Bind2, Arg1>(
    f,
    obj,
    bind1,
    bind2);
}

template<typename Target, typename Res, typename Bind1, typename Bind2, typename Bind3>
class CallableOnce_3_3 :
  public Callback<Res> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Bind2, Bind3);

  CallableOnce_3_3(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2,
    Bind3 bind3)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2),
      bind3_(bind3) { }

  virtual ~CallableOnce_3_3() {}

  virtual Res run() {
    Res ret = ((*obj_).*target_func_)(bind1_, bind2_, bind3_);
    delete this;
    return ret;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
  Bind3 bind3_;
};

template<typename Target, typename Bind1, typename Bind2, typename Bind3>
class CallableOnce_3_3<Target, void, Bind1, Bind2, Bind3> :
  public Callback<void> {

public:
  typedef void(Target::*TargetFunc)(Bind1, Bind2, Bind3);

  CallableOnce_3_3(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2,
    Bind3 bind3)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2),
      bind3_(bind3) { }

  virtual ~CallableOnce_3_3() {}

  virtual void run() {
    ((*obj_).*target_func_)(bind1_, bind2_, bind3_);
    delete this;
  }

  virtual bool once() const {
    return true;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
  Bind3 bind3_;
};

template<typename Target, typename Res, typename Bind1, typename Bind2, typename Bind3>
CallableOnce_3_3<Target, Res, Bind1, Bind2, Bind3>*
makeCallableOnce(
    Res (Target::*f)(Bind1, Bind2, Bind3),
    Target* obj,
    Bind1 bind1,
    Bind2 bind2,
    Bind3 bind3) {
  return new CallableOnce_3_3<Target,Res, Bind1, Bind2, Bind3>(
    f,
    obj,
    bind1,
    bind2,
    bind3);
}

template<typename Target, typename Res, typename Bind1, typename Bind2, typename Bind3>
class Callable_3_3 :
  public Callback<Res> {

public:
  typedef Res(Target::*TargetFunc)(Bind1, Bind2, Bind3);

  Callable_3_3(TargetFunc target_func,
    Target* obj,
    Bind1 bind1,
    Bind2 bind2,
    Bind3 bind3)
    : target_func_(target_func),
      obj_(obj),
      bind1_(bind1),
      bind2_(bind2),
      bind3_(bind3) { }

  virtual ~Callable_3_3() {}

  virtual Res run() {
    return ((*obj_).*target_func_)(bind1_, bind2_, bind3_);
  }

  virtual bool once() const {
    return false;
  }

private:
  TargetFunc target_func_; // not owned here
  Target* obj_;            // not owned here
  Bind1 bind1_;
  Bind2 bind2_;
  Bind3 bind3_;
};

template<typename Target, typename Res, typename Bind1, typename Bind2, typename Bind3>
Callable_3_3<Target, Res, Bind1, Bind2, Bind3>*
makeCallable(
    Res (Target::*f)(Bind1, Bind2, Bind3),
    Target* obj,
    Bind1 bind1,
    Bind2 bind2,
    Bind3 bind3) {
  return new Callable_3_3<Target,Res, Bind1, Bind2, Bind3>(
    f,
    obj,
    bind1,
    bind2,
    bind3);
}
}  // namespace rpc

#endif  // CALLBACK_INSTANCES_HEADER
