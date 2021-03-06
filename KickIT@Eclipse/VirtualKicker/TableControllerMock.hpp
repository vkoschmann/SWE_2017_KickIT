#ifndef TABLECONTROLLERMOCK_HPP
#define TABLECONTROLLERMOCK_HPP

#include "../RowControl/InterfaceTableController.hpp"
#include "VirtualKickerWindow.hpp"
#include "../DataType/Vec2.hpp"

class TableControllerMock: public InterfaceTableController {

public:
	TableControllerMock(bool keeper, bool defense, bool midfield, bool offense);
	virtual ~TableControllerMock();

	void run();
	void stop();
	void setBallPos(float x, float y);
	void setKickerWindow(VirtualKickerWindow* p);

private:
	VirtualKickerWindow* window;

};

#endif /* TABLECONTROLLERMOCK_HPP */

