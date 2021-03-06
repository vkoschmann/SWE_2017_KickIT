#ifndef INTERFACEMOTORCOMMUNICATOR_HPP
#define INTERFACEMOTORCOMMUNICATOR_HPP

class InterfaceMotorCommunicator {
public:
	//virtual ~InterfaceMotorCommunicator(); //Warning without destructor
	virtual void moveTo(float y) = 0;
	virtual void kick() = 0;

private:
	virtual void homing() = 0;
protected:
	char* port;
};

#endif /* INTERFACEMOTORCOMMUNICATOR_HPP */
